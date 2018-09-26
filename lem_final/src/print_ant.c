/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ant.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojaguen <rojaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:46:39 by rojaguen          #+#    #+#             */
/*   Updated: 2018/09/26 17:35:48 by rojaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

#include <stdio.h>

static int         get_max(t_link *lst)
{
    int i;

    i = 0;
    while (lst->next)
    {
        i++;
        lst = lst->next;
    }
    return (i--);
}

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

void            print(int *path, t_link *lst)
{
    int i;
    t_link *ls;
    t_link *tmp;
    i = 0;
    int a;

    a = 0;
    ls = NULL;
    tmp = lst;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    i--;
    tmp = lst;
    /*while (tmp)
    {
        if (tmp->visit == 1)
        {
            ft_putchar('L');
            ft_putnbr(tmp->id_ant);
            ft_putchar('-');
            ft_putstr(tmp->name);
            ft_putchar(' ');
        }
        tmp = tmp->next;
    } 
    ft_putchar('\n');
    return ;*/
    
    while (i >= 0)
    {
        while (a != i)
        {
            //if (tmp->next)
             tmp = tmp->next;
            a++;
        }
        if (a == i)
        {
            if (tmp->visit == 1)
            {
                ft_putchar('L');
                ft_putnbr(tmp->id_ant);
                ft_putchar('-');
                ft_putstr(tmp->name);
                ft_putchar(' ');
            }
            i--;
            a = 0;
            tmp = lst;
        }
        //a++;
    }
    ft_putchar('\n');
}

   /* while (i)
    {
        if (a == i)
        {
            if (lst->visit == 1)
            {
                ft_putchar('L');
                ft_putnbr(lst->id_ant);
                ft_putchar('-');
                ft_putstr(lst->name);
                ft_putchar(' ');
            }
            i--;
            a = 0;
            lst = tmp;
        }
        a++;
        if (lst->next)
            lst = lst->next;
        else 
            lst = tmp;
    }
    ft_putchar('\n');*/


void  rec(t_link *lst, t_link *tmp, int *path, int ants)
{
    while (tmp->visit == 1)
    {
        if (tmp->next && tmp->next->visit == 0 && tmp->next->next->visit == 0)
        {
            tmp->visit = 0;
            tmp->next->visit = 1;
            tmp->next->id_ant = tmp->id_ant;
           // print()
        }
        tmp = tmp->next;
    }
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
        tmp = new_link(a - 1, 
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
        printf("\nid = %d visited : %d %s\n", tmp->id_room, tmp->visit, tmp->name);    
        tmp = tmp->next;
    }  
    tmp = lst;
    //    print(env, path, lst);
    i = 0;
    a = 0;
    //tmp->visit = 1;
    tmp->id_ant = ants;
    tmp->visit = 1;
    printf("first room  = %s\n",tmp->name);

    ants++;
   i = get_max(lst);
   printf("ihh = %d\n", i);
    //print(env, path,tmp );
    // tmp = tmp->next;
    //i = 1;
    print(path,lst);


    while (ants < env->total_ants + 1)
    {
        while (i >= 0)
        {
            while (a != i)
            {
                printf("a= %d i= %d\n",a ,i);
                if (tmp->next)
                    tmp = tmp->next;
                a++;
            }
            if (tmp && tmp->next && tmp->visit == 1)
            {
                if (tmp->next)
                {
                    tmp->visit = 0;
                    tmp->next->visit = 1;
                    tmp->next->id_ant = tmp->id_ant;
                }
            }
            a++;
            i--;
        }
        i = get_max(lst);
        tmp = lst;
        tmp->id_ant = ants++;
        a = 0;
        print(path, lst);
    }
}


    /*
    while (ants < env->total_ants + 1)
    {
        while (tmp)
        {
            if (tmp->next && tmp->next->next)
            {
                if (tmp->visit == 1 && tmp->next->visit == 0)
                {
                    tmp->visit = 0;
                    tmp->next->visit = 1;
                    tmp->next->id_ant = tmp->id_ant;
                }
                else if (!tmp->next->next)
                {
                    if (tmp->visit == 1 && tmp->next->visit == 0)
                    {
                        tmp->visit = 0;
                        tmp->next->visit = 1;
                        tmp->next->id_ant = tmp->id_ant;
                    }
                }
            }
            tmp = tmp->next;
        }

        tmp = lst;
        if (tmp->id_room == 0 && tmp->visit == 0)
        {
            tmp->visit = 1;
            tmp->id_ant = ants--; 
        }
        print(path, lst);
        exit (0);
    }




}


*/

    /*while (ants < env->total_ants + 2)
    {
        if (tmp->id_room == 0)
        {
            tmp->id_ant = ant;
            tmp->visit = 1;
            tmp = tmp->next;
        }
        if (tmp->next && tmp->visit == 1 && tmp->next->visit == 0) // 1 0
        {
            tmp->next->visit = 1;
            tmp->next->id_ant = tmp->id_ant;
            tmp->visit = 0;
            tmp = lst;
            
            while (tmp->visit == 0 && tmp->next->visit == 1) // 0 1
            {
                
                else 
                {

                }
            }
        }
       ants++;
       print(env,path,lst);

    }   
        
        
      */  
        
        
        





















        
        
        
        
        
        
        
        
        
 /*       
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        if (tmp->visit == 0)
        {
            //printf("---\n");
            tmp->visit = 1;
            tmp->id_ant = ants;
            i = 1;
            //print(env, path, lst);
            //tmp = tmp->next;
        }
        while (tmp)
        {
            while (tmp->next && tmp->visit == 1 && tmp->next->visit == 1)
            {
                //print(env, path,lst );
                //exit(0);
                save = tmp;
                tmp = tmp->next;
                i = 1;
            }
            if (i == 1 && tmp->visit != 1)
            { 
               // printf("lol");
                if (tmp->next)
                {
                    tmp = lst;
        
                    tmp->next->visit = 1;
                    tmp->next->id_ant = tmp->id_ant;
                    save->next->id_ant = save->id_ant;
                    save->visit = 0;
                   // tmp = lst;
                }                
            }
            if (tmp->next && tmp->visit == 1 && tmp->next->visit == 0 && i == 0)
            {
                tmp->next->id_ant = tmp->id_ant;
                tmp->next->visit = 1;
                tmp->visit = 0;
            }
            if (!tmp->next && tmp->visit == 1) //&& i == 0)
            {
                tmp->visit = 0;
            }
             i = 0;
            if (tmp->next && i == 1)
                tmp = tmp->next;
            else
                break;    
        }
        print(env, path, lst);
        tmp = lst;
        ants++;
    }
        
}
    
    
    
    
    
   */ 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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