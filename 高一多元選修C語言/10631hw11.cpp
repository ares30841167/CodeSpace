//功能:輸入兩股求斜邊。 
#include <iostream>
using namespace std;
int main(void)
{
//宣告
float A,B,C;
cout<<"請輸入長股:"<<endl;
cin >> A;

cout<<"請輸入短股:"<<endl;
cin >> B;
 

C=sqrt((A*A)+(B*B));

cout<<"結果為:"<<C<<endl; 


system("pause");
return 0;

}
