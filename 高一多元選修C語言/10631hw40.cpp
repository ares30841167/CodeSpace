#include <iostream>
using namespace std;
void f(int n)
{
    int i;
    
    for(i=1;i<=n;i++)
    {
    
        cout<<"*"; 
      
    }
    
     cout<<endl; 


}
int main(void)
{

    int i,n;
    
    cout<<"�п�J�n�e�X�h�P�P:"<<endl;
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
    
     f(i); 
      
    } 
    
    system("pause");
    return 0; 

} 
