/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 03:25:23 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/21 03:25:23 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			len;
	unsigned char	*des;
	unsigned char	*sr;

	len = 0;
	sr = (unsigned char *)src;
	des = (unsigned char *)dest;
	while (n > len)
	{
		des[len] = sr[len];
		len++;
	}
}
/* 
int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, strlen(src) + 1); 
	 incluir el carácter nulo '\0'

    printf("src: %s\n", src);
    printf("dest (copiado): %s\n", dest);

    return 0;
} */
