/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // Matrix multiplication
    
    int m,n;
    
    cin>>m>>n;
    int target;
    cin>> target;
    
    int arr[m][n];
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    bool found= false;
    
    
    int row_start= 0, col_start= n-1;
    
    while(row_start<n && col_start>=0)
    {
        if (arr[row_start][col_start]==target)
        {
            found= true;
            break;
        }
        
        else if (arr[row_start][col_start]> target)
        {
            col_start--;
        }
        else
        {
            row_start++;
        }
    }
    
    if(found)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

    return 0;
}
