/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negetive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmugwab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:58:38 by anmugwab          #+#    #+#             */
/*   Updated: 2020/07/10 08:18:58 by anmugwab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_is_negetive(int n){
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');

	ft_putchar('\n');
}