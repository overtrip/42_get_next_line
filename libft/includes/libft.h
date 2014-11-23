/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealonso <jealonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 15:17:39 by jealonso          #+#    #+#             */
/*   Updated: 2014/11/23 15:17:41 by jealonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_memset(void *s, int c, size_t n);
char				*ft_strcat(char *dest, char *src);
char				*ft_strcpy(char *dest, char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *c);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strnew(size_t size);

#endif
