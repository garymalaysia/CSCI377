
#include <iostream>

using namespace std;
void merge(int *,int, int , int );
void mergesort(int *a, int p, int high)
{
    int mid;
    if (p< high)
    {
        mid=(p+high)/2;
        mergesort(a,p,mid);
        mergesort(a,p+1,high);
        merge(a,p,high,mid);
    }
  
}
void merge(int *a, int p, int high, int mid)
{
    int i, j, k, c[sizeof(a)/sizeof(*a)];
    i = p;
    k = p;
    j = mid + 1;
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
    for (i = p; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{
    int x;
    cout <<"Enter the size of an array >> ";
    cin >>x;
    int a[x], i, b[x];
    cout<<"enter  the elements"<<endl;
    for (i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    mergesort(a, 0, x-1);
    cout<<"sorted array\n";
    for (i = 0; i < x; i++)
    {
        cout<<a[i];
    }
    cout<<"enter  the elements\n";
    for (i = 0; i < x; i++)
    {
        cin>>b[i];
    }
    mergesort(b, 0, x-1);
    cout<<"sorted array\n";
    for (i = 0; i < x; i++)
    {
        cout<<b[i];
    }
   
}