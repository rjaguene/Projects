/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ant.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:46:39 by rojaguen          #+#    #+#             */
/*   Updated: 2018/09/18 17:38:59 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

#include <stdio.h>

int        *init(int *path, int tmp, int *b)
{
    int i;
    int a;

    i = 0;
    a = 0;
    while (path[a] != -1)
        a++;
    *b = a;
    a--;
    while (a >= i)
    {
        tmp = path[i];
        path[i] = path[a];
        path[a] = tmp;
        i++;
        a--;
    }
    a = 0;
    printf("\n");
     while (path[a - 3] != -1)
     {
       printf("%d ",path[a]);
        a++;
     }
    return (path);
}

void            print(t_env *env, int *path, t_link *lst)
{
    int i;
    t_link *ls;
    t_link *tmp;
    i = 0;

    ls = NULL;
    tmp = lst;
    while (lst)
    {
        tmp = new_link(0,0);
        ls = add_link_front(ls, tmp);
        tmp = NULL;
        lst = lst->next;    
    }
    while (lst)
    {
        if (lst->visit == 1)
        {
            ft_putchar('L');
            ft_putnbr(lst->id_ant);
            ft_putchar('-');
            ft_putstr(lst->name);
            ft_putchar(' ');
        }
        lst = lst->next;
        i++;
    }
    ft_putchar('\n');
}

void		   print_ants(t_env *env, int *path)
{
	int         i;
	int         a;
	int         ants;
    char         *tab;
    int         turn;
    t_link      *lst;
    t_link      *tmp;
    t_link      *save;
    int         *tab_tmp;

    tmp = NULL;
    lst = NULL;
    save = NULL;
    turn = 0;
	a = 1;
	i = 0;
    ants  = 1;
	//ants = env->total_ants;
    path = init(path, 0, &i);
    printf("i = %d\n",ants);
    /*tmp = new_link(0, 
        node_getname_byid(GRAPH.lst_nodes, path[0]));
        lst = add_link_end(lst, tmp);
        lst->visit = 1;
        tmp = NULL;*/
    while (path[a] != -1)
    {
        tmp = new_link(0, 
        node_getname_byid(GRAPH.lst_nodes, path[a]));
        lst = add_link_end(lst, tmp);
        tmp = NULL;
        a++;
    }
    tmp = lst;
    //tmp->visit = 1; 
    while (tmp)
    {
     //   printf("ant nb = %d  ",tmp->id);
        printf("\nvisited : %d %s\n",tmp->visit, tmp->name);    
        tmp = tmp->next;
    }  
    tmp = lst;
