#include <iostream>
#include <climits>
using namespace std;

int getMaxSum(int matrix[][4],int rows,int cols){
    int maxRowSum=INT_MIN;

    for(int i=0 ; i<rows ; i++){
        int rowSum=0;
        for(int j=0 ; j<cols ; j++){
            rowSum+=matrix[i][j];
        }

        maxRowSum=max(maxRowSum,rowSum);
    }
    return maxRowSum;
}

int diagonalSum(int matrix[][4],int n){
    int sum=0;

    //pd:j=i
    //sd:n-i-1

    for(int i=0 ; i<n ; i++){
        sum+=matrix[i][i];
        if(i!=n-i-1){
            sum+=matrix[i][n-i-1];
        }
    }
        
    return sum;
}

int main(){
    // int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int row=4;
    // int col=3;

    // cout<<matrix[2][2]<<endl;//9

    // for(int i=0 ; i<row ; i++){
    //     for(int j=0 ; j<col ; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;

    // //TO INPUT FROM USER
    // int matrix[4][3];
    // int row=4;
    // int col=3;

    // //INPUT
    // for(int i=0 ; i<row ; i++){
    //     for(int j=0 ; j<col ; j++){
    //         cin>>matrix[i][j];
    //     }
    // }

    // //OUTPUT
    // for(int i=0 ; i<row ; i++){
    //     for(int j=0 ; j<col ; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;

    int matrix[4][4]={{1,2,3,13},{4,5,6,14},{7,8,9,15},{10,11,12,16}};
    int rows=4;
    int cols=4;
    int n=4;

    cout<<"max sum="<<getMaxSum(matrix,rows,cols)<<endl;

    cout<<endl;

    cout<<"diagonal sum="<<diagonalSum(matrix,n)<<endl;
   

    return 0;
}