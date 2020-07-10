/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:40:32 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/10 15:44:13 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = 48;
	second = 48;
	third = 48;

	while (first <= 57)
	{
		while (second <= 57)
		{
			while (third <= 57)
			{
				if (first < second && second < third)
				{
					ft_putchar(first);
					ft_putchar(second);
					ft_putchar(third);

					if (first < 55)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					else
						ft_putchar('\n');
					
				}
				third++;
			}
			third = 0;
			second++;
		}
		second = 0;
		first++;
	}

}
