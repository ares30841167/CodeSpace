//10631 ex2 輸入N，輸出連續數字到N。 
#include <iostream>
using namespace std;
main(void){
//宣告 

    int a,n;

//提示使用者輸入

    cout<<"請輸入要連續輸出數字到幾:"<<endl;
    cin >> n; 
 
//程式與結果輸出 

    for(a=0;a<=n;a=a+1)
    {
    
    cout<<a<<endl;
    
    }



system("pause");
return 0;

}

