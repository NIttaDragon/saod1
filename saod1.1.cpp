# include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
//#include "stdafx.h"
using namespace std;

void merge(int *a, int l, int r)
{
  int mid,start,final,i;
  int *b=new int [10];
  mid=(r+l)/2;
  start=l;
  final=mid+1;
  for(i=l;i<r;i++)
  {
    if((start<mid)&&(final>r)||(a[start]<a[final]))
    {
      b[i]=a[start];
      start++;
    }
    else
    {
      b[i]=a[final];
      final++;
    }
  }
  for(i=l;i<r;i++)
    a[i]=b[i];
  delete b;
};

void mergeSort(int *a,int l,int r)
{
  if(l<r)
  {
    mergeSort(a,l,(r+l)/2);
    mergeSort(a,(r+l)/2+1,r);
    merge(a,l,r);
  }
}

int main()
{
  int a[10]; int b[10];
  int i,j,t,k;
  int l=1; int m=10;
  for (i=0;i<m;i++) //рандомное заполнение массива
    {
      a[i]=rand()%10;
    }
  /*while(l!=0) //сортировка пузырьком
  {
    l=0;
    for (i=1;i<m;i++)
    {
      if(a[i-1]>a[i])
      {
        k=a[i-1];
        a[i-1]=a[i];
        a[i]=k;
        l++;
      }
      for(int j=0;j<m;j++)
      {
        cout<<a[j]<<", ";
      }
      cout<<endl;
    }
  }
  for (i=0;i<m;i++) // сортировка выбором
  {
    int min=m+1;
    for (j=i;j<m;j++)
    {
      if(a[j]<min)
      {
        min=a[j];
        t=j;
      }
    }
    if(a[i]!=min)
    {
      k=a[i];
      a[i]=min;
      a[t]=k;
    }
  }
  for (i=1;i<m;i++) //сортировка вставками
  {
    for (j=0;j<i;j++)
    {
      if(a[i]<a[j])
      {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
      }
    }
    for(int s=0;s<m;s++)
    {
      cout<<a[s]<<", ";
    }
    cout<<endl;
  }*/
  /*k=1;
  t=0;
  for(int s=0;s<m;s++)
  {
    cout<<a[s]<<", ";
  }
  cout<<endl;
  while(t<(m-1)) // сортировка слиянием
  {
    int n=k-1;
    k=k*2;

    for(i=0;i<m;i+=k)
    {
      /*for(j=1;j<m;j+=k)
      {*/
        /*if(a[i]>a[i+1])
        {
          l=a[i];
          a[i]=a[i+1];
          a[i+1]=l;
        }
      //}
    }
    for(int s=0;s<m;s++)
    {
      cout<<a[s]<<", ";
    }
    cout<<endl;
    t++;
  }*/
  for(i=0;i<m;i++)
    cout<<a[i];
  mergeSort(a,1,m);
  cout<<endl;
  for(i=0;i<m;i++)
    cout<<a[i];
  cout<<endl;
}
