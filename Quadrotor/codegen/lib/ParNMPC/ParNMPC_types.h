/*
 * File: ParNMPC_types.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 21-Jan-2018 02:13:18
 */

#ifndef PARNMPC_TYPES_H
#define PARNMPC_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#include <stdio.h>
#ifndef typedef_ParNMPCTLS
#define typedef_ParNMPCTLS

typedef struct {
  struct {
    double rec_x[9009];
    double rec_u[8000];
  } f0;
} ParNMPCTLS;

#endif                                 /*typedef_ParNMPCTLS*/
#endif

/*
 * File trailer for ParNMPC_types.h
 *
 * [EOF]
 */