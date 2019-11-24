#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class CheesePizza : public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory *factory);
    void prepare() override;
protected:
    PizzaIngredientFactory *factory;
};

#endif // CHEESEPIZZA_H