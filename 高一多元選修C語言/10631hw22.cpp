//10631hw20 100的因數 
#include <iostream>
using namespace std;
main(void)
{
//宣告

    int a,m,n=0;
 
//提示使用者輸入

    cout<<"請輸入要取因數的數:"<<endl;
    cin >> m; 
 
//程式 

    cout<<m<<"的因數有:"<<endl; 
     
    for(a=1;a<=m;a++)
    { 

        if(m%a == 0) 
        {
        
     
        cout<<a<<"  "<<endl;
        n++; 
            
           
        } 

    }
    
    cout<<"有"<<n<<"個"<<endl; 

system("pause");
return 0;
}

