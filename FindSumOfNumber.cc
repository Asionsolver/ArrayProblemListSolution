/* C++ Program to find sum of elements in a given array */

#include <bits/stdc++.h>
using namespace std;
 
// function to return sum of elements
// in an array of size n

int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++){
    sum += arr[i];
    }
    return sum;
}
 
// Driver code
int main()
{
    int n;
    //int arr[n]; -->Error: Segmentation fault
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    // int arr[] = {12, 3, 4, 15};
    // int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of given array is " << sum(arr, n);
    cout<<endl;
    return 0;
}