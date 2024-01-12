/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungjkim <jungjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:00:33 by jungjkim          #+#    #+#             */
/*   Updated: 2024/01/13 01:00:10 by jungjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_vec3 t_color3;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	t_data	image;
}	t_vars;

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}	t_vec3;

typedef struct s_amb
{
	t_vec3	color;
	double	ratio;
	int		count;
}	t_amb;

typedef struct s_cam
{
	t_vec3	coord;
	t_vec3	dir;
	double	fov;
	int		count;
}	t_cam;

typedef struct s_light
{
	t_vec3			coord;
	double			brightness;
	t_vec3			color;
	struct s_light	*next;
}	t_light;

typedef struct s_objs
{
	int				type;
	t_vec3			coord;
	t_vec3			diameter;
	t_vec3			color;
	struct s_objs	*next;
}	t_objs;

typedef struct s_scene
{
	t_amb	ambient;
	t_cam	camera;
	t_light	*light;
	t_objs	*objs;
}	t_scene;

#endif