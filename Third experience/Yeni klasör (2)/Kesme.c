#include <16F877.h>
#device *=16
#fuses HS, NOWDT, NOLVP, NOBROWNOUT, NOPROTECT, PUT, NODEBUG
#use delay(clock=20000000)

void main()
{
while(true)
{
if(!input(PIN_A0))
{
while(!input(PIN_A0));
output_toggle(PIN_B0);
}
delay_ms(700);
output_toggle(PIN_B1);
}
}
