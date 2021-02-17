/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:46:13 by nainhaja          #+#    #+#             */
/*   Updated: 2019/11/06 23:53:30 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
struct node {
        char* BeforeEq;
        char* AfterEq;
        struct node* next;
    };
typedef struct node node_t;
node_t *head;
int g_fd;
char *g_red_buff;
int g_red_start;
int g_red;
char *path;
char **path2;
char	**ft_split(char const *s, char c);
int		get_next_line(int fds, char **line);
char	*ft_strdup(char *s);
char	*ft_substr(char *s, unsigned int start, unsigned int len);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
int key_press(int key, void *ptr);
char		*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, unsigned int len);
char *ft_checkDollar(char *str,char **env);
char *ft_RmSpace(char *s,int c);
char *ft_AddSpace(char *s,int i);
char *ft_BeforeEq(char *k);
char *ft_AfterEq(char *k);
char			**ft_split(char const *s, char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);



#endif