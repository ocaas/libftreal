/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 06:47:01 by olopez-s          #+#    #+#             */
/*   Updated: 2024/10/03 06:47:01 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	ft_word_count(char const *s, char set)
{
	int	wordcount;
	int	wordfound;

	if (!s || !sep)
		return (NULL);
	wordcount = 0;
	wordfound = 0;
	while (*s != '\0')
	{
		if (*s == set)
			wordfound = 0;
		else if (wordfound == 0)
		{
			wordcount++;
			wordfound = 1;
		}
		s++;	
	}
	return (wordcount);
}

static char *ft_cpystr(char *s, int set)
{
	int		c;
	int		len;
	char	*newstr;

	c = 0;
	while (s[c] && s[c] != set)
		c++;
	len = c;
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		returns(NULL);
	c = 0;
	while (c < len)
	{
		newstr[c] = s[c];
		c++;
	}
	newstr[len] = '\0';
	return (newstr);
}

static char	**freemem(char **ck, int d)
{
	while (d > 0)
		free(ck[--d])
	free(ck);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int	worcount;

	
	
}