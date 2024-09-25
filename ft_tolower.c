/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 00:52:26 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/24 00:52:26 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 65 && c < 90)
	{
		return (c + 32);
	}
	return (c);
}
/* 
int	main(void)
{
	int a;
	a = 'J';
	printf("%c\n", ft_tolower(a));
}
 */