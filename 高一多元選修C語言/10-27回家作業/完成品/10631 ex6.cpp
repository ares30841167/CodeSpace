//10631 ex6 輸出1到100中，3和4的公倍數。 
#include <iostream>
using namespace std;
main(void){
//宣告

    int a; 

//程式與輸出結果 

    for(a=1;a<=100;a=a+1)
    {
        if(a%3==0 && a%4==0)
        {
            cout<<a<<" ";
        }

    }

system("pause");
return 0;

}

