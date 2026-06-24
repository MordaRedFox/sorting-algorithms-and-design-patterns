#include <iostream>
#include <memory>
#include <clocale>
#include "Circle.h"
#include "Rectangle.h"
#include "Group.h"

int main() {
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Компоновщик\"" << std::endl
        << std::endl;
    // Создание листовых элементов
    auto circle1{ std::make_shared<Circle>(5.0) };
    auto circle2{ std::make_shared<Circle>(3.0) };
    auto rect1{ std::make_shared<Rectangle>(4.0, 6.0) };
    auto rect2{ std::make_shared<Rectangle>(2.0, 2.0) };
    // Создание групп и иерархии
    auto group1{ std::make_shared<Group>() };
    group1->add(circle1);
    group1->add(rect1);
    auto group2{ std::make_shared<Group>() };
    group2->add(circle2);
    group2->add(rect2);
    group2->add(group1);
    // Работа с деревом
    std::cout << "Иерархия фигур:" << std::endl;
    group2->showInfo();
    std::cout << std::endl << "Получение дочернего элемента:" << std::endl;
    auto child{ group2->getChild(1) };
    if (child) {
        std::cout << "Дочерний элемент (индекс 1):" << std::endl;
        child->showInfo(2);
    }
    std::cout << std::endl << "Удаление элемента из группы:" << std::endl;
    group2->remove(0);
    std::cout << "После удаления индекса 0:" << std::endl;
    group2->showInfo();
    std::cout << std::endl << "Попытка удалить несуществующий индекс:"
        << std::endl;
    group2->remove(10);
    std::cout << std::endl << "Ошибки при вызове методов листа:" << std::endl;
    circle1->add(std::make_shared<Circle>(1.0));
    circle1->remove(0);
    circle1->getChild(0);
    return 0;
}
