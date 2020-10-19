#include <16F877A.h>
#fuses HS,NOWDT,NOPROTECT,NOLVP
#use delay(clock=20000000)

void main()
{
basla:
if(input(PIN_A0))
output_b(255);
else
output_b(1);
goto basla;
}
