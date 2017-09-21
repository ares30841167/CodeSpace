#include <iostream>
using namespace std;
main(void)
{
//宣告 

    int m,n,k,ans=1; 

//提示使用者輸入 

    cout<<"請輸入階乘起點:\n";
    cin >> m;
    cout<<"請輸入階乘終點:\n";
    cin >> n; 

//程式 

    for(k=m;k<=n;k=k++)
    {
     
        ans=ans*k; 
       
    } 
    
    cout<<"階乘結果為:"<<ans<<endl; 

system("pause");
return 0;
}

