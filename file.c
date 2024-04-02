#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
        if(no%3==0 || no%5==0){
            printf("Either divisible by 3 or 5");
        }
        printf("\n");
    
    return 0;
}
