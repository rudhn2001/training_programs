#include <iostream>
using namespace std;

int swap1(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a,b;
}
int main() 
{
    int n,a;
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
        if (arr[mid]==0)
        {
            swap1(arr[low],arr[mid]);
            mid++;
            low++;
            /* code */
        }
        if (arr[mid]==1)
        {
            mid++;
            /* code */
        }
        if (arr[mid]==2)
        {
            swap1(arr[mid],arr[high]);
            high--;
            /* code */
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
