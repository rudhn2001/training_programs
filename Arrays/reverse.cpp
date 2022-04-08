#include <iostream>
using namespace std;


int main()
{
    int arr[50];
    int n,i,j;
    int temp=0;
    cout<<endl<<"Enter the array size : ";
    cin>>n;
    cout<<"Enter the array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    cout<<"Array entered";
    cout<<endl<<"your array is  : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;/* code */
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    
    cout<<"Your reverse Array is  : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;/* code */
    }
    
}