# include <stdio.h>

/**
 * numLength - returns the lenth of string
 * @num : operand number
 * Return: number of digits
 */

int numLength(int num)
{
int length = 0;

if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
lenght += 1;
}
return (length);
}

/**
 * main - prints the first 98 fibonaci sequence
 * Return: 0
 */

int main(void)
{
unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, f1o = 0, tmpo = 0;
short int i = 1, initial0s;

while (i <= 98)
{
if (flo > 0)
printf("%lu", f1o);
initial0s = numLength(mx) - 1 - numLength(f1);
while (f1o > 0 && initial0s > 0)
{
printf("%lu", 0);
initial0s--;
}
printf("%i", f1);
tmp = (f1 + f2) % mx;
tmpo = (flo + f2o + (f1 + f2) / mx;
f1 = f2;
flo = f2o;
f2 = tmp;
f2o = tmpo;
if (i != 98)
printf(", ");
else
printf("\n");
i++;
}
rerurn (0);
}
