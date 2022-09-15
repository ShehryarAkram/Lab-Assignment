#include <stdio.h>
int main()
{
    int i,num,range;
    printf("Enter the any number\n");
    scanf("%d",&num);
      printf("Enter the range\n");
    scanf("%d",&range);
    for(i=1; i<=range; i++){
        printf("%dx%d = %d\n",num,i,num*i);
    }
    return 0;
}
