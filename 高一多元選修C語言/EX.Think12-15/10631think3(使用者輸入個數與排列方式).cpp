//��JX�ӼƦr�A�Ѥp�ƨ�j�C 
#include <iostream>
using namespace std;
main(void)
{
//�ŧi
    
    char SW;
    int x,k=0,i;
    float tmp;  

//���ܨϥΪ̿�J
 
    cout<<"�п�J�A�Q�Ѥp�ƨ�j���Ʀr�Ӽ�(���):"<<endl;
    cin >> x;

    float num[x];
    
    cout<<"a.�Ѥp�ƨ�j"<<endl<<"b.�Ѥj�ƨ�p"<<endl<<"�п�J����ܪ��ƦC�覡(a or b):"<<endl;
    cin >> SW;  
    
    for(i=0;i<=x-1;i++)
    {
    
        cout<<"�п�J��"<<i+1<<"�ӼƦr"<<endl;
        cin >> num[i]; 
    
    }
    
//�{��

switch(SW)

{

case 'a':
    
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

break;

case 'b':
    
for(;;){

    for(i=k;i<=x-1;i++)
    {
    
        if(num[i] > num[k])
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

break;

}

//��X���G 
    
    cout<<"�ƦC�����G��:";
    for(i=0;i<=x-1;i++)
    {
    
        cout<<num[i]<<"  ";
    
    }

system("pause");
return 0;
}

