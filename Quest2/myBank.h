#ifndef myBank
#define myBank

     static double Customers[50][2];
     static double  NumOfCustomers=0;
     static int index=901;
     void OpenAc(float );
     void BalanceFac(int AccountNumber);
    void Deposite(int AccountNumber);
     void Withdrawal(int AccountNumber);
     void CloseAccount(int AccountNumber);
    void AddRate(float rate);
    void PrintAll();
     void CloseAll();
    
    #endif