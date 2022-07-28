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
    cout<<"Enter the dimensions of array"<<endl;
    int n,m;
    cin>>n>>m;
    cout<<"Enter the element "<<endl;
    int key;
    cin>>key;
    
    int arr[n][m];
    
    cout<<"Enter the elments of 2d array"<< endl;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>arr[i][j];
        }
        
        
    }
    
    // searching an element in the matrix
    
    bool flag;
    
   
    
    
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            if (arr[i][j]== key)
            {
                flag=true;
            }
            
        }
    }
    
    if(flag==true)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
