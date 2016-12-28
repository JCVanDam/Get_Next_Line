/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:24:24 by maxpetit          #+#    #+#             */
/*   Updated: 2016/05/26 21:00:06 by maxpetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/includes/libft.h"
# define BUFF_SIZE 1
# define START 0
# define STR_LIST list->content
# define LINE_FEED ft_checkback(STR_LIST, &i) != 0
# define CUT_STR ft_strsub(STR_LIST, i + 1, ft_strlen(STR_LIST) - (i + 1))
# define RECOVER_PART_STR ft_strsub(STR_LIST, START, i)
# define RECOVER_ALL_STR ft_strsub(STR_LIST, START, ft_strlen(STR_LIST))

int		get_next_line(int const fd, char **line);
size_t	ft_checkback(char *str, int *i);
int		ft_belong_list(t_list **list, int fd, char *buff, int ret);
void	ft_create_elem(int const fd, char *buff, t_list **list);
int		ft_rm_elem(t_list **list);

#endif
