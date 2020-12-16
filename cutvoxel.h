#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include <figurageometrica.h>
#include <sculptor.h>

/**
 * @brief The cutvoxel class exclui uma unidade de voxel determinada pelo usuário
 * @param x determina a localização do voxel na coordenada x
 * @param y determina a localização do voxel na coordenada y
 * @param z determina a localização do voxel na coordenada z
 */

class cutvoxel: public FiguraGeometrica{
protected:
    int x, y, z;
public:
    cutvoxel(int _x, int _y, int _z);
    virtual ~cutvoxel();
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
