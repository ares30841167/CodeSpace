#include <iostream>
using namespace std;
main(void)
{

    char a[100];
    cout<<"請輸入姓名:"<<endl;
    cin.getline(a,99); 
    cout<<a<<"你好!!"<<endl;
    cout<<"你的姓名長度為:"<<strlen(a)<<endl; 




system("pause");
return 0;
}
