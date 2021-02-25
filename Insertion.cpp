#include<iostream>
using namespace std;

void display(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int i,j,n;
    cout << "Enter the no. of elements=";
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(i=0; i<n; i++)
    {
        int temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    display(arr,n);
    return 0;
}