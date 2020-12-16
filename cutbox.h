#ifndef CUTBOX_H
#define CUTBOX_H
#include <figurageometrica.h>
#include <sculptor.h>

/**
 * @brief The CutBox class Corta um conjunto de voxels em formato de Cubo
 * @param x0 indica o ínicio da localização do box na coordenada x
 * @param x1 indica o final da localização no box na coordenada x
 * @param y0 indica o ínicio da localização do box na coordenada y
 * @param y1 indica o final da localização no box na coordenada y
 * @param z0 indica o ínicio da localização do box na coordenada z
 * @param z1 indica o final da localização no box na coordenada z
 */
class CutBox: public FiguraGeometrica{
protected:
    int x0, x1, y0, y1, z0, z1;
public:
    CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1);
    virtual ~CutBox();
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
