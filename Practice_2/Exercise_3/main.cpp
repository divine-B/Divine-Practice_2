#include <iostream>
#include <cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;



void mysort(int vallist[]){

    int i,j;
    int temp;
      for(i=0;i<10;i++)
     for(j=0;j<10;j++)
      if(vallist[j]>vallist[j+1]){
         temp=vallist[j];
         vallist[j]=vallist[j+1];
         vallist[j+1]=temp;
       }

       for(i=0;i<10;i++)cout<<vallist[i]<<"\n";

}

int main()
{
  int vallist[]={23,2,34,23,43,22,32,32,43,34};
  mysort(vallist);
  system("PAUSE");
  return EXIT_SUCCESS; }



