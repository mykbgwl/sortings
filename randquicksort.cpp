#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout <<arr[i] << " ";
    }
}

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void randomisation(int arr[],int l,int h)
{
    int n=h-l+1;
    int temp=rand()%n;
    swap(&arr[temp+l],&arr[h]);
}

int partition(int arr[],int l,int h)
{
    int pivot=arr[h],i=l-1,j;
    for(j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}

void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        randomisation(arr,l,h);
        int pivot=partition(arr,l,h);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,h);
    }
}

int main()
{
    int i,n;
    cout << "Enter the no. of elements=";
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    quicksort(a,0,n-1);
    display(a,n);
    return 0;
}