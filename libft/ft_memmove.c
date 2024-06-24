#include "libft.h"
// #include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if(!dest || !src)
	{
		return (NULL);
	}
	if(dest > src)
	{
		i = (int)n - 1;
		while(i >= 0)
		{
			*(char*)(dest + i) = *(char*)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while(i < (int)n)
		{
			*(char*)(dest + i) = *(char*)(src + i);
			i++;  
		}
	}
	return (dest); 
	
}

// int main(void)
// {
// 	char *s1 = "Hello World Raph";
// 	char s2[20];

// 	copykakashi(s2,s1,sizeof(s2));

// 	printf("%s\n",s2);
// }