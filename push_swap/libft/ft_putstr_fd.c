/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:22:58 by agardett          #+#    #+#             */
/*   Updated: 2022/05/08 16:14:25 by agardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	j;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
	{
		j = write(fd, (s + i), 1);
	}
	(void)j;
}
