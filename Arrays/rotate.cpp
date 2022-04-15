#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int temp,n;
    char ch;
    int arr[20];
    cout<<"\n Enter the number of elements :"<<endl;
    cin>>n;
    cout<<"Enter the array elements :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Your array is  : "<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }
    while (1)
    {
        cout<<"Do you want to rotate the array?? (y/n) : ";
        cin>>ch;
        switch (ch)
        {
        case 'y' :
        case 'Y' :
            temp=arr[n-1];
            for(int i=n-1;i>0;i--) {
                arr[i]=arr[i-1];
            }
            arr[0]=temp;
            cout<<"your new array is :"<<endl;
            for(int i=0;i<n;i++) {
                cout<<arr[i]<<endl;
            }
            break;
            case 'n':
            case 'N':
            exit(0);
        default:
        cout<<"Invalid option.....try again......"<<endl;
            break;
        }
    }
    return 0;

}