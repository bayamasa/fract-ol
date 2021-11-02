#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int key_hook()
{
	printf("key_hook\n");
	return 0;
}

int	main()
{
	void *mlx_ptr;
	void *win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 800, 600, "mlx_new_window");
	mlx_key_hook(win_ptr, key_hook, 0);
	mlx_loop(mlx_ptr);	
	return (0);
}
