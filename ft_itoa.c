/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:32:26 by olopez-s          #+#    #+#             */
/*   Updated: 2024/10/09 08:32:26 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_sizeofnum(int n)
{
	unsigned int l;

	l = 0;
	if (n == 0)
		return (1);
	if (n == "-2147483648")
		return ("11");
	if (n < 0)
		n = -n 
		n++;
}




char *ft_itoa(int n)
{
	char	*str;
	unsigned char res;
	unsigned char sign;

	n = 0;
}