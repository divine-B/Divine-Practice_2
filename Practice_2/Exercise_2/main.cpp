#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int arr[10];
  int mode[10][2];
   cout<<"Enter 10 integer values\n";
  for(int l=0;l<10;l++) {
     cout<<"value "<<l<<":";cin>>arr[l];

}
 //find the max value and min value
 int i;int j;
//sort array to find max and min values
 for(i=0; i<10; i++)
  for(j=9;j>i;j--)
     if(arr[j]<arr[j-1]) {
         int p=arr[j];
         arr[j]=arr[j-1];
         arr[j-1]=p;
}

  cout<<"Max="<<arr[9]<<"\nMin="<<arr[0];
  cout<<"\n";
//initialize 2D array storing numbers of occurences, and values
 for(i=0;i<2;i++)
   for(j=0;j<10;j++)mode[j][i]=0;
     mode[0][0]=1;

//find mode
 for(i=0;i<10;i++)
  for(j=0;j<10;j++)
   if(arr[i]==arr[j+1]) {++mode[i][0];mode[i][1]=arr[i];}

//find max occurence
int max;
int k=0;
max=mode[0][0];
   for(j=0;j<10;j++)
    if(max<mode[j][0]){max=mode[j][0];k=j;}

//print result
  cout<<"The most occurring item:"<<mode[k][1]<<"\n";
  cout<<"It occurs "<<max<<" times.";
  cout<<"\n";
  system("PAUSE");

  return EXIT_SUCCESS;
}
