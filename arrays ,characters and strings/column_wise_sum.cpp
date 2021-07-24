/*Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
  Sample Input :
4 2 1 2 3 4 5 6 7 8
Sample Output :
16 20*/

#include<iostream>
using namespace std;


int main(){
    int m,n;
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int col_sum=0;
        for(int j=0;j<m;j++){
            col_sum+=mat[j][i];
        }
        cout<<col_sum<<" ";
    }
}



