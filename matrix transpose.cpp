/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;


// Matrix transpose

int main()
{
    int n;
    cin>> n;
    
    int arr[n][n];
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    // transpose
    
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int temp= arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]= temp;
        }
    }
    
    cout<< " the transpose of the matrix is "<<endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }
    
    return 0;
}
