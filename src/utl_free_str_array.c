/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utl_free_str_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jatan <jatan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:18:44 by jatan             #+#    #+#             */
/*   Updated: 2022/04/17 16:13:30 by jatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_str_array(char **str)
{
	char	**tmp;

	tmp = str;
	while (tmp && *tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(str);
}
