#include <iostream>
using namespace std;
main(void)
{
//宣告 

    int m,n,k,ans=1; 

//提示使用者輸入 

    cout<<"請輸入請輸入底數:\n";
    cin >> m;
    cout<<"請輸入指數:\n";
    cin >> n; 

//程式 

    for(k=1;k<=n;k=k++)
    {
     
        ans=ans*m; 
       
    } 
    
    cout<<"結果為:"<<ans<<endl; 

system("pause");
return 0;
}

