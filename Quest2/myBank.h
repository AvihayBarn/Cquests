#ifndef myBank
#define myBank

     extern double Customers[50][2];
     extern  int NumOfCustomers;
     extern  int Arrayindex;
     void OpenAc(float DA);
     void BalanceFac(int AccountNumber);
    void Deposite(int AccountNumber);
     void Withdrawal(int AccountNumber);
     void CloseAccount(int AccountNumber);
    void AddRate(float rate);
    void PrintAll();
     void CloseAll();
    
    #endif