//秒數換算 
#include <iostream>
using namespace std;
main(void)
{

//宣告變數

int time,hour,minute,sec; 

//運算和提示使用者

cout<<"請輸入要換算的秒數:"<<endl; 
cin >> time;

hour=time/3600; 
minute=(time-hour*3600)/60; 
sec=(time-hour*3600)%60; 
 
//輸出結果 

cout<<"換算結果為:"<<hour<<"小時"<<minute<<"分"<<sec<<"秒"<<endl; 

system("pause");
return 0;

}
