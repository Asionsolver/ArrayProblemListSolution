 #include<bits/stdc++.h>
using namespace std;

int main(){
    int row, column;
    int sum =0;
    cout<<"Enter number of row in A matrix: ";
    cin>>row;

    cout<<"Enter number of column A matrix: ";
    cin>>column;
    
   
    while (row != column)
    {
    cout<<"Error !!! Because first matrix row and column not equal."<<endl;
    cout<<"So please again input row and column."<<endl;
    
    cout<<"Enter number of row in A matrix: ";
    cin>>row;

    cout<<"Enter number of colum A matrix: ";
    cin>>column;
    }
    

    int A[row][column];
    
    cout<<"<--Enter elements of A matrix-->";
    cout<<endl;
   

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout<<"A "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    
    cout<<"<--Print A matrix-->"<<endl;
    cout<<"A: ";
    cout<<endl; 

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    

  
    cout<<"<--Sum of Diagonal matrix-->"<<endl;
    cout<<"Diaginal Matrix element: ";

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            if(i == j){
                cout<<A[i][j]<<" ";
                sum = sum + A[i][j];
            }
        }     
    }

    cout<<endl; 
    cout<<"Diagonal element sum: "<<sum<<endl;

    return 0;
}