#include <iostream>
using namespace std;
main(void)
{
//宣告 

    int a,b,c,n=0;

//程式 

    cout<<"所有可能車牌為:"<<endl; 
    
    for(a=0;a<=9;a++)
    {
    
        for(b=0;b<=9;b++)
        {
        
            for(c=0;c<=9;c++)
            {
            
                if(a != b && b != c && c != a)
                {
                
                    n++;
                    cout<<a<<b<<c<<endl;
                
                }
            
            }
        
        }
    
    }
    
    cout<<"總計有"<<n<<"種結果"<<endl; 

system("pause");
return 0;
}

