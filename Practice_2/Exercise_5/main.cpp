#include <iostream>
#include<conio.h>
using namespace std;
int *findMax(int arr[],int n);
using namespace std;



// Pointer : max value



    int main()
    {

       int n,i,*p;
      cout<<"Enter number of data values";
      cin>>n;
      int arr[n];
      for(i=0;i<n;i++)     {
        cout<<"Enter value"<<i+1<<":";
       cin>>arr[i];
    }
      p=findMax(arr,n);
      cout<<"The max value is:"<<*p;
      getch();
      return 0;
    }

    int *findMax(int data[],int n)
    {
      int *max=data;
      int i;
     for(i=1;i<n;i++){
       if(*max<*(max+i)) *max=*(max+i);
      }
      return max;
    }



