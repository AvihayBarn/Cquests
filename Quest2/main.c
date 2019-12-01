#include <stdio.h>
#include "myBank.h"

int main(){

    char ans;
    while(ans!='E'){
       printf("Transction Type? (O/B/D/W/I/C/P/E) \n");
       scanf(" %c",&ans);

        if(ans=='O'){
          printf("Initial Deposite? \n");
          float o;
          scanf("%f",&o);
          OpenAc(o);
        }

        else if(ans=='B'){
         printf("Account Number? \n");
          int b;
          scanf("%d",&b);
           BalanceFac(b);
        }
        
       else if(ans=='D'){
          printf("Account Number? \n");
          int d;
          scanf("%d",&d);
          Deposite(d);
       }
       else if(ans=='W'){
          printf("Account Number? \n");
          int w;
          scanf(" %d",&w);
          Withdrawal(w);
       }
        else if(ans=='I'){
          printf("Interesting Rate? \n");
          float i;
          scanf(" %f",&i);
          AddRate(i);
        }
        else if(ans=='C'){
          printf("Account Number? \n");
          int c;
          scanf(" %d",&c);
          CloseAccount(c);
        }
        else if(ans=='P'){
          PrintAll();
        }
        else if(ans!='O' || ans!='B' || ans!='D' || ans!='W' || ans!='I' || ans!='C' || ans!='P' || ans!='E'){
           printf("next transction: \n");
        }
        }
       if(ans=='E'){
          CloseAll();
       } 

    return 0;
}