#include <iostream>
using namespace std;
main(void)
{
//�ŧi 

    int k,n=0;

//�{�� 

cout<<"�̤j�i��Ѭ�:"<<endl; 

    for(k=1;k<=10000;k=k++)
    {
     
        if(k%3 == 2 && k%5 == 3 && k%7 == 2)
        {
        
            n=k; 
        
        }
       
    }
    
    cout<<n;
    cout<<endl; 

system("pause");
return 0;
}

