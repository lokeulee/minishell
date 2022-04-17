/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jatan <jatan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:46:54 by leu-lee           #+#    #+#             */
/*   Updated: 2022/04/17 15:17:50 by jatan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minishell.h"

int	ft_exit(char **args, t_data *data)
{
	int	i;

	(void)data;
	if (args[1] && args[2] == NULL)
	{
		i = 0;
		while (args[1][i] != 0 && ft_isdigit(args[1][i]) == 1)
			i++;
		if ((int)ft_strlen(args[1]) == i)
			exit(ft_atoi(args[1]));
		else
			perror("exit : numeric argument required");
	}
	else
		perror("exit too many arguments");
	return (0);
}
