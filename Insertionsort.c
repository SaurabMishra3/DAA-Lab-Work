#include<stdio.h>
#include<conio.h>
void INSERTION(int a[],int n);
//Function declaration void main()
void main()
{
int i,a[10],n;
printf("\nProgram for INSERTION SORT\n");
printf("Enter no. of elements:\n");//Input section
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element%d: ",i); scanf("%d",&a[i]);
}
INSERTION(a,n);//Calling function in main
printf("Sorted array:\n");//Output section
 for(i=0;i<n;i++)
{
printf("%6d",a[i]);
}
getch();
}
void INSERTION(int a[],int n)//Function definition
{
int i,j,key;
for(j=1;j<n;j++) // Sorting section
{
key=a[j]; i=j-1;
while((i>=0)&&(a[i]>key)) // Comparison
{
a[i+1]=a[i]; i=i-1;
}
a[i+1]=key;
}
}
