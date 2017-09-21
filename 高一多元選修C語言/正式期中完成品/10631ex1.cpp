//第一題:輸入三邊，由程式算出三角形的面積。 
#include <iostream>
using namespace std;
main(void)
{
//宣告
    float a; 
    float b;
    float c;
    float p;
    float s;
     
//提示使用者輸入
    cout<<"請輸入第一邊"<<endl;
    cin >> a; 
    cout<<"請輸入第二邊"<<endl;
    cin >> b; 
    cout<<"請輸入第三邊"<<endl;
    cin >> c; 
//運算與定義
    p=(a+b+c)/2; 
    s=sqrt(p*(p-a)*(p-b)*(p-c)); 

//輸出結果
    cout<<"面積為"<<s<<endl; 
    
    
        system("pause");
        return 0;    
 








}
