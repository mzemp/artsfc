#ifndef __SFC_H__
#define __SFC_H__

#ifdef __cplusplus
extern "C" {
#endif

#define	SLAB		0
#define MORTON		1
#define HILBERT		2

#define SLAB_DIM	0

typedef struct sfc_info {

    int nDim;
    int num_grid;
    int sfc_order;
    int nBitsPerDim;
    int nBits;
    int max_sfc_index;
    } SFC_INFO;

#define rollLeft(x,y,mask) ((x<<y) | (x>>(nDim-y))) & mask
#define rollRight(x,y,mask) ((x>>y) | (x<<(nDim-y))) & mask

void init_sfc(SFC_INFO (*));
int sfc_index(SFC_INFO, int (*));
void sfc_coords(SFC_INFO, int, int (*));

#ifdef __cplusplus
}
#endif

#endif
