/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 00:43:18 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/25 00:43:18 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *c1, const char *c2, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)c1;
	s2 = (char *)c2;
	if (*s1 != '\0' && (*s1) == (*s2) && n > 0 && *s2 != '\0')
	{
		s1++;
		s2++;
		n--;
	}
	else if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/* 
int main(void)
{
    // Casos de prueba simples
    printf("Comparando 'Hola' y 'Hola' (n = 4): %d\n",
	 ft_strncmp("Hola", "Hola", 4));  // Esperado: 0
    printf("Comparando 'Hola' y 'Holb' (n = 4): %d\n",
	 ft_strncmp("Hola", "Holb", 4));  // Esperado: Diferente
	  (positivo o negativo)
    printf("Comparando 'Hola' y 'Hol' (n = 4): %d\n",
	 ft_strncmp("Hola", "Hol", 4));   // Esperado: Diferente (positivo)
    printf("Comparando 'Hola' y 'Hol' (n = 3): %d\n",
	 ft_strncmp("Hola", "Hol", 3));   // Esperado: 0

    return 0;
} */
