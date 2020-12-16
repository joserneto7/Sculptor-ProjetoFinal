#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include <figurageometrica.h>
#include <sculptor.h>
#include <cmath>

/**
 * @brief The cutsphere class faz um corte de formato esférico na figura
 * @param xcenter determina o centro da esfera no eixo x
 * @param xcenter determina o centro da esfera no eixo y
 * @param xcenter determina o centro da esfera no eixo z
 */

class cutsphere: public FiguraGeometrica{
protected:
    int xcenter, ycenter, zcenter, radius;
public:
    cutsphere(int _xcenter, int _ycenter, int _zcenter, int _radius);
    virtual ~cutsphere();
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
