# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* By: Giada, Natsumi, Kenta            */
# /*                                      */
# /* ************************************ */

all: main.o

main: main.o ./src/libvc.a
	gcc -o program ./src/libvc.a main.o

main.o: main.c ./includes/libvc.h
	gcc -c main.c

clean:
	rm -f *.o

fclean:
	rm -f *.o program

re: clean
	make