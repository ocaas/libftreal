/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 03:42:00 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/23 03:42:00 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	if (dst < src)
	{
		len = n;
		while (len > 0)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			len--;
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			len ++;
		}
	}
}
/* 
// Declaración de la función ft_memmove
void ft_memmove(void *s1, const void *s2, size_t n);

int main(void)
{
    char src[50] = "Hello, this is a memmove test!";
    char dest[50];  // destino vacío inicialmente

    // Imprimir antes de memmove
    printf("Antes de ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Dest: %s\n\n", dest);

    // Usamos ft_memmove para copiar 20 bytes desde src a dest
    ft_memmove(dest, src, 20);

    // Imprimir después de memmove
    printf("Después de ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Dest: %s\n", dest);

    // Ejemplo con solapamiento
    printf("\n--- Ejemplo con solapamiento ---\n");

    // Solapar dentro del mismo array (mover dentro de src)
    ft_memmove(src + 7, src, 10);  //
	 Movemos los primeros 10 caracteres a partir del índice 7
    printf("Source después de solapamiento: %s\n", src);

    return 0;
}
 */