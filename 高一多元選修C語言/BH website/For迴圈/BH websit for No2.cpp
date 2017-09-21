#include <iostream>
using namespace std;
main(void)
{
//宣告 

    int i,j,k,m,n=0;
    
//程式 

    cout << "請問邊長?:" << endl;
    cin >> k;
    for(i=1;i<=k;i++)
    {
    
        for(m=0;m<=n;m++)
        {
        
                cout << " ";
        
        } 
    
        for(j=1;j<=k;j++)
        {
        
                cout << "*";
        
        }
        
    n++;    
    cout << endl;
 
    
    }





system("pause");
return 0;

} 
