#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int i,j,n;
    cout << "Enter the no. of elements=";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min,index;
    for(i=0;i<n-1;i++)
    {
        min = arr[i];
        index = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                index = j;
            }
        }
        swap(&arr[i],&arr[index]);
    }
    display(arr,n);
    return 0;
}