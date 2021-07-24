#include<bits/stdc++.h>
using namespace std;
int MinimumNumber(int arr[], int n){
    int min = arr[0];
    for(int i = 0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int MaximumNumber(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]>max){
        max = arr[i];
        }
    }

    return max;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i; i < n; i++){
        cin>>arr[i];
    }

    cout<<"The maximum number of array: "<<MaximumNumber(arr,n)<<endl;
    cout<<"The minimum number of array: "<<MinimumNumber(arr,n)<<endl;
    return 0;
}