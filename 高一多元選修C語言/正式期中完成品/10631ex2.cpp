//二元一次方程式 
#include <iostream>
using namespace std;
main(void)
{
//宣告
    float a,b,d,e,x,y,A,B;
//提示使用者輸入
    cout<<"請輸入第一式X項係數:"<<endl;
    cin >> a;
    cout<<"請輸入第一式Y項係數:"<<endl;
    cin >> b;
    cout <<"請輸入第一式運算結果:"<<endl;
    cin >> x; 
    cout<<"請輸入第二式X項係數:"<<endl; 
    cin >> d;
    cout<<"請輸入第二式Y項係數:"<<endl; 
    cin >> e;
    cout <<"請輸入第二式運算結果:"<<endl;
    cin >> y; 
//運算
    A=((x*e)-(b*y))/((e*a)-(d*b));
    B=((y*a)-(d*x))/((a*e)-(b*d));
//輸出結果
    cout<<"X為"<<A<<endl;
    cout<<"Y為"<<B<<endl;
    
    
    
    system("pause");
    return 0;










}
