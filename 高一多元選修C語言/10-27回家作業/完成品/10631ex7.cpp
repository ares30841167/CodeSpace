//10631 ex7 ���ϥΪ̿�J�����B���t�B���ơA�{����X�o�ӵ��t�ƦC
#include <iostream>
using namespace std;
main(void)
{
//�ŧi 

    int a,d,n,ans;
    int count = 1;

//���ܨϥΪ̿�J 

    cout<<"�п�J����:"<<endl; 
    cin >> a; 
    cout<<"�п�J���t:"<<endl; 
    cin >> d; 
    cout<<"�п�J����:"<<endl; 
    cin >> n; 

//�{���P��X���G 
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

