//��JX�ӼƦr�A�Ѥp�ƨ�j�C 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi

    int x,k=0,i;
    float tmp;  

//���ܨϥΪ̿�J
 
    cout<<"�п�J�A�Q�Ѥp�ƨ�j���Ʀr�Ӽ�(���):"<<endl;
    cin >> x;

    float num[x];  
    
    for(i=0;i<=x-1;i++)
    {
    
        cout<<"�п�J��"<<i+1<<"�ӼƦr"<<endl;
        cin >> num[i]; 
    
    }
    
//�{��
    
for(;;){

    for(i=k;i<=x-1;i++)
    {
    
        if(num[i] < num[k])
        {
        
        tmp=num[k];
        num[k]=num[i];
        num[i]=tmp;
        
        
        }
        
    
    }

    k++;
    
    if(k == x-1)
    {
    
    break;
       
    }   
}

//��X���G 
    
    cout<<"�Ѥp�ƨ�j�����G��:";
    for(i=0;i<=x-1;i++)
    {
    
        cout<<num[i]<<"  ";
    
    }

system("pause");
return 0;
}

