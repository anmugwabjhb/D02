/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:34:26 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/10 08:22:23 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_numbers(void)
{

	char count;
	
	count = 48;
	

	while(count <= 57)
	{
		ft_putchar(count);
		count++;
	}

	ft_putchar('\n');

}
