//��J���ӼƦr�A�Ѥp�ƨ�j�C 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi

    int k=0,i;
    float tmp,num[5];  

//���ܨϥΪ̿�J
 
    for(i=0;i<=4;i++)
    {
    
        cout<<"�п�J��"<<i+1<<"�ӼƦr"<<endl;
        cin >> num[i]; 
    
    }
    
//�{��
    
for(;;){

    for(i=k;i<=4;i++)
    {
    
        if(num[i] < num[k])
        {
        
        tmp=num[k];
        num[k]=num[i];
        num[i]=tmp;
        
        
        }
        
    
    }

    k++;
    
    if(k == 4)
    {
    
    break;
       
    }   
}

//��X���G 
    
    cout<<"�Ѥp�ƨ�j�����G��:"<<num[0]<<"  "<<num[1]<<"  "<<num[2]<<"  "<<num[3]<<"  "<<num[4]<<endl;

system("pause");
return 0;
}

