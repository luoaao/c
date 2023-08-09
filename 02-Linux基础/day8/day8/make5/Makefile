CC = gcc
TARGET ?= APP
OBJS = ./src/file1.o ./src/file2.o ./src/main.o
FLAGS = -c -o

$(TARGET) : $(OBJS)
	@$(CC) $(OBJS) -o $@
%.o : %.c #%是通配符号
	@$(CC) $(FLAGS) $@ $< -I ./include
clean:
	rm $(OBJS) $(TARGET)
