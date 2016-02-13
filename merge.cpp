
#include <iostream>
#include <ctime>
#include <sys/time.h>
#include <limits>


using namespace std;
void merge(int *,int, int , int );

void mergesort(int *A, int p, int r)
{
    int q;
    if (p < r)// checking to see if the last array value is bigger than the first array array value
    {
        q=(p+r)/2;// if so, break the array to half and store it to mid point
        mergesort(A,p,q);// check from the first array value to mid point. Break them to smaller if necessary
        mergesort(A,q+1,r);// ccheck from the array next to the mid point to the end. Break them to smaller if necessary
        merge(A,p,q,r);// when the array is break into single array size, sort them back. (Divide and conqure)
    }
    return;
}
void merge(int *A, int p, int q, int r)// p=begining, q=mid-point, p+1 = one array after mid point, r= end point
{
    int i, j, k;// test up to 10000 random numbers
   static int c[1000000000];// able to sort  billion number (as long as your computer can handle the amount of memory)
    i = p;// index [i] from first half of the array
    k = p;// index [k] for the count of the beginning of the whole array after combining 
    j = q + 1;// index[j] for second half of the array
   // cout<<"**"<<&a<<endl;
    while (i <= q && j <= r)// index [i] comparing to midpoint q, index [j] comparing to end point r
    {
        if (A[i] < A[j])// comparing 2 seperate index to see which one is the smaller
        {
            c[k] = A[i];// if so, store inex [i] it to index [k]
            k++;
            i++;
        }
        else
        {
            c[k] = A[j];// else, store index [j] to index [k]
            k++;
            j++;
        }
    }
    while (i <= q)// moving index [i] to the next array value
    {
        c[k] = A[i];
        k++;
        i++;
    }
    while (j <= r) // moving index [j] to the next array value
    {
        c[k] = A[j];
        k++;
        j++;
    }
    for (i = p; i < k; i++)//sorting the valuse from back to A 
    {
        A[i] = c[i];
    }
}
int main()
{   

clock_t startTime =clock();
    int arr,i;

    cout<<"Enter the size of the array >> ";// tested with 
    cin>>arr;
    int a[arr];

for (i =0; i<arr;i++){
    a[i]= arc4random()%arr;// not that this is matter, but i use arc4random to generate pure randomness of number. 
    cout<<a[i]<<" ";
}

mergesort(a, 0, arr);
cout<<endl<<'\t'<<"============================================="<<endl;
    for (i = 0; i < arr; i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<endl<<"Run Time: "<<double(clock()-startTime)/(double)CLOCKS_PER_SEC<<" Seconds."<<endl;// timer

    

  

    
delete new int;
    //cout<<endl<<"Run Time: "<<double(clock()-startTime)/(double)CLOCKS_PER_SEC<<" Seconds."<<endl;// timer
}