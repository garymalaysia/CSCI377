#include <iostream>

using namespace std;
void insertionSort2(int arr[], int length) {
      int i, j, tmp;
      for (i = 2; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
            } 
      }
}

void insertionSort(int arr[], int size) {
	int i, j, key;
	for (j = 2; j <= size; j++) {
		key = arr[j];
		i=j-1;
		while (i > 0 && arr[i] > key) {
				arr[i+1]= arr[i];
				i--;
					}	
		arr[i+1]=key;
		
	}
	//cout<< arr[i]<<endl;
}
int main (){

int arr [10]={12,13,11,16,14,17,15,11,18,17};
//insertionSort2(arr,10);
cout<<sizeof(arr);
//for (int k=0; k<sizeof(*arr);)





}