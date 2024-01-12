#include "mlx/mlx.h"
#include <unistd.h>
#include <stdlib.h>

// 이미지의 정보를 나타내는 변수를 저장한 구조체
typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
} t_data;

typedef struct s_vars {
	void	*mlx;
	void	*win;
	t_data	image;
} t_vars;

//esc key press event
int key_hook(int keycode, t_vars *vars)
{
	if(keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	return (0);
}

int main()
{
	void *mlx_ptr;
	void *win_ptr; //생성할 윈도우 가리키는 포인터

	t_data image;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "miniRT_test");
	image.img = mlx_new_image(mlx_ptr, 500, 500); //이미지 객체(?) 생성
	image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, &image.line_length, &image.endian); //이미지 주소 할당?
	
	for (int i = 0; i < 500; i++)
	{
		for (int j = 0; j < 500; j++)
			mlx_pixel_put(mlx_ptr, win_ptr, i, j, 0x00FFFFF); //put pixel (which has color)
	}
	
	mlx_key_hook(win_ptr, key_hook, &image); //esc press key event
	mlx_loop(mlx_ptr); //loop 돌면서 event 기다리고 윈도우를 띄어서 rendering한다
	return (0);
}