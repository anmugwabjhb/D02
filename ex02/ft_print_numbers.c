/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:34:26 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/09 16:54:43 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void){

	char count;
	char end;

	count = 48;
	end = 57;

	while(count <= end){
		ft_putchar(count);
		count++;
	}

	ft_putchar('\n');

}
