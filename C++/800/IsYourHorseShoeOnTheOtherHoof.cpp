#include <iostream>
using namespace std;

int main()
{
	int arr[4],count=0;

	for(int i = 0; i < 4; ++i) {
		cin>>arr[i];
	}

	for (int i = 0; i < 4; ++i)
	{
		for(int j = i+1; j < 4; ++j) {
			 if(arr[i]==arr[j] && arr[i]!=-1 && arr[j]!=-1){
			 	count++;
			 	arr[j]=-1;			 	
			 }
		}
	}
	cout<<count;
}