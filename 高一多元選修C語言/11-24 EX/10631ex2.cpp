#include <iostream>
using namespace std;
main(void)
{
//�ŧi 

    int m,n,k,ans=1; 

//���ܨϥΪ̿�J 

    cout<<"�п�J�п�J����:\n";
    cin >> m;
    cout<<"�п�J����:\n";
    cin >> n; 

//�{�� 

    for(k=1;k<=n;k=k++)
    {
     
        ans=ans*m; 
       
    } 
    
    cout<<"���G��:"<<ans<<endl; 

system("pause");
return 0;
}

