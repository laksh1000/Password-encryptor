CC=g++
file=Encryptor.cpp

all: build exec

test: 
	$(CC) test.cpp
	make exec

build: 
	$(CC) $(file)

exec:
	./a.out

clean:
	rm -rf *.out