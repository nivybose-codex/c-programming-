#include<stdio.h>
int sub(int a[])
{
  int num;
  printf("enter no of elements:");
  scanf("%d",&num);
  for(int i=0;i<num;i++)
  {
    scanf("%d",&a[i]);
  }
  int *m=a;
  int *n=a+num-1;
  int diff=*n-*m;
  printf("last-first=%d\n",diff);
  return num;
}
int main(void)
{
  int lst[20];
  int val=sub(lst);
  for(int i=0;i<val;i++)
  {
    printf("%d\n",lst[i]);
  }
  return 0;
}





