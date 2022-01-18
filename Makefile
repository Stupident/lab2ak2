CC = g++
CFLAGS = -c -Wall
OUT = output
OBJS = main.o calculator.o mylib.a


all: $(OBJS)
	$(CC) main.o calculator.o -o $(OUT)

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp

calculator.o: src/calculator.cpp
	$(CC) $(CFLAGS) src/calculator.cpp

mylib.a: calculator.cpp
	ar -rcs mylib.a calculator.o

clean:
	rm -rf *.o $(OUT)
