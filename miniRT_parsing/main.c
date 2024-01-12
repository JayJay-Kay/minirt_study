#include "minirt.h"

int	check_file(int argc, char **argv)
{
	int	i;
	int	fd;

	fd = 0;
	if (argc != 2)
		return (1);
	i = ft_strlen(argv[1]);
	if (i <= 3)
		return (1);
	if (argv[1][i - 3] == '.' && argv[1][i - 2] == 'r' && argv[1][i - 1] == 't')
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (1);
		close(fd);
	}
	else
		return (1);
	return (0);
}

void	print_error(char *str_err)
{
	printf("Error: %s\n", str_err);
	exit(1);
}

t_scene	*init_scene(void)
{
	t_scene	*scene;

	scene = malloc(sizeof(t_scene));
	if (scene == NULL)
		print_error("can't initialize scene");
	scene->ambient.count = 0; //to check later
	scene->camera.count = 0; //to check later
	scene->light = NULL;
	scene->objs = NULL;
	return (scene);
}

// void print_objs(t_objs *objs) //for obj testing
// {
//     int count = 0;
//     while (objs)
//     {
//         printf("Object %d:\n", ++count);
//         printf("  Type: %d\n", objs->type);
//         printf("  Coordinates: (%.2f, %.2f, %.2f)\n", objs->coord.x, objs->coord.y, objs->coord.z);
//         printf("  Diameter: (%.2f, %.2f, %.2f)\n", objs->diameter.x, objs->diameter.y, objs->diameter.z);
//         printf("  Color: (%.2f, %.2f, %.2f)\n", objs->color.x, objs->color.y, objs->color.z);
//         objs = objs->next;
//     }
// }

int	main(int argc, char **argv)
{
	t_scene	*scene;
	int		fd;

	if (check_file(argc, argv) == 1)
		print_error("Input map file");
	fd = open(argv[1], O_RDONLY);
	scene = init_scene();
	parse(scene, fd);
	// printf("input check: %f\n", scene->camera.fov);
	// print_objs(scene->objs);
	return (0);
}
