#include <iostream>
using namespace std;

	int i,a[100],b[100];

int main(){
	
	for (i=1; i<=100; i=i+1) {
	b[i] = i;
	}
	a[0] = 0;
	for (i=1; i<=100; i=i+1) {
	a[i] = b[i] + a[i-1];
	}
	printf ("%d\n", a[50]-a[30]);


	system("pause");
	return 0;

}

