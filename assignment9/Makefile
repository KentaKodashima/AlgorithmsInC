# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* By: Giada, Natsumi, Kenta            */
# /*                                      */
# /* ************************************ */

all: main.o putstr.o strcmp.o strlen.o swap.o

main: main.o ./includes/libvc.h
	gcc -o program main.o vc_putstr.o vc_strcmp.o vc_strlen.o vc_swap.o

main.o: main.c ./includes/libvc.h
	gcc -c main.c

putstr.o: ./src/vc_putstr.c ./includes/libvc.h
	gcc -c ./src/vc_putstr.c

strcmp.o: ./src/vc_strcmp.c ./includes/libvc.h
	gcc -c ./src/vc_strcmp.c

strlen.o: ./src/vc_strlen.c ./includes/libvc.h
	gcc -c ./src/vc_strlen.c

swap.o: ./src/vc_swap.c ./includes/libvc.h
	gcc -c ./src/vc_swap.c

clean:
	rm -f *.o

fclean:
	rm -f *.o *.exe

re: clean
	make