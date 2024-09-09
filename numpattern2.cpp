#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row;
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i==1 || j==1  || i==row || j==col)
            {
                cout<<1;
            }
            else cout<<0;
            
        }
        cout<<endl;
    }
    
    
    return 0;
}
