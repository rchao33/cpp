#include <iostream>       
using namespace std;      
      
int  main()        
      
{       
      
  int A ;//宣告      
      
  cin >> A ;//輸入   
    
    while(A%2==0) //如果A除以2餘數為0(偶數)重複執行   
    {    
     A=A/2; //重複執行A除以2   
    }    
    cout<<A;  //輸出奇數  
}
