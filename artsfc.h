#ifndef __SFC_H__
#define __SFC_H__

#include <iof.h>

#ifdef __cplusplus
extern "C" {
#endif

#define	SLAB		0
#define MORTON		1
#define HILBERT		2

#define SLAB_DIM	0

#define rollLeft(x,y,mask) ((x<<y) | (x>>(nDim-y))) & mask
#define rollRight(x,y,mask) ((x>>y) | (x<<(nDim-y))) & mask

void init_sfc(ART_SFC_INFO *);
int sfc_index(ART_SFC_INFO, int *);
void sfc_coords(ART_SFC_INFO, int, int *);

#ifdef __cplusplus
}
#endif

#endif
