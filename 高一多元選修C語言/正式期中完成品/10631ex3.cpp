//一元二次方程式 
#include <iostream>
using namespace std;
main(void)
{
//宣告
    float a,b,c,d,e,result1,result2; 
//提示使用者輸入
    cout <<"請輸入X平方項係數(不可為0):"<<endl;
    cin >> a; 
    cout <<"請輸入X項係數:"<<endl;
    cin >> b; 
    cout <<"請輸入常數項係數:"<<endl;
    cin >> c;
//運算
    e=(b*b)-(4*a*c); 
    d=sqrt(e); 
    result1=(-b+d)/(2*a);
    result2=(-b-d)/(2*a);
//輸出結果
    cout<<"運算結果為:"<<result1<<","<<result2<<endl;
    
     
      
       system("pause");
       return 0; 












}
