system: clean ioQuadrilateral.o main.o libCalcQuadrilateral.o
	gcc main.o ioQuadrilateral.o libCalcQuadrilateral.o -lm -o run
	rm -rf *.o
	./run 

main.o: main.c
	gcc -c main.c -o main.o -lm

ioQuadrilateral.o: ioQuadrilateral.c
	gcc -c ioQuadrilateral.c -o ioQuadrilateral.o -lm

libCalcQuadrilateral.o: libCalcQuadrilateral.c
	gcc -c libCalcQuadrilateral.c -o libCalcQuadrilateral.o -lm

clean:
	rm -rf *.o
