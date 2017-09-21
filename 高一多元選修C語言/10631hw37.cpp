#include <iostream>
using namespace std;
int f(int x,int y)
{
    
    int ans;
    ans=x*y+x-y;
    return ans;

}
int main(void)
{

    cout<<f(12,6)<<endl;
    
    system("pause");
    return 0; 

} 
