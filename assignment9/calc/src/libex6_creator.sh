# /* ************************************ */
# /*                                      */
# /* libvc_creator.sh                     */
# /*                                      */
# /* By: Giada, Natsumi, Kenta            */
# /*                                      */
# /* ************************************ */

gcc -c vc_putstr.c vc_atoi.c vc_putnbr.c
ar -cvq libex6.a vc_putstr.o vc_atoi.o vc_putnbr.o
rm -f *.o