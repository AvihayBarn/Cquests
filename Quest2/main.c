#include <stdio.h>
#include "myBank.h"

int main(){
    char ans;
     while(ans!='E'){
    printf("Transction Type? (O/B/D/W/I/C/P/E)");
    scanf("%c",&ans);
        switch (ans)
        {
        case 79:
          printf("Initial Deposite? \n");
          float o;
          scanf(" %f ",&o);
          OpenAc(o);
            break;
        case 66:
         printf("Account Number? \n");
          int b;
          scanf(" %d",&b);
           BalanceFac(b);
           break;
        case 'D':
          printf("Account Number? \n");
          int d;
          scanf(" %d",&d);
          Deposite(d);
          break;
        case 87:
          printf("Account Number? \n");
          int w;
          scanf(" %d",&w);
          Withdrawal(w);
          break;
        case 73:
          printf("Interesting Rate? \n");
          float r;
          scanf("%f",&r);
          AddRate(w);
          break;
        case 67:
          printf("Account Number? \n");
          int i;
          scanf("%d",&i);
          CloseAccount(w);
          break;
        case 80:
          PrintAll();
        default:
          printf("Transaction denied \n");
            break;
        }
    }
    return 0;
}