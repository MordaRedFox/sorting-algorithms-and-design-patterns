#include <iostream>
#include <memory>
#include <string>
#include "Circle.h"
#include "IShape.h"

Circle::Circle(double radius) : radius(radius) {}

void Circle::add(std::shared_ptr<IShape> child)
{
    std::cout << "Ошибка: нельзя добавить компонент к листовому элементу "
        << "(Круг)" << std::endl;
}

void Circle::remove(size_t index)
{
    std::cout << "Ошибка: нельзя удалить компонент из листового элемента "
        << "(Круг)" << std::endl;
}

std::shared_ptr<IShape> Circle::getChild(size_t index) const
{
    std::cout << "Ошибка: листовой элемент не имеет дочерних компонентов "
        << "(Круг)" << std::endl;
    return nullptr;
}

void Circle::showInfo(size_t indent) const
{
    std::cout << std::string(indent, ' ') << " Круг (радиус = " << radius
        << ")" << std::endl;
}
