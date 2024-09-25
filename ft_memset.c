/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 02:49:25 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/20 02:49:25 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			kms;
	unsigned char	*lol;

	kms = 0;
	lol = s;
	while (kms < n)
	{
		lol[kms] = (unsigned char)c;
		kms++;
	}
	return (s);
}

/* int	main(void)
{
	char buffer[10] =  "str";
	printf("%s\n", buffer);
	memset(buffer, 'a', 9);
	buffer[10] = '\0';
	printf("%s\n", buffer);
	return(0);

int	main(void)
{
	char buffer[10] = "i hate";
	ft_memset(buffer, 'l', 10);
	printf("%s\n", buffer);
	return(0);
}
 */