/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <akhercha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 21:55:36 by akhercha          #+#    #+#             */
/*   Updated: 2018/07/18 19:26:33 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strtolower(char *str)
{
	char	*s;

	s = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (s);
}
