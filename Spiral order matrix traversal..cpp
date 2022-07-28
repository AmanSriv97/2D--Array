/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;


//Spiral order matrix traversal.

int main()
{
    cout<<"Enter the dimensions of array"<<endl;
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    
    cout<<"Enter the elments of 2d array"<< endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int row_start=0;
    int row_end= n-1;
    int col_start=0;
    int col_end=m-1;
    
    while(row_start<=row_end && col_start<=col_end)
    {
        //row_start
        for(int i=col_start;i<=col_end;i++)
        {
            cout<<arr[row_start][i]<<" ";
        }
        
        
        row_start++;
        
        //col_start
        
        for(int i=row_start; i<=row_end; i++)
        {
            cout<<arr[i][col_end]<<" ";
        }
        
        col_end--;
        //row_end
        
        for(int i=col_end; i>=col_start; i--)
        {
            cout<<arr[row_end][i]<<" ";
        }
        
        row_end--;
        
        for(int i=row_end; i>=row_start; i--)
        {
            cout<<arr[i][col_start]<<" ";
        }
        
        col_start++;
    }
    
    
    return 0;
}
