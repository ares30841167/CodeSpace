//�@���G����{�� 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi
    float a,b,c,d,e,result1,result2; 
//���ܨϥΪ̿�J
    cout <<"�п�JX���趵�Y��(���i��0):"<<endl;
    cin >> a; 
    cout <<"�п�JX���Y��:"<<endl;
    cin >> b; 
    cout <<"�п�J�`�ƶ��Y��:"<<endl;
    cin >> c;
//�B��
    e=(b*b)-(4*a*c); 
    d=sqrt(e); 
    result1=(-b+d)/(2*a);
    result2=(-b-d)/(2*a);
//��X���G
    cout<<"�B�⵲�G��:"<<result1<<","<<result2<<endl;
    
     
      
       system("pause");
       return 0; 












}
