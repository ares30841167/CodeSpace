//BMI�B�魫 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi
    float a,b,c,d,BMI; 
//���ܨϥΪ̿�J
    cout<<"�п�J����(����):"<<endl;
    cin >> a;
    cout <<"�п�J�魫(����):"<<endl;
    cin >> b;
//�B��
    BMI=b/(a*a); 
 
//�P�O�B��P���G��X
    if(BMI<18.5)
    { 
     c=(18.5*(a*a))-b;  
     cout<<"�A��BMI�Ȭ�:"<<BMI<<endl;
     cout<<"��ĳ�W��:"<<c<<"����"<<endl; 
     
      
       
    
    
    }
    if(18.5<=BMI and BMI<24)
    { 
     cout<<"�A��BMI�Ȭ�:"<<BMI<<endl;
     cout<<"�D�`���`�A���~��O��!!"<<endl; 
     
      
       
    
    
    } 
    if(BMI>=24)
    { 
     d=b-24*(a*a); 
     cout<<"�A��BMI�Ȭ�:"<<BMI<<endl;
     cout<<"��ĳ�:"<<d<<"����"<<endl; 
     
      
       
    
    
    }  



system("pause");
return 0; 







}
