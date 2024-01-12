#include "minirt.h"

t_vec3	get_vec(char *s)
{
	char	**params;
	t_vec3	coord;

	params = ft_split(s, ','); // split to each x,y,z axis
	if (params == NULL || params[1] == NULL || params[2] == NULL || params[3] != NULL) //error check
		print_error("invalid coordinates");

	coord.x = ft_atod(params[0]);
	coord.y = ft_atod(params[1]);
	coord.z = ft_atod(params[2]);

	ft_freeall(params);
	return (coord);
}

t_vec3	get_color(char *str)
{
	char **params; // Declare a pointer to a pointer to char, for storing split strings.
	t_color3 ambient_rgb; // Declare a t_color3 structure for storing the RGB color components.
	params = ft_split(str, ','); // Split the input string 's' by commas and store the result in 'params'.

	// Check if the split operation was successful and if there are exactly three components.
	if (params == NULL || params[1] == NULL || params[2] == NULL || params[3] != NULL)
		print_error("invalid R,G,B color info"); // If not, throw an error for invalid color.

	// Convert the split string components to integers and assign them to the t_vec3 structure 'ambient_rgb'.
	ambient_rgb.x = ft_atoi(params[0]);
	ambient_rgb.y = ft_atoi(params[1]);
	ambient_rgb.z = ft_atoi(params[2]);

	// Check if any of the color components are greater than 255 or negative, which is the maximum value for an RGB color component.
	if (ambient_rgb.x > 255 || ambient_rgb.y > 255 || ambient_rgb.z > 255 
		|| ambient_rgb.x < 0 || ambient_rgb.y < 0 || ambient_rgb.z < 0)
		print_error("invalid color"); // If so, throw an error for invalid color.

	ft_freeall(params); // Free the memory allocated by ft_split.
	return (ambient_rgb); // Return the t_vec structure containing the RGB color components.
}

void	parse_line(char	*info, char **tokens, t_scene *scene)
{
	if (info[0] == 'A' && info[1] == '\0')
		parse_ambient(scene, tokens);
	else if (info[0] == 'C' && info[1] == '\0')
		parse_camera(scene, tokens);
	else if (info[0] == 'L' && info[1] == '\0')
		parse_light(scene, tokens);
	else if (info[0] == 's' && info[1] == 'p' && info[2] == '\0')
		parse_sphere(scene, tokens);
	// else if (info[0] == 'p' && info[1] == 'l' && info[2] == '\0')
	// 	parse_plane(scene, tokens);
	// else if (info[0] == 'c' && info[1] == 'y' && info[2] == '\0')
	// 	parse_cylinder(scene, tokens);
	// else if (info[0] == 'c' && info[1] == 'o' && info[2] == '\0')
	// 	parse_cone(scene, tokens);
	else
		print_error("invalid element");
}

void	parse(t_scene *scene, int fd)
{
	char	**tokens;

	while (1)
	{
		tokens = ft_split(get_next_line(fd), ' ');
		if (tokens == NULL)
			break ;
		if (*tokens != NULL) //check if it is non-empty
			parse_line(*tokens, tokens, scene);
		ft_freeall(tokens);
	}
	close(fd);
}
