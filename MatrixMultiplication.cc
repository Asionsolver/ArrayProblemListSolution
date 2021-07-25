#include<bits/stdc++.h>
using namespace std;

int main(){
    int row1, column1;
    int row2, column2;
    int sum =0;
    cout<<"Enter number of row in A matrix: ";
    cin>>row1;

    cout<<"Enter number of column A matrix: ";
    cin>>column1;
    
    cout<<"Enter number of row in B matrix: ";
    cin>>row2;

    cout<<"Enter number of column B matrix: ";
    cin>>column2;

    while (column1 != row2)
    {
    cout<<"Error !!! Because column of first matrix not equal to row of second matrix."<<endl;
    cout<<"So please again input column and row."<<endl;
    
    cout<<"Enter number of row in A matrix: ";
    cin>>row1;

    cout<<"Enter number of colum A matrix: ";
    cin>>column1;
    
    cout<<"Enter number of row in B matrix: ";
    cin>>row2;

    cout<<"Enter number of colum B matrix: ";
    cin>>column2;
    }
    

    int A[row1][column1];
    int B[row2][column2];
    int C[row1][column2];

    cout<<"<--Enter elements of A matrix-->";
    cout<<endl;
   

    for(int i = 0; i<row1; i++){
        for(int j = 0; j<column1; j++){
            cout<<"A "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    cout<<"<--Enter elements of B matrix-->";
    cout<<endl;
    for(int i = 0; i<row2; i++){
        for(int j = 0; j<column2; j++){
            cout<<"B "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>B[i][j];
        }
        cout<<endl;
    }

    cout<<"<--Print A matrix-->"<<endl;
    cout<<"A: ";
    cout<<endl; 

    for(int i = 0; i<row1; i++){
        for(int j = 0; j<column1; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    

    cout<<"<--Print B matrix-->"<<endl;
    cout<<"B: ";
    cout<<endl; 

    for(int i = 0; i<row2; i++){
        for(int j = 0; j<column2; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"<--Multiplication A and B matrix-->"<<endl;
    cout<<"C: ";
    cout<<endl; 

    for(int i = 0; i<row1; i++){
        for(int j = 0; j<column2; j++){
            for(int k = 0; k < column1; k++){
            sum = sum + A[i][k]*B[k][j];
            }
            C[i][j] = sum;
            cout<<C[i][j]<<" ";
            sum = 0;
        }
        cout<<endl;     
    }

    return 0;
}