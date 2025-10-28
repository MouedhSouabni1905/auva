auva: test.o lists.o
			gcc -o auva test.o lists.o

test.o: test.c
			gcc -c test.c

lists.o: lists.c
			gcc -c lists.c

clean:
			rm *.o
			rm auva
