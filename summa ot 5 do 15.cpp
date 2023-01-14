#include <stdio.h>

/* https://github.com/by-axen/-3.5 */

main() //программа, которая сумммирует числа от 5 до 15 включительно и выводит сумму на экран
{
	int i=5;
	int sum=0;
	
	while(i<15)
	{
		sum=sum+i;
		printf("%i+",i);
		i=i+1;
	}
	sum=sum+i;
	printf("%i=%i",i,sum);
}
