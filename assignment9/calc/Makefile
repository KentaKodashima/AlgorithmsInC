# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* By: Giada, Natsumi, Kenta            */
# /*                                      */
# /* ************************************ */

all: calc.o putstr.o atoi.o putnbr.o

calc: calc.o ./includes/libex6.h
	gcc -o calc calc.o vc_putstr.o vc_atoi.o vc_putnbr.o

calc.o: calc.c ./includes/libex6.h
	gcc -c calc.c

putstr.o: ./src/vc_putstr.c ./includes/libex6.h
	gcc -c ./src/vc_putstr.c

atoi.o: ./src/vc_atoi.c ./includes/libex6.h
	gcc -c ./src/vc_atoi.c

putnbr.o: ./src/vc_putnbr.c ./includes/libex6.h
	gcc -c ./src/vc_putnbr.c

clean:
	rm -f *.o

fclean:
	rm -f *.o *.exe

re: clean
	make