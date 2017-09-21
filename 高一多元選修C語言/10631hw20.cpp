//10631hw20 100的因數 
#include <iostream>
using namespace std;
main(void)
{
//宣告

    int a; 

//程式 

    cout<<"100的因數有:"<<endl; 
     
    for(a=1;a<=100;a++)
    { 

        if(100%a == 0) 
        {
        
     
        cout<<a<<"  "<<endl; 
            
           
        } 

    } 

system("pause");
return 0;
}

