//換算身高公分變幾英尺又幾英吋 
#include <iostream>
using namespace std;
main(void)
{

//宣告變數 
int foot,inch; 
float cm; 

//運算和提示使用者

cout<<"請輸入想換算的身高(公分):"<<endl;
cin >> cm; 
 
foot=cm/30.48; 
inch=(cm-foot*30.48)/2.54;

//結果 

cout<<"換算結果為:"<<foot<<"英尺又"<<inch<<"英吋"<<endl; 




system("pause");
return 0;


}
