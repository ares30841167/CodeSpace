//If else 
#include <iostream>
using namespace std;
main(void)
{
//宣告變數 
int money,A1; 

//提示使用者並輸入金額 

cout<<"請輸入購買的金額:"<<endl;
cin >> money; 


//判斷並運算和輸出結果 

if(money>=10000)
{

A1=money*0.8; 

cout<<"你有打8折的優惠!!"<<endl;
cout<<"打完折後為:"<<A1<<endl;
} 

else
{


A1=money*0.8; 

cout<<"你沒有打折優惠"<<endl;
cout<<"需付:"<<money<<endl;





} 
 
system("pause");
return 0;


}
