//�Ĥ@�D:��J�T��A�ѵ{����X�T���Ϊ����n�C 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi
    float a; 
    float b;
    float c;
    float p;
    float s;
     
//���ܨϥΪ̿�J
    cout<<"�п�J�Ĥ@��"<<endl;
    cin >> a; 
    cout<<"�п�J�ĤG��"<<endl;
    cin >> b; 
    cout<<"�п�J�ĤT��"<<endl;
    cin >> c; 
//�B��P�w�q
    p=(a+b+c)/2; 
    s=sqrt(p*(p-a)*(p-b)*(p-c)); 

//��X���G
    cout<<"���n��"<<s<<endl; 
    
    
        system("pause");
        return 0;    
 








}
