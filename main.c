/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:29:01 by otuyishi          #+#    #+#             */
/*   Updated: 2023/04/25 18:50:57 by otuyishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h> 

int	main(void)
{
	int	fd;
	fd = open("./get_next_line/text.txt", O_RDONLY);
	// printf("%d", fd)
	// note that it is prefarably better to compare all the tests used by paco 42 students tester
	printf("%s", get_next_line(fd));
	return (0);
}
