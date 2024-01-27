#include<stdio.h>
#include<conio.h>
void main()
{
 int arr1[50],arr2[50],arr3[100],i,j,m,n,k=0;
 clrscr();
 printf("\nEnter the size of the first array : ");
 scanf("%d",&m);
 printf("\nEnter the sorted elements of the first array : ");
 for(i=0;i<m;i++)
 {
  scanf("%d",&arr1[i]);
 }
 printf("\nEnter the size of the second array : ");
 scanf("%d",&n);
 printf("\nEnter the sorted elements of the second array : ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr2[i]);
 }
 i=0;
 j=0;
 while(i<m&&j<n)
 {
  if(arr1[i]<arr2[j])
  {
   arr3[k]=arr1[i];
   i++;
  }
  else
  {
   arr3[k]=arr2[j];
   j++;
  }
  k++;
 }

 if(i>=m)
 {
  while(j<n)
  {
   arr3[k]=arr2[j];
   j++;
   k++;
  }
 }

 if(j>=n)
 {
  while(i<m)
  {
   arr3[k]=arr1[i];
   i++;
   k++;
  }
 }

 printf("\nArray after merging : \n");
 for(i=0;i<m+n;i++)
 {
  printf("%d\t",arr3[i]);
 }
 getch();
}