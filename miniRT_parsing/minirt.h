/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:29:40 by jungjkim          #+#    #+#             */
/*   Updated: 2024/01/13 01:00:28 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include "libft/libft.h"
# include "libft/get_next_line/get_next_line.h"
# include "structures.h"
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# define SP 1

void	print_error(char *str_err);
t_vec3	get_color(char *str);
t_vec3	get_vec(char *s);
double	ft_atod(const char *str);
void	parse(t_scene *scene, int fd);
void	parse_ambient(t_scene *scene, char **tokens);
void	parse_camera(t_scene *scene, char **tokens);
void	parse_light(t_scene *scene, char **tokens);
void	parse_sphere(t_scene *scene, char **tokens);

#endif