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
  }*/
    for (i=0;i<m;i++)
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
}
