obj=main.o bubble.o pub.o select.o insert.o
target=sort
CC=gcc -g -std=c99
all:$(target) clean
$(target):$(obj)
	$(CC) $(obj) -o $(target)
clean:
	rm *.o -rf
