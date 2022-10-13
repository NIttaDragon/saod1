# include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void merge(int *a, int first, int last)
{
  cout<<"in merge"<<endl;
  int mid,start,final,i;
  mid=(first+last)/2;
  start=first;
  final=mid+1;
  int *mas=new int [last-first+1];
  for(i=first;i<=last;i++)
  {
    if((start<=last)||(a[start]<a[final]))
    {
      mas[i-first]=a[start];
      start++;
    }
    else
    {
      mas[i-first]=a[final];
      final++;
    }
  }
  for(i=first;i<=last;i++)
    a[i]=mas[i-first];
  delete []mas;
};

void mergeSort(int *a,int first,int last)
{
  cout<<"in sort"<<endl;
  if(first<last)
  {
    mergeSort(a,first,(first+last)/2);
    mergeSort(a,(first+last)/2+1,last);
    merge(a,first,last);
  }
}

int main()
{
  int *a=new int[100];
  int i;
  int m=10;
  for (i=0;i<m;i++) //рандомное заполнение массива
    {
      a[i]=rand()%10;
    }

  for(i=0;i<m;i++)
    cout<<a[i]<<" ";
  mergeSort(a,1,m);
  cout<<endl;
  for(i=1;i<=m;i++)
    cout<<a[i]<<" ";
  cout<<endl;
  delete []a;
}
