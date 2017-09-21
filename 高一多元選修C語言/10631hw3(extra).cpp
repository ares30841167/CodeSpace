//我的第三個程式碼
//功能:輸入攝氏，獲得華氏。 
#include <iostream>
using namespace std;
int main(void)
{
//宣告
float C,F; 

//指示使用者運算 
cout <<"請輸入要換算的溫度(攝氏)"<<endl;
cin >> C;
F=(9*C/5)+32; 
cout <<"你輸入的攝氏為:"<<C<<"\n"; 
cout <<"換算結果為:"<<F<<endl; 

system("pause");
return 0;

}
