#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, coloum;
    cout<<"Enter number of row: ";
    cin>>row;

    cout<<"Enter number of coloum: ";
    cin>>coloum;

    int A[row][coloum];
    int B[row][coloum];
    int C[row][coloum];
    int D[row][coloum];

    cout<<"<--Enter elements of A matrix-->";
    cout<<endl;
   

    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            cout<<"A "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    cout<<"<--Enter elements of B matrix-->";
    cout<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            cout<<"B "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>B[i][j];
        }
        cout<<endl;
    }

    cout<<"<--Print A matrix-->"<<endl;
    cout<<"A: ";
    cout<<endl; 

    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    

    cout<<"<--Print B matrix-->"<<endl;
    cout<<"B: ";
    cout<<endl; 

    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"<--Addition A and B matrix-->"<<endl;
    cout<<"C: ";
    cout<<endl; 

    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;     
    }
    
    cout<<"<--Subtraction A and B matrix-->"<<endl;
    cout<<"D: ";
    cout<<endl; 
    for(int i = 0; i<row; i++){
        for(int j = 0; j<coloum; j++){
            D[i][j] = A[i][j] - B[i][j];
            cout<<D[i][j]<<" ";
        }
        cout<<endl;        
    }

    return 0;
}