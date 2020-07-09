/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:19:44 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/09 12:57:14 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//commented out
/*
void ft_putchar(char c){
	write(1,&c,1);
}*/

void ft_print_reverse_alphabet(){
	
	char c;
	for(c = 'z'; c >= 'a'; c--){
		ft_putchar(c);
	}

	ft_putchar('\n');
}

//commented out
/*

int main()
{
	ft_print_reverse_alphabet();
	return (0);
}*/
