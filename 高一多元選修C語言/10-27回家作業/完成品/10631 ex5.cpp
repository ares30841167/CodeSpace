//10631 ex5 運算1~100度的攝氏轉成華氏溫度的結果。 
#include <iostream>
using namespace std;
main(void){
//宣告
 
    int a;

//程式與輸出結果

    
    for(a=1;a<=100;a=a+1)
    {
        cout<<"在攝氏"<<a<<"度時，華氏為:"<<a*1.8+32<<"度"<<endl; 
    } 


system("pause");
return 0;

}

