#include <stdio.h>
#include <assert.h>


int mode(int [], int);

int main(void) {
  int x[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(x, 12) == 4));

  int y[] = {5};
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  }
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
