#include <iostream>
using namespace std;
int main()
{
    int a[] = {10,20,30,40,50};
    int b[] = {2,4,13,85,90};
    int c[10] ;
    int i =0,j=0,k=0;
    int m=sizeof(a)/sizeof(int),n=sizeof(b)/sizeof(int);
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            k++;
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
            i++;
        }
        
    }

        while(j<n)
        {
            c[k++] = b[j++];
           
        }
        

        while(i<m)
        {
            c[k++] = a[i++];
           cout <<c[k];
        }
    
    for(int x =0 ; x<sizeof(c)/sizeof(int);x++ )
    {
       cout<< c[x] <<" ";
    }
    return 0;
}
