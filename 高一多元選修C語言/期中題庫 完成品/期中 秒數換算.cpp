//��ƴ��� 
#include <iostream>
using namespace std;
main(void)
{

//�ŧi�ܼ�

int time,hour,minute,sec; 

//�B��M���ܨϥΪ�

cout<<"�п�J�n���⪺���:"<<endl; 
cin >> time;

hour=time/3600; 
minute=(time-hour*3600)/60; 
sec=(time-hour*3600)%60; 
 
//��X���G 

cout<<"���⵲�G��:"<<hour<<"�p��"<<minute<<"��"<<sec<<"��"<<endl; 

system("pause");
return 0;

}
