#include <iostream>
#include <ctime>
#include <sys/time.h>

using namespace std;

void insertionSort(int arr[],int size) {
	int i, j, key;
	for (j = 1; j < size; j++) 
	{
		key = arr[j];
		i=j-1;
		
		while (i >= 0 && arr[i] > key) {
				arr[i+1]= arr[i];
				i--;
					}	
		arr[i+1]=key;
		
	}
	//cout<< arr[i]<<endl;
}
int main (){
clock_t startTime =clock();

int x;
cout<<"Enter Amount of random number to be generated >> ";
cin >> x;
int ar[x];

for (int i =0; i<x;i++){
	ar[i]= arc4random()%x+1;// not that this is matter, but i use arc4random to generate pure randomness of number. 
	cout<<ar[i]<<" ";

}
insertionSort(ar,x);
cout<<endl<<"==============================================="<<endl;
for (int k=0; k<x;k++)
	cout<< ar[k]<<" ";

cout<<endl<<"Run Time: "<<double(clock()-startTime)/(double)CLOCKS_PER_SEC<<" Seconds."<<endl;
	}