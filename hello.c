#include <stdio.h>

#include <stdlib.h>

int main()
{
int input_k,s;

FILE *fp;

fp=fopen("file.text","rw");
scanf("%d",&input_k);
fprintf(fp,"%d",input_k);

fscanf(fp,"%d",&s);
printf("%d",s);

system("PAUSE");
return 0;
}
