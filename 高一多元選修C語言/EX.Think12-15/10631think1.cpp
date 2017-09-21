//輸入五個數字，由小排到大。 
#include <iostream>
using namespace std;
main(void)
{
//宣告

    int k=0,i;
    float tmp,num[5];  

//提示使用者輸入
 
    for(i=0;i<=4;i++)
    {
    
        cout<<"請輸入第"<<i+1<<"個數字"<<endl;
        cin >> num[i]; 
    
    }
    
//程式
    
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

//輸出結果 
    
    cout<<"由小排到大的結果為:"<<num[0]<<"  "<<num[1]<<"  "<<num[2]<<"  "<<num[3]<<"  "<<num[4]<<endl;

system("pause");
return 0;
}

