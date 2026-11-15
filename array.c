//Highest Mark and Average Using Array Functions
#include<stdio.h>
void read(int num,int marks[num])
{
  for(int i=1;i<=num;i++)
  {
    printf("enter mark%d:",i);
    scanf("%d",&marks[i-1]);
  }
}
int max_mark(int marks[],int num)
{
  int max=0;
  for(int i=0;i<num;i++)
  {
    if(max<marks[i])
    {
      max=marks[i];
    }
  }
  return max;
}
float avg_mark(int marks[],int num)
{
  int sum=0;
  for(int i=0;i<num;i++)
  {
    sum=sum+marks[i];
  }
  float avg=sum/num;
  return avg;
}
int main(void)
{
  int n;
  printf("enter number of students:");
  scanf("%d",&n);
  int marks[n];
  read(n,marks);
  printf("THE HIGHEST MARK:%d\n",max_mark(marks,n));
  printf("THE AVERAGE MARK:%f",avg_mark(marks,n));
  return 0;
}
