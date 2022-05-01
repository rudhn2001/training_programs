#include <iostream>
using namespace std;

// function to find repeating elements
void printRepeating(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
     int index = (arr[i]-1) % n;
     arr[index] += n;
  }

  for (int i = 0; i < n; i++) 
    { 
       if (((arr[i]-1) / n) >= 2)
       cout << i+1 << " "; 
    } 
} 

int main()
{
    int n;
    int arr[20];
    int k;
    cout << "Enter No of elements : ";
    cin >> n;
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Repeating elements are  : ";
      // Function call
    printRepeating(arr, n);
    return 0;
}