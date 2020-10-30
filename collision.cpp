#include"float2.h"
#include"rect_area.h"
#include"collision.h"

bool collision(
    struct FLOAT2* ap, struct RECT_AREA* ar, 
    struct FLOAT2* bp, struct RECT_AREA* br
) {
    float aLeft = ap->x + ar->x;
    float aRight = aLeft + ar->w;
    float aTop = ap->y + ar->y;
    float aBottom = aTop + ar->h;
    float bLeft = bp->x + br->x;
    float bRight = bLeft + br->w;
    float bTop = bp->y + br->y;
    float bBottom = bTop + br->h;
    return !(
        aRight < bLeft || bRight < aLeft ||
        aBottom < bTop || bBottom < aTop);
}