/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:11:01 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/10 09:32:47 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb2(void)
{
	char first;
	char second;
	char third;
	char fourth;

	first = '0';
	second = '0';
	third = '0';
	fourth = '0';

	while (first <= '9')
	{
		while (second <= '9')
		{
			while (third <= '9')
			{
				while (fourth <= '9')
				{
					if (first < third)
					{
						ft_putchar(first);
						ft_putchar(second);
						ft_putchar(' ');
						ft_putchar(third);
						ft_putchar(fourth);
						ft_putchar(',');
						ft_putchar(' ');
					}

					fouth++;
				}
				fourth = 0;
				third++;

			}
			third = 0;
			second++;
		}
		second = 0;
		first++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
