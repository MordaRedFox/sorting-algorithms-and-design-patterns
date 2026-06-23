#include <string>
#include <memory>
#include "ICarPrototype.h"
#include "MercedesGelandewagen.h"

MercedesGelandewagen::MercedesGelandewagen() :
    engine("V8"),
    horsepower(269),
    color("Темно-синий"),
    salonSheathing("Эко-кожа"),
    brand("Mercedes"),
    model("Gelandewagen"),
    price(45000)
{}

std::unique_ptr<ICarPrototype> MercedesGelandewagen::clone() const
{
    return std::make_unique<MercedesGelandewagen>(*this);
}

std::string MercedesGelandewagen::getBrand() const { return brand; }
std::string MercedesGelandewagen::getModel() const { return model; }
std::string MercedesGelandewagen::getColor() const { return color; }
unsigned int MercedesGelandewagen::getPrice() const { return price; }

void MercedesGelandewagen::setColor(const std::string& newColor) { color = newColor; }
void MercedesGelandewagen::setPrice(unsigned int newPrice) { price = newPrice; }
