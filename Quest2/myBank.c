#include <stdio.h>
#include "myBank.h"

      double Customers[50][2];
      int  NumOfCustomers=0;
      int Arrayindex=901;
 
    void setNewCustomer(float amount){
        Customers[Arrayindex-901][0]=amount;
        Customers[Arrayindex-901][1]=1;
        NumOfCustomers++;
    }

    void OpenAc(float DA){
 if(NumOfCustomers>=50 || DA<0){
    printf("Bank in full Capasity or DA is not acceptable,Try later\n");
 }
 
 else{
     setNewCustomer(DA);
     printf("%d Account Number is:\n" , Arrayindex);
      Arrayindex++;
 }
    }

    void BalanceFac(int AccountNumber){
  if(AccountNumber<=(Arrayindex) && AccountNumber>=901 && Customers[AccountNumber-901][1]==1){
    float ans;
    ans=Customers[AccountNumber-901][0];
    printf(" %f Your Balance: \n ", ans);
  }
  else{
      printf("Account is close or you applyed the wrong number");
  }
}
     void Deposite(int AccountNumber){
  if(AccountNumber<=Arrayindex && AccountNumber>=901 && Customers[AccountNumber-901][1]==1){
    printf("Amount? ");
    float D;
    scanf(" %f",&D);
    if(D>0){
    Customers[AccountNumber-Arrayindex][0]=Customers[AccountNumber-Arrayindex][0]+D;
     float ans;
     ans=Customers[AccountNumber-Arrayindex][0];
     printf(" %f Your new balance is: \n ",ans);
  }
  }
  else{
      printf("Account number isn't Valid!");
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
        printf(" %f your new balance is: \n",ans);
    }
    else{
       printf("Balance is too low"); 
    }
    }
    else{
       printf("Account number isn't Valid!");
  }
}
    void CloseAccount(int AccountNumber){
    if(AccountNumber<=950&&AccountNumber>=901 && Customers[AccountNumber-901][1]==1){
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
            printf(" %lu %f ", i , Balance);
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