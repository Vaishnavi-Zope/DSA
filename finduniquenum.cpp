#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 integers : ";
    for(int i = 0;i<5;i++)
    cin>>arr[i];
    
    int flag[5] = {0};
    for(int i=0;i<5;i++)
    {
        for(int j = 0; j<5 ;j++)
        {
            if(i==j) continue;
            else if(arr[j]==arr[i])
           {
              flag[j] = 1;
           }
        }
        
    }
    for(int i=0;i<5;i++)
    {
       if(flag[i]==0)
        cout<<arr[i] <<" ";
    }
}

