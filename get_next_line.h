/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayusa <ayusa@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:12:00 by ayusa             #+#    #+#             */
/*   Updated: 2025/05/12 17:43:56 by ayusa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

char	*read_until_nl_in_buf(int fd, char *last_str);
char	*get_nl_line(char *last_str);
char	*new_last_str(char *last_str);
char	*get_next_line(int fd);

int		ft_strlen(char	*s);
char	*ft_strjoin(char  *last_str, char *buf);
char	*ft_strchr(char *s, int c);

#endif
