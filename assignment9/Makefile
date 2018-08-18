# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* By: Giada, Natsumi, Kenta            */
# /*                                      */
# /* ************************************ */

# all

all: program

putstr: ./src/vc_putstr.o
	gcc -o program vc_putstr.o -L./src/ -lvc_putstr

putstr.o: ./src/vc_putstr.c ./includes/libvc.h
	gcc -c ./src/vc_putstr.c

strcmp: ./src/vc_strcmp.o
	gcc -o program ./src/vc_strcmp.o -L./src/ -lvc_strcmp

putstr.o: ./src/vc_strcmp.c ./includes/libvc.h
	gcc -c ./src/vc_strcmp.c

putstr: ./src/vc_strlen.o
	gcc -o program ./src/vc_strlen.o -L./src/ -lvc_strlen

putstr.o: ./src/vc_strlen.c ./includes/libvc.h
	gcc -c ./src/vc_strlen.c

putstr: ./src/vc_swap.o
	gcc -o program ./src/vc_swap.o -L./src/ -lvc_swap

putstr.o: ./src/vc_swap.c ./includes/libvc.h
	gcc -c ./src/vc_swap.c

clean:
	rm -f *.o

fclean:
	rm -f *.o *.exe

re:
	clean make