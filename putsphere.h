#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>
/**
 * @brief The putsphere class Adiciona uma esfera dentro da matriz que contém a figura
 * @param xcenter indica o centro da esfera na coordenada x do plano
 * @param ycenter indica o centro da esfera na coordenada y do plano
 * @param zcenter indica o centro da esfera na coordenada z do plano
 */
class putsphere: public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, radius;
    float r, g, b, a;
public:
    putsphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float r, float g, float b, float a);
    virtual ~putsphere();
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
