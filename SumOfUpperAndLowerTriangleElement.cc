 #include<bits/stdc++.h>
using namespace std;

int main(){
    int row, column;
    int uppersum =0;
    int lowersum =0;
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
    

  
    cout<<"<--Sum of Upper and Lower triangle elements-->"<<endl;
    
    cout<<"Upper triangle element: ";

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            if(i < j){
                cout<<A[i][j]<<" ";
                uppersum = uppersum + A[i][j];
            }
            
        }     
    }
    cout<<endl;
    cout<<"Lower triangle element: ";

    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            if(i > j){
                cout<<A[i][j]<<" ";
                lowersum = lowersum + A[i][j];
            }
        }     
    }

    cout<<endl; 
    cout<<"Sum of upper triangle elements: "<<uppersum<<endl;
    cout<<"Sum of lower triangle elements: "<<lowersum<<endl;

    return 0;
}