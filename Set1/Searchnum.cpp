#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 integers : ";
    for(int i = 0;i<5;i++)
    cin>>arr[i];
    cout<<"enter an element to search";
    int x= 0;
    cin>>x;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==x)
        {
            cout<<"index of the first occurance of the element is at" <<i;
            break;
        }
    }
