//10631hw20 100���]�� 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi

    int a,m,n=0;
 
//���ܨϥΪ̿�J

    cout<<"�п�J�n���]�ƪ���:"<<endl;
    cin >> m; 
 
//�{�� 

    cout<<m<<"���]�Ʀ�:"<<endl; 
     
    for(a=1;a<=m;a++)
    { 

        if(m%a == 0) 
        {
        
     
        cout<<a<<"  "<<endl;
        n++; 
            
           
        } 

    }
    
    cout<<"��"<<n<<"��"<<endl; 

system("pause");
return 0;
}

