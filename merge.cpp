
#include <iostream>
#include <ctime>
#include <sys/time.h>
#include <limits>


using namespace std;
void merge(int *,int, int , int );
void mergesort(int *A, int p, int r)
{
    int q;
    if (p < r)
    {
        q=(p+r)/2;
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        merge(A,p,q,r);
    }
    return;
}
void merge(int *A, int p, int q, int r)// p=begining, q=mid-point, p+1 = one array after mid point, r= end point
{
    int i, j, k;// test up to 10000 random numbers
   int* c= new int [100000000];
    i = p;
    k = p;
    j = q + 1;
   // cout<<"**"<<&a<<endl;
    while (i <= q && j <= r)
    {
        if (A[i] < A[j])
        {
            c[k] = A[i];
            k++;
            i++;
        }
        else
        {
            c[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= q)
    {
        c[k] = A[i];
        k++;
        i++;
    }
    while (j <= r)
    {
        c[k] = A[j];
        k++;
        j++;
    }
    for (i = p; i < k; i++)
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
    a[i]= arc4random()%arr+1;// not that this is matter, but i use arc4random to generate pure randomness of number. 
    cout<<a[i]<<" ";
}

mergesort(a, 0, arr);
cout<<endl<<"============== sorted array ============="<<endl;
    for (i = 0; i < arr; i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<endl<<"Run Time: "<<double(clock()-startTime)/(double)CLOCKS_PER_SEC<<" Seconds."<<endl;// timer

    

  

    
delete new int;
    //cout<<endl<<"Run Time: "<<double(clock()-startTime)/(double)CLOCKS_PER_SEC<<" Seconds."<<endl;// timer
}