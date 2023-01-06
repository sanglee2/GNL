/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:00:09 by sanglee2          #+#    #+#             */
/*   Updated: 2023/01/06 16:53:14 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

typedef struct s_get_next_line
{
	int						fd;
	char					*storage;
	struct s_get_next_line	*prev;
	struct s_get_next_line	*next;
}	t_list;

char	*get_next_line(int fd);
t_list	*ft_lstnew(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_free(char **ret, t_list **lst_fd, ssize_t output, t_list **lst);
void	all_free(t_list **lst, char **ret);

#endif
