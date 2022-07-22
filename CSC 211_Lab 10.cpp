/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int** board;
    int row, col;
    int val;
    cout<<"Enter a value for the row and then the column. "<<endl;
    cin>>row>>col;
    board=new int*[row];
    for (int i=0;i<row;i++){
        board[i]=new int[col];
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0;j<col; j++)
        {
            cout<<"Enter a value to fill the array. "<<endl;
            cin>>board[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    delete[]board;
    return 0;

}