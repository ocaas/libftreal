/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 07:19:59 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/30 07:19:59 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!str || start > ft_strlen(str))
		return (NULL);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && str[start + i] != '\0')
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/* 
int main(void)
{
    char *sub = ft_substr("Hello World im Olivia, student of 42", 15, 21); 
	 // Extract "world" from "Hello, world!"

    if (sub != NULL)
    {
        printf("Substring: %s\n", sub);
        free(sub);
    }
    else
    {
        printf("Invalid substring operation.\n");
    }
    return 0;
} */
