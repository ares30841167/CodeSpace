//分數太差，開根號後乘以10加分 
#include <iostream>
using namespace std;
main(void)
{

//宣告變數

float score,after; 

//運算和提示使用者

cout <<"請輸入想加分的分數:"<<endl;
cin >> score;

after=sqrt(score)*10; 

//結果 

cout<<"加分的結果為:"<<after<<endl; 




system("pause");
return 0;

}
