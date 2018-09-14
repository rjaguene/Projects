/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:43:04 by akhercha          #+#    #+#             */
/*   Updated: 2017/11/16 17:40:17 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_after(char const *s, unsigned int i)
{
	while (s[i])
	{
		if (!ft_iswhitespace(s[i]))
			return (1);
		i = i + 1;
	}
	return (0);
}

static size_t	ft_charslen(char const *s)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (ft_iswhitespace(s[i]))
		i = i + 1;
	while (s[i] && ft_word_after(s, i))
	{
		while (ft_iswhitespace(s[i]))
		{
			i = i + 1;
			len = ft_word_after(s, i) ? len + 1 : len;
		}
		while (s[i] && !ft_iswhitespace(s[i]))
		{
			i = i + 1;
			len = len + 1;
		}
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*fresh;
	size_t	i;
	size_t	j;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_charslen(s);
	if (!(fresh = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (ft_iswhitespace(s[i]))
		i = i + 1;
	while (j < len)
		fresh[j++] = s[i++];
	fresh[j] = '\0';
	return (fresh);
}
