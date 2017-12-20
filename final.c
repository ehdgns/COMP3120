#include <stdio.h>
#define FNAME "Demo.txt"

int main()
{
FILE *fp = 0;
fopen(FNAME,"w");
if(fp)
{
printf("success\n");
fclose(fp);
}
else
{
printf("fail");
}
return 0;
}
