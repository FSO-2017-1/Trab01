system: clean  argsVerify.o libIO.o
	gcc argsVerify.o libIO.o  -lm -o run
	rm -rf *.o

main.o: argsVerify.c
	gcc -c argsVerify.c -o argsVerify.o -lm

libIO.o: libIO.c
	gcc -c libIO.c -o libIO.o -lm

clean:
	rm -rf *.o
