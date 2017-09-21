//輸入X個數字，由小排到大。 
#include <iostream>
using namespace std;
main(void)
{
//宣告
    
    char SW;
    int x,k=0,i;
    float tmp;  

//提示使用者輸入
 
    cout<<"請輸入你想由小排到大的數字個數(整數):"<<endl;
    cin >> x;

    float num[x];
    
    cout<<"a.由小排到大"<<endl<<"b.由大排到小"<<endl<<"請輸入欲選擇的排列方式(a or b):"<<endl;
    cin >> SW;  
    
    for(i=0;i<=x-1;i++)
    {
    
        cout<<"請輸入第"<<i+1<<"個數字"<<endl;
        cin >> num[i]; 
    
    }
    
//程式

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

//輸出結果 
    
    cout<<"排列的結果為:";
    for(i=0;i<=x-1;i++)
    {
    
        cout<<num[i]<<"  ";
    
    }

system("pause");
return 0;
}

