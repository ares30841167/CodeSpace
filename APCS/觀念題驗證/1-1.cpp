#include <iostream>
using namespace std; 

 int k = 4;
 int m = 1;

int main(){

 for (int i=1; i<=5; i=i+1) {
 for (int j=1; j<=k; j=j+1) {
 printf (" ");
 }
 for (int j=1; j<=m; j=j+1) {
 printf ("*");
 }
 printf ("\n");
 k = k - 1; 
 m = m + 1; // �ݭק令m = m + 2; 
 }	
	
	system("pause");
	return 0;
	
}
 
