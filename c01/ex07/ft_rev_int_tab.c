/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 21:35:50 by vazra             #+#    #+#             */
/*   Updated: 2020/09/10 10:33:35 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int k;

	i = 0;
	while (i < size - 1)
	{
		k = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = k;
		size--;
		i++;
	}
}
