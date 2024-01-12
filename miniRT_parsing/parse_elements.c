#include "minirt.h"

void	parse_ambient(t_scene *scene, char **tokens)
{
	if (tokens == NULL || tokens[1] == NULL || tokens[2] == NULL
		|| tokens[3] != NULL)
		print_error("invalid ambiant info");
	if (scene->ambient.count != 0)
		print_error("more than one ambient info");
	scene->ambient.count++;
	scene->ambient.ratio = ft_atod(tokens[1]);
	if (scene->ambient.ratio < 0 || scene->ambient.ratio > 1) //range error check
		print_error("enter ambien lighting ratio in range [0.0,1.0]");
	scene->ambient.color = get_color(tokens[2]);
}

void	parse_camera(t_scene *scene, char **tokens)
{
	if (!tokens || !tokens[1] || !tokens[2] || !tokens[3] || tokens[4])
		print_error("invalid camera !");
	if (scene->camera.count != 0)
		print_error("too many camera");
	scene->camera.count++;
	scene->camera.coord = get_vec(tokens[1]);
	scene->camera.dir = get_vec(tokens[2]);
	if (scene->camera.dir.x > 1 || scene->camera.dir.y > 1 || scene->camera.dir.z > 1
		|| scene->camera.dir.x < -1 || scene->camera.dir.y < -1 || scene->camera.dir.z < -1)
		print_error("invalid orientation camera");
	if (scene->camera.dir.x == 0 && scene->camera.dir.y == 0 && scene->camera.dir.z == 0) //direction can't have 0 vector (0 direction)
		print_error("invalid orientation camera");
	scene->camera.fov = ft_atod(tokens[3]);
	if (scene->camera.fov < 0 || scene->camera.fov > 180)
		print_error("invalid FOV range");
}

void	parse_light(t_scene *scene, char **tokens)
{
	t_light	*new_light;

	if (!tokens || !tokens[1] || !tokens[2] || !tokens[3] || tokens[4])
		print_error("invalid light !");
	new_light = malloc(sizeof(t_light));
	if (new_light == NULL)
		print_error("malloc failed\n");
	new_light->next = scene->light; //previous light becomes next one
	scene->light = new_light; // new light becomes the first/current one
	new_light->coord = get_vec(tokens[1]);
	new_light->brightness = ft_atod(tokens[2]);
	if (new_light->brightness < 0 || new_light->brightness > 1)
		print_error("invalid brightness range");
	new_light->color = get_color(tokens[3]);
}

void	parse_sphere(t_scene *scene, char **tokens)
{
	t_objs	*new_obj;

	if (tokens == NULL || tokens[1] == NULL || tokens[2] == NULL || tokens[3] == NULL || tokens[4] != NULL)
		print_error("invalid sphere");
	new_obj = malloc(sizeof(t_objs));
	if (new_obj == NULL)
		return ;
	new_obj->next = scene->objs;
	scene->objs = new_obj;
	new_obj->type = SP;
	new_obj->coord = get_vec(tokens[1]);
	new_obj->diameter.x = ft_atod(tokens[2]);
	if (new_obj->diameter.x <= 0)
		print_error("invalid diameter sphere");
	new_obj->color = get_color(tokens[3]);
}