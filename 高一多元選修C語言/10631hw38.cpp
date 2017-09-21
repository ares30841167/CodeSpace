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
      
    cout<<"請輸入底數:"<<endl;
    cin >> m;
    
    cout<<"請輸入指數:"<<endl;
    cin >> n;  
    
    cout<<"結果為:"<<f(m,n)<<endl;
    
    system("pause");
    return 0; 

} 
