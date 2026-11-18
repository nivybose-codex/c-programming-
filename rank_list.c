#include<stdio.h>
struct details
{
  int roll;
  char name[20];
  float marks;
};
void max(struct details num[])
{
  for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
          if(num[j+1].marks>num[j].marks)
          {
            struct details temp=num[j+1];
            num[j+1]=num[j];
            num[j]=temp;
          }
      }
    }
}
int main(void)
{
  struct details lst[3]={{101,"nivee",78.4},{102,"indra",94.7},{103,"ponni",77}};
  max(lst);
  printf("RANK LIST:\n");
  for(int i=0;i<3;i++)
  {
    printf("%d.%s-->%f\n",i+1,lst[i].name,lst[i].marks);
  }
  return 0;
}

  
