#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr1[20],arr2[20],arr3[20],arr4[20];
    int n1,n2,n3=0,n4=0,flag;
    cout<<"Enter the number of elements for array 1 : ";
    cin>>n1;
    cout<<"Enter the array elements : "<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
        /* code */
    }
    cout<<"Enter the number of elements for array 2 : ";
    cin>>n2;
    cout<<"Enter the array elements : "<<endl;
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
        /* code */
    }
    // sort(arr1,arr1+n1);
    // sort(arr2,arr2+n2);
    
    // for intersection 

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                arr3[n3]=arr1[i];
                n3++;
            }
        }
    }
     cout<<"Intersection : "<<endl;
    for(int i=0;i<n3;i++){
        cout<<arr3[i]<<endl;
    }

    // for union

        for (int i = 0; i < n1; i++)
    {
        flag=0;
        for (int j = 0; j < n2; j++)
        {    
            if(arr1[i]!=arr2[j]){
                break;
            }
            else {
                flag=1;
            }
        }
         if(flag==0){
                arr4[n4]=arr1[i];
                n4++;
            }
    }    
    for (int i = 0; i <n2 ; i++)
        {
            arr4[n4]=arr2[i];
            n4++;
            /* code */
        }
    cout<<"Union : "<<endl;
    for(int i=0;i<n4;i++){
        cout<<arr4[i]<<endl;
    }
   

    return 0;
}