#include <iostream>
using namespace std;

	int a[10]={ 1, 3, 9, 2, 5,
8, 4, 9, 6, 7 };

	int f (int a[], int n) {
	int index = 0;
	for (int i=1; i<=n-1; i=i+1) {
	if (a[i] >= a[index]) {
	index = i;
	}
	}
	return index;
	}





int main(){

	
	cout << f(a,10);



	system("pause");
	return 0;

}

