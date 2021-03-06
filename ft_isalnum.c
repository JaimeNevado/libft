/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:07:54 by jnevado-          #+#    #+#             */
/*   Updated: 2022/04/25 17:53:17 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int n)
{
	int	c;

	c = 0;
	if ((n <= '9' && n >= '0') || (n <= 'Z' && n >= 'A')
		|| (n >= 'a' && n <= 'z'))
		c = 1;
	return (c);
}
