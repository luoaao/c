CC = gcc
TARGET ?= APP
OBJS = file1.o file2.o main.o
FLAGS = -c -o

$(TARGET) : $(OBJS)
	@$(CC) $(OBJS) -o $@
%.o : %.c #%是通配符号
	@$(CC) $(FLAGS) $@ $< 
clean:
	rm $(OBJS) $(TARGET)
