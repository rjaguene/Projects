/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:30:28 by rojaguen          #+#    #+#             */
/*   Updated: 2018/11/07 15:49:34 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static	int		get_inf(t_env **env, t_file **lst)
{
	DIR		*dir;
	struct	dirent *sd;
	int i;
	t_file *new;

	i = 0;
	dir = opendir(".");
	readdir(dir); //temp
	readdir(dir);
	while ((sd = readdir(dir)) != NULL)
	{
		new = new_node();
		*lst = add_link(*lst, new);
		(*lst)->name = ft_strdup(sd->d_name);
		(*lst)->d_type = ft_unsigned_dup(&sd->d_type);
		(*lst)->id = i;
		i++;
	}
	closedir(dir);
	return (0);
}

t_file *swap(t_file *lst, int id)
{
	t_file *a;
	t_file *b;
	t_file *c;
	t_file *tmp;
	t_file *save;


	if (!lst || !lst->next)
		return (NULL);
	return (save);
}

t_file	*sort_lst(t_file *lst)
{
	t_file *save;
	char *tmp;
	save = lst;
	while (lst_is_sort(lst) == 0)
	{
		if (ft_strcmp((lst)->name, (lst)->next->name) > 0)
		{
			
			lst = swap(save, lst->id);
		/*	tmp = ft_strdup((lst)->name);
			free((lst)->name);
			(lst)->name = ft_strdup((lst)->next->name);
			free((lst)->next->name);
			(lst)->next->name = ft_strdup(tmp);
			free(tmp);
			lst = save;*/
		}
		else
			lst = (lst)->next;
	}
//	lst = save;
	return (save);
}

int		main(int argc, char **argv)
{
	t_file *lst;
//	DIR		*dir;
//	struct	dirent *sd;
	t_env	*env;

	lst = NULL;
	//if (!(env = malloc(sizeof(env))))
	//	return (0);
	//ft_bzero(&env, sizeof(env));
	get_inf(&env, &lst);
	lst = sort_lst(lst);
	while (lst)
	{
		ft_printf("%s\n",lst->name);
//		ft_printf("%s\n",lst->d_type);
		lst = lst->next;
	}
//	free_lst(&lst);
	exit(0);
	//init(&env, argc, argv);
//	dir = opendir(".");
/*	while ((sd = readdir(dir)) != NULL)
	{
		ft_printf("%s	",sd->d_name);
	//	if (sd->d_type)
//		ft_printf("%d\n",sd->d_ino);
	}*/
//	closedir(dir);
	return (0);
}
