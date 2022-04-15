#include<iostream>
using namespace std;

int main()
{
    int n,min,max,res,k;
    int arr[20];
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    min=0;
    max=n-1;
    cout<<"Enter the value of k : ";
    cin>>k;
    min=arr[min]+k;
    max=arr[max]-k;
    res=max-min;
    cout<<"The minimum height is : "<<res<<endl;
    return 0;
}