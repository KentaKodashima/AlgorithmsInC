/* ************************************ */
/*                                      */
/* vc_boolean.h                         */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#ifndef _VC_BOOLEAN_H
#define _VC_BOOLEAN_H

#include <stdbool.h>
#include <unistd.h>

typedef bool t_bool;

#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define TRUE 1
#define FALSE 0
#define EVEN(n) ((((n > 1) && (n % 2)) == 0) ? true : false
#define SUCCESS 0

#endif