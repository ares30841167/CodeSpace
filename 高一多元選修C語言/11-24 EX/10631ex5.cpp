#include <iostream>
using namespace std;
main(void)
{
//�ŧi 

    int a,b,c,n=0;

//�{�� 

    cout<<"�Ҧ��i�ਮ�P��:"<<endl; 
    
    for(a=0;a<=9;a++)
    {
    
        for(b=0;b<=9;b++)
        {
        
            for(c=0;c<=9;c++)
            {
            
                if(a != b && b != c && c != a)
                {
                
                    n++;
                    cout<<a<<b<<c<<endl;
                
                }
            
            }
        
        }
    
    }
    
    cout<<"�`�p��"<<n<<"�ص��G"<<endl; 

system("pause");
return 0;
}

