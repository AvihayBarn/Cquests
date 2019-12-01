#include <stdio.h>
#include "myBank.h"

    int NumOfCustomers=0;
    float Customers[50][2];
    int Arrayindex=901;

    void OpenAc(float DA){
 if(NumOfCustomers>=50 || DA<0){
    printf("Bank in full Capasity or DA is not acceptable,Try later \n");
 }
 else{
    Customers[Arrayindex-901][0]=DA;
    Customers[Arrayindex-901][1]=1;
    NumOfCustomers++;
    printf(" Account Number is:  %d  \n " , Arrayindex);
    Arrayindex++;
 }
    }

    void BalanceFac(int AccountNumber){
  if(AccountNumber<=(Arrayindex) && AccountNumber>=901 && Customers[AccountNumber-901][1]==1){
    float ans;
    ans=Customers[AccountNumber-901][0];
    printf(" Your Balance: %0.2f  \n ", ans);
  }
  else{
      printf("Account is close or you applyed the wrong number \n");
  }
}
     void Deposite(int AccountNumber){
         if(Customers[AccountNumber-901][1]==0){
             printf("Account is close \n");
         }
  if(Customers[AccountNumber-901][1]==1 && AccountNumber<=Arrayindex && AccountNumber>=901){
    printf("Amount? ");
    float D;
    scanf(" %f",&D);
    if(D>0){
    Customers[AccountNumber-901][0]=Customers[AccountNumber-901][0]+D;
     float ans;
     ans=Customers[AccountNumber-901][0];
     printf("Your new balance is: %0.2f \n ",ans);
  }
  }
  else{
      printf("Account number isn't Valid! \n");
  }
}
     void Withdrawal(int AccountNumber){
    if(AccountNumber<=Arrayindex && AccountNumber>=901 && Customers[AccountNumber-901][1]==1){
         printf("Amount? ");
    float W;
    scanf(" %f",&W);
    if(W<=Customers[AccountNumber-901][0]){
          Customers[AccountNumber-901][0]-=W;
        float ans=Customers[AccountNumber-901][0];
        printf("  your new balance is:  %0.2f \n",ans);
    }
    else{
       printf("Balance is too low \n"); 
    }
    }
    else{
       printf("Account number isn't Valid! \n");
  }
}
    void CloseAccount(int AccountNumber){
    if(AccountNumber>900 && AccountNumber<Arrayindex && Customers[AccountNumber-901][1]==1){
         Customers[AccountNumber-901][1]=0;
    }        
}
     void AddRate(float rate){
    for (size_t i = 0; i < Arrayindex-901; i++)
    {
        if(Customers[i][1]==1)
             Customers[i][0]*=((100+rate)/100);
    }
}
     void PrintAll(){
     for (size_t i = 0; i < Arrayindex-901; i++)
    {
        if(Customers[i][1]==1){
            float Balance=Customers[i][0];
            printf("Account %lu Balance: %0.2f \n ", 901+i , Balance);
        }
    }
}
    void CloseAll(){
 for (size_t i = 0; i < Arrayindex-901; i++)
    {
        if(Customers[i][1]==1){
           Customers[i][1]=0;
    }
  }
 }