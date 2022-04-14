#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int n;
    int j=0,temp;
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Enter the array elemnets : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0)
        {
            if (i!=j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
                /* code */
            }
            
        }
        /* code */
    }
    cout<<"Your new array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
        /* code */
    }
    
    

}