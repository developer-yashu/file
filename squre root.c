#include<stdio.h>
main()

{
    int num=36;
    int counter=1;
    while(num>=counter*counter){
        counter++;
    }
    printf("%i",counter-1);
    
}
