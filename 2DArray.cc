#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, coloum;

    cout<<"Enter row size: ";
    cin>>row;

    cout<<"Enter coloum size: ";
    cin>>coloum;

    int arr[row][coloum];
    cout<<"Enter row and coloum element: ";
    cout<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    
    cout<<"<--Print the row and coloum element-->";
    cout<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}