//10631 ex7 讓使用者輸入首項、公差、項數，程式輸出這個等差數列
#include <iostream>
using namespace std;
main(void)
{
//宣告 

    int a,d,n,ans;
    int count = 1;

//提示使用者輸入 

    cout<<"請輸入首項:"<<endl; 
    cin >> a; 
    cout<<"請輸入公差:"<<endl; 
    cin >> d; 
    cout<<"請輸入項數:"<<endl; 
    cin >> n; 

//程式與輸出結果 
if(d>0){ 
     for(ans=a;ans<=a+(n-1)*d;ans=ans+d)
     {
        cout<<ans<<"  "; 
     } 
}

if(d<0){ 
     for(ans=a;ans>=a+(n-1)*d;ans=ans+d)
     {
        cout<<ans<<"  "; 
     } 
}

if(d==0){

    for(;;)
    {
    
        cout<<a<<"  ";
        count++;
        if(count>=n)
        {

        break;

        }  
    
    }

}

     
	system("PAUSE");
	return 0;
}