//    print(env, path, lst);
    i = 0;
    while (ants < env->total_ants + 1)
    {
        if (tmp->visit == 0)
        {
            tmp->visit = 1;
            tmp->id_ant = ants;
           // print(env, path, lst);
            //tmp = tmp->next;
        }
        while (tmp)
        {
            while (tmp->next && tmp->visit == 1 && tmp->next->visit == 1)
            {
                save = tmp;
                tmp = tmp->next;
                i = 1;
            }
            if (i == 1)
            { 
               // printf("lol");
                if (tmp->next)
                {
                    tmp->next->visit = 1;
                    tmp->next->id_ant = tmp->id_ant;
                    save->next->id_ant = save->id_ant;
                    save->visit = 0;
                    tmp = lst;
                }                
            }
            if (tmp->next && tmp->visit == 1 && tmp->next->visit == 0 && i == 0)
            {
                tmp->next->id_ant = tmp->id_ant;
                tmp->next->visit = 1;
                tmp->visit = 0;
            }
            if (!tmp->next && tmp->visit == 1 && i == 0)
            {
               // tmp->visit = 0;
            }
             i = 0;
            if (tmp->next && i == 1)
                tmp = tmp->next;
            else
                break; 
               
        }
        print(env, path, lst);
        //break;
        tmp = lst;
        ants++;
    }     
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    while (ants < env->total_ants + 1)
    {
        if (tmp->visit == 0)
        {
            tmp->visit = 1;
            tmp->id_ant = ants;
            print(env, path, lst);
            //tmp = tmp->next;
        }
        while (tmp)
        {
            if (tmp->next && tmp->visit == 1 && tmp->next->visit == 1)
            {
                save = tmp;
                i = 1;
            }
            if (tmp->next && tmp->visit == 1 && tmp->next->visit == 0)
            {
                tmp->visit = 0;
                tmp->next->visit = 1;
                tmp->next->id_ant = tmp->id_ant;
                if (tmp->next->next && i == 0)
                    tmp = tmp->next->next;
                else if (!tmp->next->next && i == 0)
                    break ;
                if (i == 1)
                {
                    tmp = save;
                    i = 0;
                }
            }
            if (tmp->next)
              tmp = tmp->next;
            else if (!tmp->next && tmp->visit == 1)
            {
                tmp->visit = 0;
                tmp->id_ant = 0;
                break;
            }
            else 
                break;
        }
        print(env, path, lst);
        tmp = lst;
        ants++;
    }     
}
    
    
    
    
    
    
    
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*while (a < env->total_ants + 1)
    {
        tmp = new_link(a);
        lst = add_link_end(lst, tmp);
        a++;
        tmp = NULL;
    }    
    tmp = lst;*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*while (lst)
    {
        printf("ant nb : %d",lst->ant);
        printf(" -> id room : %d\n",lst->id_room);

        lst = lst->next;
    }
    lst = tmp;
    while (lst)
    {
        if (lst->ant)        
    }
}    
    
   
    */
    
    
    
    
    
    
    /*
    
    
    
    tab = malloc(sizeof(char *) * env->total_ants + 1);




























    ft_bzero(tab, sizeof(tab));
    a = 0;
    while (a < env->total_ants)
    {
        tab[a] = '0';
        a++;
    }
    tab[a] = 0;
    a = 0;
    printf("\npath = ");
    while (path[a] != -1)
    {
        printf("%d ",path[a]);
        a++;
    }
    i = 1;
    a = 0;
    printf("tab = ");
    printf("%s\n",tab);
    while (tab[0] == '1')
    {
        while (tab[i])
        {
            if (tab[i + 1] && tab[i] == 1 && tab[i + 1] == 0)
            {
                tab[i] = 0;
                tab[i + 1] = 1;
            }
            
        }
        print(tab, path);
    }
}


*/
























    
    /*while (path[a] != -1)
    {
        tmp = new_link(0, 
        node_getname_byid(GRAPH.lst_nodes, path[a]));
        lst = add_link_end(lst, tmp);
        tmp = NULL;
        a++;
    }
    tmp = lst; 
    while (tmp)
    {
     //   printf("ant nb = %d  ",tmp->id);
        printf("\nvisited : %d %s\n",tmp->ant, tmp->name);
        tmp = tmp->next;
    }
    tmp = lst;
    tab_tmp = tab;
    tmp->id = 1;
    tmp->ant = 1;

    print(tmp);
    tmp = lst;
    while (ants--)
    {
        while (tmp)
        {
            if (tmp->next && tmp->next->id == 0 && tmp->id == 1)
            { // si fourmis casse actuel mais pas de ant en nxt
                tmp->next->id = 1;
                tmp->id = 0;
            }
            if (tmp->id == 1 && !(tmp->next))
            {
                tmp->id = 0;
            } 
            tmp = tmp->next;
        }
        print(lst);
        tmp = lst;
    }
}
   */
   /* while (ants <= env->total_ants)
    {
        while (tab[i])
        {
            if (tab[i] == '0' && tab[i - 1] == '1')
            {
                ft_putchar('L');
                ft_putnbr(ants);
                ft_putchar('-');
                ft_putstr(node_getname_byid(GRAPH.lst_nodes, path[i]));
                tab[i] = '1';
                i++;
                turn = 1;
            }
            
            //ft_putchar(' ');
            if (tab[i] == '1' && tab[i + 1] && tab[i + 1] == '0')
            {
                ft_putchar('L');
                ft_putnbr(ants);
                ft_putchar('-');
                ft_putstr(node_getname_byid(GRAPH.lst_nodes, path[i]));
                tab[i] = '0';
                tab[i + 1] = '1';
                i++;
            }
            if (!tab[i + 1] && turn == 0)
            {
                ft_putchar(' ');
                ft_putchar('L');
                ft_putnbr(ants - 1);
                ft_putchar('-');
                ft_putstr(node_getname_byid(GRAPH.lst_nodes, path[i]));
                tab[i] = '0';
                //tab[i + 1] = '1';
                //i++;
            }
            ft_putchar(' ');
            i++; 
        }
        turn = 0;
        //printf("tab = %s\n",tab);
        ants++;
        ft_putchar('\n');
        i = 1;
    }
    free(tab);
}
*/    
    /*while (ants--)	
	{
		while (path[i] != -1)
			i++;
		i -= 2;
		while (path[i + 1] != GRAPH.id_end)
		{
			ft_putstr("\x1b[32mL");
			ft_putnbr(a);
			ft_putstr("\x1b[0m-");
			ft_putstr(node_getname_byid(GRAPH.lst_nodes, path[i]));
			ft_putchar(' ');
			i--;
		}
		a++;
		i = 0;
		ft_putchar('\n');
	}
}*/