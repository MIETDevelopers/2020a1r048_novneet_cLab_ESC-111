#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num;
  FILE *fp;

  fp = fopen(" D:\\new file.txt", "r");
  printf("enter number you want to save in file\n");
  scanf("%d",&num);

  fscanf(fp,"%d",&num);
  printf("value of number = %d",num);
  fclose(fp);
  return 0;

}
