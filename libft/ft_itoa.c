#include "libft.h"
#include <stdlib.h>

static int ft_numlen(int n, int base)
{
	int count;

	count = 0;
	if(n <= 0)
		count++;
	while(n && ++count)
		n /= base;
	return (count);

}
char *ft_itoa(int n)
{
	int len;
	char *res;
	char *num;

	num = "0123456789";
	len = ft_numlen(n , 10);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if(!res)
		return (0);
	res[len] = 0;
	if(n == 0)
	{
		res[0] = '0';
	}
	else if(n < 0)
	{
		res[0] = '-';
	}
	while(n)
	{
		if(n > 0)
			res[--len] = num [n % 10];
		else
			res[--len] = num [n % 10 * -1];
		n /= 10;
	}
	return (res);
}