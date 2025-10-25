/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:59:15 by fsitter           #+#    #+#             */
/*   Updated: 2025/10/25 10:03:59 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 369
# endif

# include <fcntl.h>
# include <stdio.h> //delete later
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

#endif