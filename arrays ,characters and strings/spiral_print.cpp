/*For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
Sample Input 1:
1
4 4 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16
Sample Output 1:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/
#include <iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    int cs=0,ce=nCols,rs=0,re=nRows,i;
    while(cs<ce && rs<re){
    	for(i=cs;i<ce;i++)
            cout<<input[rs][i]<<" ";
        rs++;
        for(i=rs;i<re;i++)
            cout<<input[i][ce-1]<<" ";
        ce--;
        if(rs<re){
            for(i=ce-1;i>=cs;i--)
                cout<<input[re-1][i]<<" ";
            re--;
        }
        if(cs<ce){
            for(i=re-1;i>=rs;i--)
                cout<<input[i][cs]<<" ";
            cs++;
        }
        
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
