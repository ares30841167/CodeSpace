//功能:輸入華氏，獲得攝氏。 
#include <iostream>
using namespace std;
int main(void)
{
//宣告
float C,F; 

//指示使用者運算 
cout <<"請輸入要換算的溫度(華氏)"<<endl;
cin >> F;
C=(F-32)*5/9; 
cout <<"你輸入的華氏為:"<<F<<"\n"; 
cout <<"換算結果為:"<<C<<endl; 

system("pause");
return 0;

}
