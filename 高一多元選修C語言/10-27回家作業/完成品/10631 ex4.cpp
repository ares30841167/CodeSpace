//10631 ex4 輸入M為開始，輸入N為結束，輸入增量D，輸出此範圍以使用者輸入的增量增加的連續數字。 
#include <iostream>
using namespace std;
main(void){
//宣告 

    int a,n,m,d;

//提示使用者輸入

    cout<<"請輸入要連續輸出開始的數字:"<<endl;
    cin >> m; 
    cout<<"請輸入要連續輸出結束的數字:"<<endl;
    cin >> n;
    cout<<"請輸入增量:"<<endl;
    cin >> d; 
 
//程式與結果輸出 

    for(a=m;a<=n;a=a+d)
    {
    
    cout<<a<<endl;
    
    }



system("pause");
return 0;

}

