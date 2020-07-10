/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:11:01 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/10 12:18:14 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
					else if  ((first == third && second < fourth) || (second == fourth && first < third))
					{
						
						ft_putchar(first);
						ft_putchar(second);
						ft_putchar(' ');
						ft_putchar(third);
						ft_putchar(fourth);	
					    if ( first == '9' && second == '8' && third == '9' && fourth == '9')
						{	
				     	    ft_putchar('\n');
						}
						else
						{
							ft_putchar(',');
							ft_putchar(' ');
						}

						
							
						
					}
						
							

					fourth++;
				}
				fourth = '0';
				third++;

			}
			third = '0';
			second++;
		}
		second = '0';
		first++;
	}

	ft_putchar('\n');


}
