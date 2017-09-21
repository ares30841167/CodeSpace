#include <iostream>
using namespace std;
main(void)
{
//宣告 

    int k,n=0;

//程式 

cout<<"最大可行解為:"<<endl; 

    for(k=1;k<=10000;k=k++)
    {
     
        if(k%3 == 2 && k%5 == 3 && k%7 == 2)
        {
        
            n=k; 
        
        }
       
    }
    
    cout<<n;
    cout<<endl; 

system("pause");
return 0;
}

