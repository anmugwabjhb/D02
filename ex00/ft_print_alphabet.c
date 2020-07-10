/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:27:50 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/10 08:33:34 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_alphabet(void)
{
	char begin;
	char end;

	begin = 'a';
	end = 'z';

	while(begin <= end){

		ft_putchar(begin);
		begin++;
	}

	ft_putchar('\n');

}


