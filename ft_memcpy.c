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
	size_t	len;
	char	*des;
	char	*sr;

	des = (char *)dest;
	sr = (char *)src;
	len = 0;
	while (len < n)
	{
		des[len] = sr[len];
		len++;
	}
	return (dest);
}

/* int main(void)
{
    char src[] = "Hello, World!";
    char dest[20];

    // Llamada a ft_memcpy para copiar 'src' a 'dest'
    ft_memcpy(dest, src, strlen(src) + 1); // +1 para
	 incluir el carácter nulo '\0'

    // Mostrar el resultado
    printf("src: %s\n", src);
    printf("dest (copiado): %s\n", dest);

    return 0;
}
 */