# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Target executable files
TARGET = memory_copy
TARGET_TEST = memory_copy_test

# Object files
OBJS = memory_copy.o main.o
OBJS_TEST = memory_copy.o memory_copy_test.o

# Defalut target
all: $(TARGET)

# Test target
test: $(TARGET_TEST)
	./$(TARGET_TEST)

# Rule to build the object file
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(TARGET_TEST): $(OBJS_TEST)
	$(CC) $(CFLAGS) -o $@ $^

$.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -f *.o $(TARGET) $(TARGET_TEST)

