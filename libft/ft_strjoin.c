/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <iouhssei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:39:01 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/23 13:19:33 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	else if (!s1 && !s2)
		return (ft_strdup(""));
	
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		new_str[j] = s2[i];
		j++;
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}
int main()
{
	char *s = ft_strjoin(NULL, NULL);
	printf("%s\n", s);
}