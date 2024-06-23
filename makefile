FLAGS=-ggdb -Wextra -Wall

test:
	# # cc -c src/teriminal.c -o build/teriminal.o 
	# cc build/* -o build/example 
	cc -I./src -o build/example tests/example.c
	./build/example
