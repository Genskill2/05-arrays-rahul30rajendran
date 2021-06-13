#include <stdio.h>
#include <assert.h>


int factors(int, int []);

int main(void) {
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
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
return pos;}
