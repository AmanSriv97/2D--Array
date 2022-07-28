/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <climits>

using namespace std;




int main()
{
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>arr[i][j];
        }
        
        
    }
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
        
    }
    return 0;
}
