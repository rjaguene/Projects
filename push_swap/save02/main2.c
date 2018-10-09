/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 20:45:16 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/01 18:08:19 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/include/ft_printf.h"
#include "include/push_swap.h"


typedef struct			s_intlist
{
	intmax_t			data;
	struct s_intlist	*next;
}						t_intlist;


t_intlist		*ft_new_intlist(intmax_t data)
{
	t_intlist *temp;

	if (!(temp = malloc(sizeof(temp))))
		return (NULL);
	temp->data = data;
	temp->next = NULL;
	return (temp);
}

void			ft_put_intlist(t_intlist *noeud)
{
	ft_printf("%ld\n", noeud->data);
}

void			ft_put_list_intlist(t_intlist *noeud)
{
	while (noeud)
	{
		ft_printf("%ld\n", noeud->data);
		noeud = noeud->next;
	}
}

int				ft_size_intlist(t_intlist *liste)
{
	int ret;

	ret = 0;
	while (liste)
	{
		ret++;
		liste = liste->next;
	}
	return (ret);
}


int main(int argc, char **argv)
{
	t_intlist *head;
	t_intlist *noeud_1;
	t_intlist *noeud_2;


	ft_printf("size  = %d\n",ft_size_intlist(head));
	ft_printf("/************ affichage de chaque noeuds ******************/\n");

	noeud_1 = ft_new_intlist(1);
	ft_put_intlist(noeud_1);

	noeud_2 = ft_new_intlist(2);
	ft_put_intlist(noeud_2);

	ft_printf("/******** fin de affichage de chaque noeuds ***************/\n");

	ft_printf("/************ affichage de la liste des noeuds ************/\n");

	head = noeud_1;
	ft_put_list_intlist(head);
	
	ft_printf("/***** affichage de la liste apres avoir relie les noeuds **/\n");

	noeud_1->next = noeud_2;
	ft_put_list_intlist(head);

	ft_printf("/******** fin de affichage de la liste des noeuds *********/\n");
	ft_printf("size = %d\n",ft_size_intlist(head));

	return 0;
}

