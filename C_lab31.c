#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num;
  FILE *fp;

  fp = fopen(" D:\\new file.txt", "w");
  printf("enter number you want to save in file\n");
  scanf("%d",&num);

  fprintf(fp,"%d",num);
  fclose(fp);
  return 0;

}
