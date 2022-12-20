kbloop: kbhit.o main.o
		gcc -o kbloop kbhit.o main.o

kbhit.o: kbhit.h kbhit.c
		gcc -c kbhit.c

main.o: main.c
		gcc -c main.c

clean:
		rm -f *.o kbloop