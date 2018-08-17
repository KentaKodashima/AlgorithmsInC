/* ************************************ */
/*                                      */
/* vc_point.h                           */  
/*                                      */
/* By: Charles, Emre A, Kenta           */
/*                                      */
/* ************************************ */

#ifndef _VC_POINT_H
#define _VC_POINT_H

typedef struct point
{
  int x;
  int y;
  struct point *next;
} t_point;

#endif