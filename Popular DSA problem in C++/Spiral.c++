#include <bits/stdc++.h>
using namespace std;
#define MAX 100
 
void spiralPrint(int m, int n, int a[MAX][MAX])
{
    int i, k = 0, l = 0;
 
    
 
    while (k < m && l < n) {
    
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;
 
        
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;
 
        
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
   }
 
        
        if (l < n) {
 for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}
 
int main()
{
    int R,C,a[100][100];
    cout<<"enter row and column"<<endl;
    cin>>R>>C;
    cout<<"Enter matrix"<<endl;
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin>>a[i][j];
        }
    }
 
    
    spiralPrint(R, C, a);
    return 0;
}
