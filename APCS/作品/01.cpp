#include <iostream>
using namespace std;

int main(){

	int grade[20],i,j,k,max,temp;
	
	cin >> max;
	
	for(i=0;i<=max-1;i++)
	{
		
		cin >> grade[i];
		
	}
	
	for(j=0;j<=max-1;j++)
	{
		
		for(k=j;k<=max-1;k++)
			
		if(grade[j] > grade[k])
		{
			
			temp = grade[k];
			grade[k] = grade[j];
			grade[j] = temp;
			
			
		}
		
	}
	
	/*
	for(int s=0;s<=max-1;s++)
	{
		
		cout << grade[s] << " ";
		
		
	}
	*/
	
	system("pause");
	return 0;

}

