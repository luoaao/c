CC = gcc
TARGET = app
OBJS = file1.o file2.o main.o
FLAGS = -c -o

$(TARGET):$(OBJS)
	$(CC) $^ -o $@
file1.o:file1.c
	$(CC) $(FLAGS) $@ $<
file2.o:file2.c
	$(CC) $(FLAGS) $@ $<
main.o:main.c
	$(CC) $(FLAGS) $@ $<
clean:
	rm $(OBJS) $(TARGET)
