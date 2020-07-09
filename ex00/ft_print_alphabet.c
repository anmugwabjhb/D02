/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:27:50 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/09 15:51:43 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet()
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


