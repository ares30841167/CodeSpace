//10631hw20 100计 
#include <iostream>
using namespace std;
main(void)
{
//

    int a,m,n=0,p=0;
 
//矗ボㄏノ块

    cout<<"叫块璶计计:"<<endl;
    cin >> m; 
 
//祘Α 

    cout<<m<<"计Τ:"<<endl; 
     
    for(a=1;a<=m;a++)
    { 

        if(m%a == 0) 
        {
        
     
        cout<<a<<"  "<<endl;
        n++;
        p=p+a;    
           
        } 

    }
    
    cout<<"Τ"<<n<<""<<endl;
    
     if(n == 2)
     {
     
     cout<<"计借计"<<endl; 
      
     }
     else
     {
     
     cout<<"计ぃ借计"<<endl; 
       
     }
     
     cout<<"羆㎝"<<p<<endl; 
     
      

system("pause");
return 0;
}

