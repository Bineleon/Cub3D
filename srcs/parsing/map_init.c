/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:35:15 by elilliu           #+#    #+#             */
/*   Updated: 2025/03/13 15:28:13 by neleon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

int	fill_tab(t_data *data)
{
	int		i;
	int		fd;
	char	*line;

	fd = open(data->map_path, O_RDONLY);
	if (fd < 0)
		print_clean(data, "Opening map path");
	line = NULL;
	i = 0;
	while (i < data->map.rows)
	{
		line = get_next_line(fd, 0);
		data->map.tab[i] = gc_strdup(line);
		free(line);
		i++;
	}
	data->map.tab[i] = NULL;
	clean_map_reading(line, fd);
	return (1);
}
