//If else 
#include <iostream>
using namespace std;
main(void)
{
//宣告變數 

float kg,tall,BMI; 

//處理區和提示使用者 

cout<<"請輸入身高(公尺):"<<endl;
cin >> tall;

cout<<"請輸入體重:"<<endl;
cin >> kg;

BMI=kg/(tall*tall);


//結果 

cout<<"你輸入的身高(公尺)為:"<<tall<<endl; 
cout<<"你輸入的體重為:"<<kg<<endl;
if(BMI<18.5)
{

cout<<"你屬於:體重過輕"<<endl; 

}
if(18.5<=BMI and BMI<24)
{

cout<<"你屬於:健康體位"<<endl; 

}
if(24<=BMI)
{

cout<<"你屬於:體重過重，請注意飲食"<<endl; 

}  
 
system("pause");
return 0;


}
