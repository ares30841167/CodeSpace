//BMI、體重 
#include <iostream>
using namespace std;
main(void)
{
//宣告
    float a,b,c,d,BMI; 
//提示使用者輸入
    cout<<"請輸入身高(公尺):"<<endl;
    cin >> a;
    cout <<"請輸入體重(公斤):"<<endl;
    cin >> b;
//運算
    BMI=b/(a*a); 
 
//判別運算與結果輸出
    if(BMI<18.5)
    { 
     c=(18.5*(a*a))-b;  
     cout<<"你的BMI值為:"<<BMI<<endl;
     cout<<"建議增重:"<<c<<"公斤"<<endl; 
     
      
       
    
    
    }
    if(18.5<=BMI and BMI<24)
    { 
     cout<<"你的BMI值為:"<<BMI<<endl;
     cout<<"非常正常，請繼續保持!!"<<endl; 
     
      
       
    
    
    } 
    if(BMI>=24)
    { 
     d=b-24*(a*a); 
     cout<<"你的BMI值為:"<<BMI<<endl;
     cout<<"建議減重:"<<d<<"公斤"<<endl; 
     
      
       
    
    
    }  



system("pause");
return 0; 







}
