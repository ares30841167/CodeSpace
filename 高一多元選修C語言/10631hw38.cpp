#include <iostream>
using namespace std;
int f(int x,int y)
{
    
    int ans=1,i;
    
    for(i=1;i<=y;i++)
    {
    
        ans=ans*x; 
    
    }

    return ans;

}

int main(void)
{
   
    int m,n;
      
    cout<<"�п�J����:"<<endl;
    cin >> m;
    
    cout<<"�п�J����:"<<endl;
    cin >> n;  
    
    cout<<"���G��:"<<f(m,n)<<endl;
    
    system("pause");
    return 0; 

} 
