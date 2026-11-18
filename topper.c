#include<stdio.h>
#include<string.h>
struct details
{
  int id;
  char name[20];
  float marks;
};
int main(void)
{
  struct details s[3]={{101,"nivee",78.4},{102,"indra",94.7},{103,"ponni",77}};
  float max=s[0].marks;
  char topper[20];
  for(int i=1;i<3;i++)
  {
    if(max<s[i].marks)
    {
      max=s[i].marks;
      strcpy(topper,s[i].name);
    }
  }
  printf("TOPPER:%s",topper);
  return 0;
}

