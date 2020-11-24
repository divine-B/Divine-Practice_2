#include <iostream>
#include<conio.h>
using namespace std;


   int main()
    {
     int arr[5],i;
     int *p=arr;
     cout<<"Enter five numbers separated by space:";
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<"Your numbers are:\n";
     for(i=0;i<5;i++)
        cout<<arr[i]<<endl;

     getch();
     return 0;

    }


