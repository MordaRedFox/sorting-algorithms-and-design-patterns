#include <iostream>
#include <memory>
#include <string>
#include "Group.h"
#include "IShape.h"

void Group::add(std::shared_ptr<IShape> child)
{
    if (child) children.push_back(child);
}

void Group::remove(size_t index)
{
    if (index < children.size())
        children.erase(children.begin() + index);
    else
        std::cout << "Ошибка: индекс выходит за пределы" << std::endl;
}

std::shared_ptr<IShape> Group::getChild(size_t index) const
{
    if (index < children.size())
        return children[index];
    std::cout << "Ошибка: индекс выходит за пределы" << std::endl;
    return nullptr;
}

void Group::showInfo(size_t indent) const
{
    std::cout << std::string(indent, ' ') << " Группа фигур:" << std::endl;
    for (const auto& child : children)
        child->showInfo(indent + 2);
}
