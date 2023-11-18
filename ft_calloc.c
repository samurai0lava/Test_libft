/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <iouhssei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:53:30 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/17 22:00:11 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	size_allocated;
	void	*space_allocated;
	size_t	size_max;

	size_max = 18446744073709551615lu;
	if (nmemb > 0 && size_max / nmemb < size)
	{
		return (NULL);
	}
	size_allocated = nmemb * size;
	space_allocated = malloc(size_allocated);
	if (space_allocated != NULL)
	{
		ft_memset(space_allocated, 0, size_allocated);
	}
	return (space_allocated);
}
