/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:19:44 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/09 16:28:37 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_reverse_alphabet(){
	
	char begin;
	char end;

	begin = 'z';
	end = 'a';

	while(begin >= end){
		ft_putchar(begin);
		begin--;
	}

	ft_putchar('\n');
}
