/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:32:39 by thopgood          #+#    #+#             */
/*   Updated: 2024/04/14 12:23:11 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Substring
Allocates with malloc and returns a substring from string s.
Substring begins at index start and is of max size len. 
Returns pointer to substring or NULL if failed.

*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	unsigned int	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = -1;
	while (++i < len && s[start + i])
		substr[i] = (char)s[start + i];
	substr[i] = '\0';
	return (substr);
}
