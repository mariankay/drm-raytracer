#include "color.h"

Color c_add(Color *c1, Color *c2) {
    Color result = {
        .r = c1->r + c2->r,
        .g = c1->g + c2->g,
        .b = c1->b + c2->b,
    };
    return result;
}

Color c_add_s(Color *c1, float scalar) {
    Color result = {
        .r = c1->r + scalar,
        .g = c1->g + scalar,
        .b = c1->b + scalar,
    };
    return result;
}

Color c_mul(Color *c1, Color *c2) {
    Color result = {
        .r = c1->r * c2->r,
        .g = c1->g * c2->g,
        .b = c1->b * c2->b,
    };
    return result;
}

Color c_mul_s(Color *c1, float scalar) {
    Color result = {
        .r = c1->r * scalar,
        .g = c1->g * scalar,
        .b = c1->b * scalar,
    };
    return result;
}

void clamp(Color *c) {
    if (c->r < 0.0)
        c->r = 0.0;
    if (c->g < 0.0)
        c->g = 0.0;
    if (c->b < 0.0)
        c->b = 0.0;

    if (c->r > 1.0)
        c->r = 1.0;
    if (c->g > 1.0)
        c->g = 1.0;
    if (c->b > 1.0)
        c->b = 1.0;
}
