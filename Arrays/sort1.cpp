#include <iostream>
using namespace std;

// int swap1(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     return a,b;
// }
int main() 
{
    int n,a,temp;
    int arr[20];
    int mid=0,high=0,low=0;
    cout<<endl<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the array elements(only 0, 1 and 2) : ";
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a==0 || a==1 || a==2)
        {
            arr[i]=a;
        }
        else 
        {
            cout<<"Can't insert"<<endl;
        }
        /* code */
    }
    cout<<"array is : "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
            /* code */
        }
    high=n-1;
    mid=0;
    while (mid<=high)
    {
        switch (arr[mid])
        { 
        case 0:
        
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;

            mid++;
            low++;
            /* code */
        break;
        case 1:
        
            mid++;
            /* code */
        break;
        case 2:
        
            temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            high--;
            /* code */
        break;
        }
    }
    cout<<"Sorted array is : "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
            /* code */
        }
        
    return 0;

}
