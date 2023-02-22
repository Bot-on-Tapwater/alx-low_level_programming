#include <stdio.h>

/**
 * fibo - prints fibonaci sequence
 *
 * Return: returns void
 */
void fibo(void)
{
int i;
int first_num = 1;
int second_num = 2;
long int sum;	/* current sum */
long int prev_sum;
long int next_sum;

printf("%d", first_num);
printf(", %d", second_num);
sum = first_num + second_num;
prev_sum = sum;
printf(", %ld", sum);
sum = sum + second_num;
printf(", %ld", sum);

for (i = 4; i < 50; i++)
{
next_sum = sum + prev_sum;
prev_sum = sum;
sum = next_sum;
printf(", %ld", sum);
}
putchar(10);
}

/**
* main - entry point
*
* Return: returns zero
*/
int main(void)
{
fibo();
return (0);
}
