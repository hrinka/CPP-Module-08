CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = span_test

all: $(TARGET)

$(TARGET): main.o Span.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o Span.o

main.o: main.cpp Span.hpp
	$(CC) $(CFLAGS) -c main.cpp

Span.o: Span.cpp Span.hpp
	$(CC) $(CFLAGS) -c Span.cpp

clean:
	rm -f *.o $(TARGET)

re: clean all
