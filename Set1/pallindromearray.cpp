#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 integers : ";
    for(int i = 0;i<5;i++)
    cin>>arr[i];
    for(int j = 0;j<=(5/2);j++)
    {
      if(arr[j]!=arr[5-j])
      {
      cout<<"array is not pallindrome";
      break;
      }
      
    }
}
