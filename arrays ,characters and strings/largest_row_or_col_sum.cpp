/*For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
  Sample input 
  1
3 2
6 9
8 5
9 2
Sample Output
column 0 23  */
#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{      int max_col_sum=0,max_col_index=0,max_row_index=0,max_row_sum=0,i,j;
 	   int r=-2147483648;
       for(i=0;i<mCols;i++){
        int col_sum=0;
        int row_sum=0;
        for(j=0;j<nRows;j++){
            col_sum+=input[j][i];

        }
           //cout<<"c"<<col_sum;

        if(col_sum>max_col_sum){
            max_col_sum=col_sum;
            max_col_index=i;
            //cout<<max_col_sum<<endl;
        }
 }
 for(i=0;i<nRows;i++){
        int col_sum=0;
        int row_sum=0;
        for(j=0;j<mCols;j++){
            row_sum+=input[i][j];

        }
                //cout<<"r"<<row_sum;

           if(row_sum>max_row_sum){
            max_row_sum=row_sum;
            max_row_index=i;
            //cout<<max_row_sum<<endl;
        }
    }

    if(max_col_sum>max_row_sum)
        cout<<"column"<<" "<<max_col_index<<" "<<max_col_sum;

    else if(max_row_sum>max_col_sum)
     cout<<"row"<<" "<<max_row_index<<" "<<max_row_sum;
    else if (max_col_sum==0 or max_row_sum==0)
             cout<<"row"<<" "<<max_row_index<<" "<<r;
    else if(max_row_sum==max_col_sum)
             cout<<"row"<<" "<<max_row_index<<" "<<max_row_sum;


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

		findLargest(input, row, col);
		cout << endl;
	}
}


