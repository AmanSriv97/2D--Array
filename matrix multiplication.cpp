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
    
    int n1,n2,n3;
    
    cin>>n1>>n2>>n3;
    
    int m1[n1][n2];
    
    for(int i =0; i<n1;i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin>>m1[i][j];
        }
    }
    
    int m2[n2][n3];
    
    
    for(int i =0; i<n2;i++)
    {
        for(int j=0; j<n3; j++)
        {
            cin>>m2[i][j];
        }
    }
    
    int ans[n1][n3];
    
    for(int i =0; i<n1;i++)
    {
        for(int j=0; j<n3; j++)
        {
            ans[i][j]=0;
        }
    }
    
    for(int i=0; i<n1;i++)
    {
        for(int j=0; j<n3; j++)
        {
            for(int k=0; k<n2;k++)
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    
    for(int i =0; i<n1;i++)
    {
        for(int j=0; j<n3; j++)
        {
            cout<< ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
