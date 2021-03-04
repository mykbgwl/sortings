#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x = *y;
    *y = temp;
}

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest])
    {
        largest=l;
    }
    if(r<n && arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        heapify(arr,n,largest);
    }
}

int main()
{
    int i,n;
    cout << "Enter the no. of elements=";
    cin >> n;
    int a[n];
    cout << "Enter the elements=";
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=(n/2)-1;i>=0;i--)
        heapify(a,n,i);
    for(i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
    display(a,n);
    return 0;
}



























































































































































































































































































































    
































    