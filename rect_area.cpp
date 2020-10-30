#include"graphic.h"
#include"float2.h"
#include"rect_area.h"
void drawRectArea(struct FLOAT2* p, struct RECT_AREA* r) {
    rect(p->x + r->x, p->y + r->y, r->w, r->h);
}
