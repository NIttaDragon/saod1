# include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a[10];
  int i,j,t,k;
  int l=1; int m=10;
  for (i=0;i<m;i++) //рандомное заполнение массива
    {
      a[i]=rand()%10;
    }
  while(l!=0) //сортировка пузырьком
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
  }
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
      /*  if(a[i]>a[i+1])
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
}
