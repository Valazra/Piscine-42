/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vazra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:52:57 by vazra             #+#    #+#             */
/*   Updated: 2020/09/14 18:56:01 by vazra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


int main()
{
	int a = 5;
	int b = 4;
	int *c = &a;
	int *d = &b;

	printf("a = %d, b = %d\n", a, b);
	ft_swap(c,d);
	printf("a = %d, b = %d\n", a, b);
}
