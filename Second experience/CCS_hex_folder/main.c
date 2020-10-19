#include <16F877A.h>    
#fuses XT,NOWDT,NOPROTECT,NOBROWNOUT,NOLVP,NOPUT,NOWRT,NODEBUG,NOCPD 
#use delay(clock=4000000)   
#use fast_io(b) 
void main ()
{
   setup_psp(PSP_DISABLED);        
   setup_timer_1(T1_DISABLED);     
   setup_timer_2(T2_DISABLED,0,1); 
   setup_adc_ports(NO_ANALOGS);    
   setup_adc(ADC_OFF);             
   setup_CCP1(CCP_OFF);            
   setup_CCP2(CCP_OFF);            

   set_tris_b(0x00);    

   output_b(0x00);       

   basla:               

   output_high(pin_b0);  
   delay_ms(500);        
   output_low(pin_b0);   
   delay_ms(500);        

   goto basla;           
}

