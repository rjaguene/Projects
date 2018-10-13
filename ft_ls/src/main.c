/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:30:28 by rojaguen          #+#    #+#             */
/*   Updated: 2018/10/12 17:26:05 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	DIR		*dir;
	struct	dirent *sd;
	t_env	*env;

	if (!(env = malloc(sizeof(env))))
		return (0);
	ft_bzero(&env, sizeof(env));
	init(&env, argc, argv);

	/*dir = opendir(".");
	while (( sd = readdir(dir)) != NULL)
	{
		ft_printf("%s	   ",sd->d_name);
	//	if (sd->d_type)
//		ft_printf("%d\n",sd->d_ino);
	}
	closedir(dir);*/
	return (0);
}
