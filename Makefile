all:	
	gcc -L ../mlx -lmlx -framework OpenGL -framework AppKit main.c -o main
	./test_load.out

clean: 
	rm -rf *.out
