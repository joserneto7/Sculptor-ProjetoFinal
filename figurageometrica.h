#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <sculptor.h>

/**
 * @brief The FiguraGeometrica class indica a clase que abarca todas as figuras geométricas que poderão ser desenhadas.
 */
class FiguraGeometrica{
public:
    FiguraGeometrica();
    virtual ~FiguraGeometrica();
    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H
