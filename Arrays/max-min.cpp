#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int n;
    int max,min;
    cout<<endl<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the array elements :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    
    cout<<"your array elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout<<endl<<arr[i];
        /* code */
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=max)
        {
            max=arr[i];
            /* code */
        }
        
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
        /* code */
    }
    cout<<endl<<"Maximum Element : "<<max<<"\n Minimum element : "<<min<<endl;
    

}