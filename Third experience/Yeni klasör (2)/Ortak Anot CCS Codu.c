#include <16F877A.h>
#fuses HS,NOWDT,NOPROTECT,NOLVP
#use delay(clock=20000000)
char dizi[]={0x40, 0x79, 0x24, 0x30, 0x19, 0x12, 0x03, 0x78, 0x00, 0x10, 0x08, 0x03, 0x46, 0x21, 0x06, 0x0E};
char x=0;
void main()
{
while(1)
{
output_b(dizi[x]);
delay_ms(500);
x++;
if(x>9) x=0;
}
}


