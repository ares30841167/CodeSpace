#include <iostream>
using namespace std;
main(void)
{
//�ŧi 

    int k;

//�{�� 

cout<<"�i��Ѭ�:"<<endl; 

    for(k=1;k<=10000;k=k++)
    {
     
        if(k%3 == 2 && k%5 == 3 && k%7 == 2)
        {
        
            cout<<k<<" "; 
        
        }
       
    }
    
    cout<<endl; 

system("pause");
return 0;
}

