#include <stdio.h>

int main(){
   printf("\x1b[40m\x1b[33m----------------------------------------------\n");
   printf("             N O T A  L E G A L               \n");
   printf("----------------------------------------------\n");
   printf("ITEM                    QTD              \x1b[0m\x1b[40m\x1b[31mVALOR\n\n\x1b[0m");          
   printf("\x1b[40m\x1b[33m%-23s %03i \x1b[0m\x1b[40m\x1b[31m%18.2f\n", "Banana nanica", 2, 20.00);
   printf("\x1b[0m\x1b[40m\x1b[33m%-23s %03i \x1b[0m\x1b[40m\x1b[31m%18.2f\n", "Uva globo", 1, 15.00);  
   printf("\x1b[0m\x1b[40m\x1b[33m%-23s %03i \x1b[0m\x1b[40m\x1b[31m%18.2f\n", "Laranja limao", 1, 10.00);
   //printf("Banana nanica            2               20,00\n");
   //printf("Uva globo                1               15,00\n");          
   //printf("Laranja lima             1               10,00\n"); 
   printf("\x1b[40m\x1b[33m----------------------------------------------\n");      
   printf("TOTAL                   4                \x1b[0m\x1b[40m\x1b[31m65,00\n");          
   printf("\x1b[0m\x1b[40m\x1b[33m----------------------------------------------\n");





  return 0;

  
}





