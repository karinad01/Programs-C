#include <stdio.h>
#include <stdlib.h>

int main()
{


    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    //Това е програма, която изчислява сумата от първите n числа, които въведеш.

    for(count = 1; count <= num; ++count) {

     sum += count;
}



printf("Sum = %d", sum);


    return 0;
}
