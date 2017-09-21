#include <iostream>
using namespace std;

int i;
int a[99];





int f1(int a[], int value) {
int s=0;
int r_value = -1;
int i = 0;
while (i < 100) {
s++;
if (a[i] == value) {
r_value = i;
break;
}
i = i + 1;
}
return s;
}

int f2(int a[], int value) {
int s;
int r_value = -1;
int low = 0, high = 99;
int mid;
while (low <= high) {
mid = (low + high)/2;
if (a[mid] == value) {
r_value = mid;
s++;
break;
}
else if (a[mid] < value) {
low = mid + 1;
s++;
}
else {
high = mid - 1;
s++;
}
}
return s;
}


int main(){

	for(i=0;i<=99;i++){
	
	a[i]= 3*i+1;
	
	
}

	cout << f1(a,100) << endl;
	cout << f2(a,100) << endl;



	system("pause");
	return 0;

}

