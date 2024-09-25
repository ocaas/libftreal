/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olopez-s <olopez-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 03:07:37 by olopez-s          #+#    #+#             */
/*   Updated: 2024/09/24 03:07:37 by olopez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	while (a > 0)
	{
		if (s[a - 1] == c)
			return ((char *)&s[a -1]);
		s--;
	}
	if (c == '\0')
		return ((char *)&s[a]);
	return (0);
}
