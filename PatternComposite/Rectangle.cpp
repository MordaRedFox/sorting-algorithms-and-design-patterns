#include <iostream>
#include <memory>
#include <string>
#include "Rectangle.h"
#include "IShape.h"

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

void Rectangle::add(std::shared_ptr<IShape> child)
{
    std::cout << "Ошибка: нельзя добавить компонент к листовому элементу "
        << "(Прямоугольник)" << std::endl;
}

void Rectangle::remove(size_t index)
{
    std::cout << "Ошибка: нельзя удалить компонент из листового элемента "
        << "(Прямоугольник)" << std::endl;
}

std::shared_ptr<IShape> Rectangle::getChild(size_t index) const
{
    std::cout << "Ошибка: листовой элемент не имеет дочерних компонентов "
        << "(Прямоугольник)" << std::endl;
    return nullptr;
}

void Rectangle::showInfo(size_t indent) const
{
    std::cout << std::string(indent, ' ') << " Прямоугольник (ширина = "
        << width << ", высота = " << height << ")" << std::endl;
}
