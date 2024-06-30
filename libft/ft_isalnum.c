/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:22:42 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 15:08:21 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha (c) || ft_isdigit (c));
}

int main()
{	
	char i; 
	i = '0';
    while (i <= '9')
    {
        printf("%d",ft_isalnum(i));
        i++;
    }

}
