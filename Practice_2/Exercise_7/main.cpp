#include <iostream>
#include<conio.h>

using namespace std;
int *sortAsc(int *p, int size);



int main()
    {
     int arr[]={23,34,2,3,5,12,42,56,89,8};
     int *p=sortAsc(arr,10);
     //output the sorted array
     int i;
     for(i=0;i<10;i++)
       cout<<*(p+i)<<endl;

     getch();
     return 0;

    }


int *sortAsc(int *p, int n){
    int i,j;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(*(p+j)<*(p+i))
              {
                int temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
                }
   return p;
}

