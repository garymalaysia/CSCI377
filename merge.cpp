
#include <iostream>
#include <ctime>
#include <sys/time.h>

using namespace std;
void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return;
}
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[10000];// test up to 10000 random number
    i = low;
    k = low;
    j = mid + 1;
   // cout<<"**"<<&a<<endl;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{   

clock_t startTime =clock();
    int arr,i;

    cout<<"Enter the size of the array >> ";
    cin>>arr;
    int* p=&arr;
    int a[arr];

for (i =0; i<arr;i++){
    a[i]= arc4random()%arr+1;// not that this is matter, but i use arc4random to generate pure randomness of number. 
    cout<<a[i]<<" ";
}

  /*  
    cout<<"enter  the elements"<<endl;
    for (i = 0; i < arr; i++)
    {
        cin>>a[i];
    }
*/

    mergesort(a, 0, arr);
    cout<<endl<<"============== sorted array ============="<<endl;
    for (i = 0; i < arr; i++)
    {
        cout<<a[i]<<" ";
    }
    

    cout<<endl<<"Run Time: "<<double(clock()-startTime)/(double)CLOCKS_PER_SEC<<" Seconds."<<endl;// timer
}