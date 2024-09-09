#include <iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        if(i%2)
        {
        for(int j =1;j<=row;j++)
          cout<<j;
          cout<<endl;
        }
        else
        {
           for(int j =row;j>=1;j--)
           cout<<j;
           cout<<endl;
        }
        
    }
    
    
    return 0;
}
