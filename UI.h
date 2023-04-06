//
// Created by el traficante on 4/4/2023.
//

#ifndef OOP_A45_BERET_BENJAMIN_UI_H
#define OOP_A45_BERET_BENJAMIN_UI_H
#include "Bussines.h"
class Console{
private:
    Controller ctrl ;
public:
    Console( const Controller& controller ): ctrl{controller} {}
    void run();
    void run_admin();
    void run_user();
};
#endif //OOP_A45_BERET_BENJAMIN_UI_H
