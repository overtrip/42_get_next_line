/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealonso <jealonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:30:01 by jealonso          #+#    #+#             */
/*   Updated: 2014/11/23 14:59:36 by jealonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (!size || !(ptr = malloc(size + 1)))
		return (ptr);
	ft_memset(ptr, 0, size);
	return (ptr);
}
