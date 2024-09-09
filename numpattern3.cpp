#include <iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    
    for(int i=1;i<=row;i++)
    {
        for(int x=i ;x<=row;x++)
        {
            cout<<x;
        }
        for(int j =1; j<i ;j++)
        cout<<5;
        cout<<endl;
    }
    
    
    return 0;
}
