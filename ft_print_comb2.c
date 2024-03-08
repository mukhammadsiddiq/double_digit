/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:51:31 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/08 16:25:38 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	save_number(short n);

void	ft_print_comb2(void)
{
	short	group[2];
	short	comma_flag;

	comma_flag = 0;
	group[0] = 0;
	while (++group[0] < 99)
	{
		group[1] = group[0] + 1;
		while (++group[1] <= 99)
		{
			if (comma_flag)
			{
				write(1, ", ", 2);
			}
			save_number(group[0]);
			write(1, " ", 1);
			save_number(group[1]);
			if (group[0] == 98 && group[1] == 99)
			{
				write(1, "\n", 1);
			}
			comma_flag = 1;
		}
	}
}

void	save_number(short n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write (1, "0", 1);
		write (1, &c, 1);
		return ;
	}
	c = n / 10 + 48;
	write (1, &c, 1);
	c = (n % 10) + 48;
	write(1, &c, 1);
}
