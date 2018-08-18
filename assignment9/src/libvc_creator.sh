# /* ************************************ */
# /*                                      */
# /* libvc_creator.sh                     */
# /*                                      */
# /* By: Giada, Natsumi, Kenta            */
# /*                                      */
# /* ************************************ */

gcc -c vc_putstr.c vc_strcmp.c vc_strlen.c vc_swap.c
ar -cvq libvc.a vc_putstr.o vc_strcmp.o vc_strlen.o vc_swap.o