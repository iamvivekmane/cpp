#ifndef SHAPEFACTORY_
#define SHAPEFACTORY_
#include "../include/Shape.h"
class shape_factory
{
public:
    static Shape *get_instance(int choice);
    static int menu_list(void);
};
#endif /*SHAPEFACTORY_*/
