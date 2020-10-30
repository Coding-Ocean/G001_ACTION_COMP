#pragma once
struct RECT_AREA {
    //rect offset x
    float x=0;
    //rect offset y
    float y=0;
    //rect width
    float w=0;
    //rect height
    float h=0;
};
void drawRectArea(struct FLOAT2* p, struct RECT_AREA* r);
