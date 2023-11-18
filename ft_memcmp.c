/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <iouhssei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:41:29 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/18 17:06:39 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s;
	const unsigned char	*d;
	size_t				i;

	i = 0;
	s = (const unsigned char *)s1;
	d = (const unsigned char *)s2;
	while (i < n)
	{
		if (s[i] != d[i])
			return (s[i] - d[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(){

	const char *p = NULL;
	const char *q = NULL;
	printf("%d\n",memcmp(p, q, 1));
}
*/
