#include <iostream>
using namespace std;

void merge(int *arr, int low, int high, int mid)
{
  int i = low;
  int k = low;
  int j = mid + 1;
  int mas[101];
  while (i <= mid && j <= high)
  {
    if (arr[i] < arr[j])
    {
      mas[k] = arr[i];
      k++;
      i++;
    }
    else
    {
      mas[k] = arr[j];
      k++;
      j++;
    }
  }
  while (i <= mid)
  {
    mas[k] = arr[i];
    k++;
    i++;
  }
  while (j <= high)
  {
    mas[k] = arr[j];
    k++;
    j++;
  }
  for (i = low; i < k; i++)
  {
    arr[i] = mas[i];
  }
}

void merge_sort(int *arr, int low, int high)
{
  int mid;
  if (low < high)
  {
    mid = (low + high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, high, mid);
  }
}

int main()
{
  int arr[100], i;
  int m=10;
  for (i=0;i<m;i++) //рандомное заполнение массива
    {
      arr[i]=rand()%10;
    }

  for(i=0; i<m; i++)
    cout<<arr[i]<<" ";
  merge_sort(arr,0,m-1);
  cout<<endl;
  for(i=0; i<m; i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
