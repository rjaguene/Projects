/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:25:05 by rojaguen          #+#    #+#             */
/*   Updated: 2018/10/13 17:17:33 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include <dirent.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

typedef struct	s_pars
{
	unsigned int l : 1;
	unsigned int R : 1;
	unsigned int a : 1;
	unsigned int r : 1;
	unsigned int t : 1;

}				t_pars;

typedef	struct s_env
{
	t_pars		pars;
}				t_env;

int				init(t_env **env, int argc, char **argv);
#endif
