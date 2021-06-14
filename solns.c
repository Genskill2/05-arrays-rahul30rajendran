/* Enter your solutions in this file */
#include <stdio.h>

float average( int arr[],int n)
{float avg=0;
 for(int i=0;i<n;i++)
   avg=avg+arr[i];
 return avg/n;
}
int factors(int f, int arr[100])
{int pos=0,i=2;
while(f>1)
{
if(f%i==0)
{arr[pos]=i;
pos++;
f=f/i;
}
else
i++;}
return pos;
}
int max(int arr[],int n)
{int max=arr[0];
for(int i=0;i<n;i++)
{
if(max<arr[i])
max=arr[i];}
 return max;}

int min(int arr[], int n)
{int min=arr[0];
for(int i=0;i<n;i++)
{
if(min>arr[i])
min=arr[i];
}
 return min;}

int mode(int arr[],int n)
{int arr2[200],ans=0;
for (int i=0;i<n;i++)

{int k=0;
for (int j=0;j<n;j++)
{
if (arr[i]==arr[j])
k++;
}arr2[i]=k;}
int max=arr2[0];
for(int i=0;i<n;i++)
{
if(max<arr2[i])
max=arr2[i];}
for(int i=0;i<n;i++)
{if(max==arr2[i])
ans=i;}
return arr[ans];
}
