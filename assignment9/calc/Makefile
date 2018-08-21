# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* By: Giada, Natsumi, Kenta            */
# /*                                      */
# /* ************************************ */

all: calc.o calc

calc: calc.o ./src/libex6.a
	gcc -o calc calc.o ./src/libex6.a

calc.o: calc.c ./includes/libex6.h
	gcc -c calc.c

clean:
	rm -f *.o

fclean:
	rm -f *.o calc

re: clean
	make