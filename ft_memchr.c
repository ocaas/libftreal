/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 03:16:22 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/26 03:16:22 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	rec;

	rec = 0;
	str = (char *)s;
	while (rec < n)
	{
		if ((unsigned char)str[rec] == (unsigned char)c)
			return ((char *)s + rec);
		rec++;
	}
	return (NULL);
}

/* 
int main(void)
{
    const char str[] = "Hello, world!";
    char *result;
    char target = 'w';
    size_t size = 13; // Cantidad de caracteres a buscar en la cadena

    // Llamamos a la función para buscar la letra 'w' en los primeros
	 13 caracteres de str
    result = (char*) ft_memchr(str, target, size);

    // Si encuentra el carácter
    if (result)
        printf("Carácter '%c' encontrado: %s\n", target, result);
    else
        printf("Carácter '%c' no encontrado.\n", target);

    return 0;
} */