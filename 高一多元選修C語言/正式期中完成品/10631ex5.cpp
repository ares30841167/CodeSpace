//���⨭�������ܴX�^�ؤS�X�^�T 
#include <iostream>
using namespace std;
main(void)
{

//�ŧi�ܼ� 
int foot,inch; 
float cm; 

//�B��M���ܨϥΪ�

cout<<"�п�J�Q���⪺����(����):"<<endl;
cin >> cm; 
 
foot=cm/30.48; 
inch=(cm-foot*30.48)/2.54;

//���G 

cout<<"���⵲�G��:"<<foot<<"�^�ؤS"<<inch<<"�^�T"<<endl; 




system("pause");
return 0;


}
