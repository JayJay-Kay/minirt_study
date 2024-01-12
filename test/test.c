#include <unistd.h>
#include <stdio.h>
#include <mlx.h>

#include "print.h"
#include "scene.h"
#include "structures.h"
#include "trace.h"
#include "utils.h"

typedef struct s_data
{
	void 	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}		t_data;

typedef struct	s_vars {
	void		*mlx;
	void		*win;
	t_data		image;
}				t_vars;

// esc key press event
int	key_hook(int keycode, t_vars *vars)
{
	if(keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int      canvas_width;
	int      canvas_height;
	t_color3    pixel_color;
	// t_scene     *scene;
	t_vars vars;
	t_data image;

	image = vars.image;

	canvas_width = 960;
	canvas_height = 640;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, canvas_width, canvas_height, "Hello miniRT!"); 
  image.img = mlx_new_image(vars.mlx, canvas_width, canvas_height); // 이미지 객체 생성
	image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, &image.line_length, &image.endian); // 이미지 주소 할당
	
	mlx_put_image_to_window(vars.mlx, vars.win, image.img, 0, 0);
	mlx_key_hook(vars.win, key_hook, &vars); // esc key press event
	mlx_loop(vars.mlx);

	return (0);
}