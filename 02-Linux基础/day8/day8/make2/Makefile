app:file1.o file2.o main.o
	gcc file1.o file2.o main.o -o app
file1.o:file1.c
	gcc -c file1.c -o file1.o
file2.o:file2.c
	gcc -c file2.c -o file2.o
main.o:main.c
	gcc -c main.c -o main.o
clean:
	rm *.o app
