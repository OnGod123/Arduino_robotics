include <reg51.h>

/**
*setup:- a function where other code run
*pinmode: - function that supply current to a LED
* @LED_BUILTIN:- a preprocessor micro of sbit or byte
* @output: - return 0 or 1 to the micro-controller. 
**/
void setup()
{
 pinMode(LED_BUILTIN, OUTPUT)
}
// the loop function run over an over  again
void loop() 
{
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW;
delay(1000);
}
