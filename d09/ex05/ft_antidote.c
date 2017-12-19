/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:28:30 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/13 22:44:14 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (((i > j) && (i < k)) || ((i > k) && (i < j)))
		return (i);
	if (((j > i) && (j < k)) || ((j < i) && (j > k)))
		return (j);
	return (k);
}