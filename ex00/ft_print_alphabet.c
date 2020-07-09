/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 08:27:50 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/09 11:58:52 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// commented out as it s not required in the solution
/*void ft_putchar(char c)
{
	
	write(1, &c, 1);
}*/



void ft_print_alphabet()
{
	char c;

	for (char c = 'a' ; c <= 'z'; c++){
		ft_putchar(c);
	}

	ft_putchar('\n');

}

//commented out as it is not required in the solution
/*int main()
{
	ft_print_alphabet();
	return (0);
}*/
