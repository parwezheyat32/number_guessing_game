#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num,guess,nguesses =1;
    srand(time(0));
    num = rand()%100 +1;
   printf("The random number is: %d\n",num);

    do{
        printf("Let's guess a number\n");
        scanf("%d",&guess);
        if(guess>num)
        {
            printf("lower number please! \n");
        }
        else if(guess<num)
        {printf("higher number please! \n");}
        else{printf("yay you got it in %d attmepts",nguesses);}
        nguesses++;

    }while(num!=guess);

    return 0;
}