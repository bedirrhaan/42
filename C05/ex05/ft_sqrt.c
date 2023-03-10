/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bcopoglu <Bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:33:41 by Bcopoglu          #+#    #+#             */
/*   Updated: 2023/02/20 23:34:40 by Bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
