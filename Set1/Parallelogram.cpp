#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter no. of rows ";
    cin>>row;
    col=5+row;
    for(int i = row;i>0;i--)
    {
        for(int x = 0 ; x<i;x++)
           cout<<" ";
        for(int y = 0; y<5;y++)
           cout<<"*";
        cout<<endl;
   }
    return 0;
}
