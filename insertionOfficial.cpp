#include <iostream>
#include <ctime>
#include <sys/time.h>

using namespace std;

void insertionSort(int arr[],int size) {// take array and its size
	int i, j, key;
	for (j = 1; j < size; j++) // starting at second index so we can compare with first index
	{
		key = arr[j];// storing the index to a temperary location
		i=j-1;//  [i] will use as array subscript 
		
		while (i >= 0 && arr[i] > key) {// comparing the index[i] is graater than [0] and greater than Temperary
				arr[i+1]= arr[i];//if the condition is true, store index[i] to array list
				i--;
					}	
		arr[i+1]=key;// if the condition is false, store Temperary to array list
		
	}
	//cout<< arr[i]<<endl;
}
int main (){
clock_t startTime =clock();// strt counting time

int x;
cout<<"Enter Amount of random number to be generated >> ";
cin >> x;
int ar[x];// using static to perform a large sorting

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