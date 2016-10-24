/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 14:50:47 by tmohlala          #+#    #+#             */
/*   Updated: 2016/08/01 12:17:22 by tmohlala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	void			*ptr;

	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	while (*csrc && n >= 1)
	{
		*cdst = *csrc;
		if (*cdst == (unsigned char)c)
		{
			ptr = (void*)cdst;
			return (++ptr);
		}
		cdst++;
		csrc++;
		n--;
	}
	*cdst = '\0';
	return (NULL);
}
