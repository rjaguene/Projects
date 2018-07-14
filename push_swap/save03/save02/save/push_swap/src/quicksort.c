/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:33:42 by rojaguen          #+#    #+#             */
/*   Updated: 2018/06/06 17:04:43 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void echanger(int v[], int i, int j)
{
	int temp;
	temp=v[i];
	v[i]=v[j];
	v[j]=temp;
	int a = 0;
/*	while (v[a])
	{
		ft_printf("%d",v[a]);
		a++;
	}
	ft_printf("\n\n");*/
}

void triRapide(int v[], int gauche, int droit)
{
	int i; 
	int dernier;
//	void echanger(int v[], int i, int j);
	if(gauche >= droit)
		return;
	echanger(v,gauche,(gauche+droit)/2); /* i */
	/*place l'élément du centre en v[0] */
	dernier = gauche;
//	for(i=gauche+1;i<=droit;i++)
	i = gauche + 1;
	while (i <= droit)
	{
		if (v[i]<v[gauche])
			echanger(v,++dernier,i);
		i++;
	}
	echanger(v,gauche,dernier);
	/* remet en place l'élément de partage */
	triRapide(v,gauche,dernier-1);
//	printf("lol");
	triRapide(v,dernier+1,droit);
}

int		*quicksort(int *v, a_list *a_lst)
{
	triRapide(v,0,list_count(a_lst) - 1);
	return (v);
}
