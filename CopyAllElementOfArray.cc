#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;


    int arr1[n];
    int arr2[n];
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<"Array1 element: ";
    for(int i = 0; i<n; i++){
        cout<<arr1[i]<<" ";
    }

    for(int i = 0; i<n; i++){
       arr2[i] = arr1[i];
    }

    cout<<endl;

    cout<<"Been copy in elemeny Array2 of Array1 : ";
    for(int i = 0; i<n; i++){
        cout<<arr2[i]<<" ";
    }

    cout<<endl;
    return 0;
}