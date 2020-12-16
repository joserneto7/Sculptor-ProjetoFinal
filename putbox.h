#ifndef PUTBOX_H
#define PUTBOX_H
#include <figurageometrica.h>
#include <sculptor.h>

/**
 * @brief putBox Cria um cubo a partir de um conjunto de voxels dentro da matriz 3d
 * @param x0 valor inicial de coordenada x
 * @param x1 valor final da coordenada x
 * @param y0 valor inicial da coordenada y
 * @param y1 valor final da coordenada y
 * @param z0 valor inicial da coordenada z
 * @param z1 valor final da coordenada z
 */

class PutBox: public FiguraGeometrica {
protected:
    int x0, x1, y0, y1, z0, z1;
    float r,g,b,a;
public:
    PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a);
    virtual ~PutBox();
    void draw(Sculptor &t);
};

#endif // PUTBOX_H
