#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10
/*/方怏電會！！！！！！qsort
int main()
{
int index, tmp;
int arr[SIZE]={-1,2,0,3,4,-3,6,5,5,-4};
//int arr2[];
int bg=0,end=SIZE-1;
while(bg<end)
{
while(arr[bg]<=0&&bg<end)
{bg++;}
while(arr[end]>=0&&bg<end)
{
end--;
}
tmp=arr[bg];
arr[bg]=arr[end];
arr[end]=tmp;

}
for(index=0;index<SIZE;index++)
{
printf("%d",arr[index]);
}
system("pause");
return 0;
}*/
void QSort(SqList &L, int low, int high)
{
	if (low < high){
		int pivotloc = Partition(L,low,high);
		QSort(L,low, pivotloc-1);
		PrintST(L);
		QSort(L,pivotloc+1, high);
		PrintST(L);
	}
}
void QuickSort(SqList &L)
{
	QSort(L,1,L.length);
}
int Partition(SqList &L, int low, int high)
{ 
	L.r[0] = L.r[low];
    int pivotkey = L.r[low].key;
    while (low < high)
   { 
	  while (low<high && L.r[high].key >= pivotkey) --high;
      L.r[low] = L.r[high];
      while (low<high && L.r[low].key <= pivotkey) ++low;
       L.r[high] = L.r[low];
   }
   L.r[low]=L.r[0];
   return low;
}