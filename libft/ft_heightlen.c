/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_heightlen.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ghazette <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/27 18:44:09 by ghazette     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/27 18:44:57 by ghazette    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_heightlen(char **data)
{
	int i;

	i = 0;
	while (data[i] != 0)
		i++;
	return (i);
}