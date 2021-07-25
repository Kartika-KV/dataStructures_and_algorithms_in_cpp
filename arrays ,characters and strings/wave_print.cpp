/*For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on.
Sample Input 1:
1
3 4
1  2  3  4
5  6  7  8
9 10 11 12
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4  */
#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
   for(int i=0;i<mCols;i++){
       // Top Down 
		if(i%2==0){
            for(int j=0;j<nRows;j++)
                cout<<input[j][i]<<" ";
        }
       // Bottom Up
        else{
            for(int j=nRows-1;j>=0;j--)
                cout<<input[j][i]<<" ";
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
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}
