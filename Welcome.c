#include<stdio.h>
int main()
{

  char arr[] = "Water";
  int n = strlen(arr);
  int i,j,k;
  for(i = 0;i<n;i++);
  {
    for(j=n-1;j>i;j--)
    {
       printf(" ");
    }
    for(k=0;k<=i;k++)
    {
        printf("%c ",arr[k]);
     
    }
    printf("\n");

  }
  

return 0;
}
