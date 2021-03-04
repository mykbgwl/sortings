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

void countingsort(int arr[],int n)
{
    int i;
    int largest=arr[0];
    for(i=1;i<n;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    int count[largest+1];
    for(i=0;i<=largest;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[arr[i]]+=1;;
    }
    for(i=1;i<=largest;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int b[n];
    for(i=n-1;i>=0;i--)
    {
        b[count[arr[i]]-1]=arr[i];
        count[arr[i]]-=1;
    }
    for(i=0;i<n;i++)
    {
        arr[i]=b[i];
    }
}

int main()
{
    int i,n;
    cout << "Enter the no. of elements=";
    cin >> n;
    int a[n];
    cout << "Enter the elements=";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    countingsort(a,n);
    display(a,n);
    return 0;
}