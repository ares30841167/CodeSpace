//If else 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi�ܼ� 

float kg,tall,BMI; 

//�B�z�ϩM���ܨϥΪ� 

cout<<"�п�J����(����):"<<endl;
cin >> tall;

cout<<"�п�J�魫:"<<endl;
cin >> kg;

BMI=kg/(tall*tall);


//���G 

cout<<"�A��J������(����)��:"<<tall<<endl; 
cout<<"�A��J���魫��:"<<kg<<endl;
if(BMI<18.5)
{

cout<<"�A�ݩ�:�魫�L��"<<endl; 

}
if(18.5<=BMI and BMI<24)
{

cout<<"�A�ݩ�:���d���"<<endl; 

}
if(24<=BMI)
{

cout<<"�A�ݩ�:�魫�L���A�Ъ`�N����"<<endl; 

}  
 
system("pause");
return 0;


}
