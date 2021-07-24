#include<bits/stdc++.h>
using namespace std;

int fibonacciNumber(int arr[], int n){
    int i, fibvalue;
    arr[0] = 0;
    arr[1] = 1;

    for(i = 2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
        fibvalue = arr[i]; 
    }

    return fibvalue;
}

void fibonacciSeries(int arr[], int n){
    int i;
    arr[0] = 0;
    arr[1] = 1;

    for(i = 2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2]; 
    }

    cout<<endl;
    cout<<"The "<<n<<" term fibonacci series: ";
    
    for(int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }

}
int main(){
    int arr[100];

    int n;
    cout<<"Enter the number of term: ";
    cin>>n;

    cout<<"The "<<n<<" term fibonacci value: "<<fibonacciNumber(arr, n)<<endl;
   
    fibonacciSeries(arr, n);
    cout<<endl;
    return 0;
}