#include <iostream>
using namespace std;
main(void)
{
//�ŧi 

    int m,n,k,ans=1; 

//���ܨϥΪ̿�J 

    cout<<"�п�J�����_�I:\n";
    cin >> m;
    cout<<"�п�J�������I:\n";
    cin >> n; 

//�{�� 

    for(k=m;k<=n;k=k++)
    {
     
        ans=ans*k; 
       
    } 
    
    cout<<"�������G��:"<<ans<<endl; 

system("pause");
return 0;
}

