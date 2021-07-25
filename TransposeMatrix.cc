#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, column;

    cout<<"Enter row size: ";
    cin>>row;

    cout<<"Enter column size: ";
    cin>>column;

    int arr[row][column];
    int transpose[row][column];

    cout<<"Enter row and clonum element: ";
    cout<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    
    cout<<"<--Print A Matrix-->";
    cout<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

    //calculation transpose matrix
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    cout<<"<--Print the Transpose Matrix-->";
    cout<<endl;
    for(int i = 0; i<column; i++){
        for(int j = 0; j<row; j++){          
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}