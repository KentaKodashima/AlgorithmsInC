/* ************************************ */
/*                                      */
/* vc_param_to_tab.h                    */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#ifndef _VC_STOCK_H
#define _VC_STOCK_H

typedef struct s_stock
{
 int size_param;
 char *str;
 char *copy;
 char **words;
} t_stock;

#endif