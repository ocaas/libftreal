/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:04:56 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/24 01:04:56 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/* int	main(void)
{
	const char *str = "Hola bro, matame";
	char *result;
	 result = ft_strchr(str, 'a');

    // Si encuentra el carácter
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found.\n");

    return 0;
} */