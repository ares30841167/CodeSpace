//�G���@����{�� 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi
    float a,b,d,e,x,y,A,B;
//���ܨϥΪ̿�J
    cout<<"�п�J�Ĥ@��X���Y��:"<<endl;
    cin >> a;
    cout<<"�п�J�Ĥ@��Y���Y��:"<<endl;
    cin >> b;
    cout <<"�п�J�Ĥ@���B�⵲�G:"<<endl;
    cin >> x; 
    cout<<"�п�J�ĤG��X���Y��:"<<endl; 
    cin >> d;
    cout<<"�п�J�ĤG��Y���Y��:"<<endl; 
    cin >> e;
    cout <<"�п�J�ĤG���B�⵲�G:"<<endl;
    cin >> y; 
//�B��
    A=((x*e)-(b*y))/((e*a)-(d*b));
    B=((y*a)-(d*x))/((a*e)-(b*d));
//��X���G
    cout<<"X��"<<A<<endl;
    cout<<"Y��"<<B<<endl;
    
    
    
    system("pause");
    return 0;










}
