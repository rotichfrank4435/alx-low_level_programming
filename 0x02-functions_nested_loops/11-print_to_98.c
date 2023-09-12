#include <stdio.h>

void print_natural_numbers(int n)

{
if (n < 99)
{
printf("%d", n);
n++;
while (n <= 98)
{
printf(", %d", n);
n++;
}
printf("\n");
}
}
int main(void)
{
int start_number = 42;
print_natural_numbers(start_number);
return (0);
}

