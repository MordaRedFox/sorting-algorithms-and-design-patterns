#include <string>
#include <memory>
#include "CarPrototype.h"
#include "ToyotaCamry.h"

ToyotaCamry::ToyotaCamry():
    engine("2.5 L 4-cylinder"),
    horsepower(203),
    color("Серебристый"),
    salonSheathing("Ткань"),
    brand("Toyota"),
    model("Camry"),
    price(28000)
{}

std::unique_ptr<CarPrototype> ToyotaCamry::clone() const
{
    return std::make_unique<ToyotaCamry>(*this);
}

std::string ToyotaCamry::getBrand() const { return brand; }
std::string ToyotaCamry::getModel() const { return model; }
std::string ToyotaCamry::getColor() const { return color; }
unsigned int ToyotaCamry::getPrice() const { return price; }

void ToyotaCamry::setColor(const std::string& newColor) { color = newColor; }
void ToyotaCamry::setPrice(unsigned int newPrice) { price = newPrice; }
