#include <iostream>
#include <memory>
#include <clocale>
#include "Light.h"
#include "RemoteControl.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "LightDimCommand.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Команда\"" << std::endl << std::endl;
    Light light;
    RemoteControl remote;
    // Включение света
    std::cout << "1. Включаем свет:" << std::endl;
    auto onCommand{ std::make_shared<LightOnCommand>(light) };
    remote.setCommand(onCommand);
    remote.pressButton();
    std::cout << "  Состояние: isOn = " << light.getIsOn() << ", яркость = "
        << light.getBrightness() << " %" << std::endl << std::endl;
    // Установка яркости 50%
    std::cout << "2. Устанавливаем яркость 50%:" << std::endl;
    auto dimCommand{ std::make_shared<LightDimCommand>(light, 50) };
    remote.setCommand(dimCommand);
    remote.pressButton();
    std::cout << "  Состояние: isOn = " << light.getIsOn() << ", яркость = "
        << light.getBrightness() << " %" << std::endl << std::endl;
    // Выключение света
    std::cout << "3. Выключаем свет:" << std::endl;
    auto offCommand{ std::make_shared<LightOffCommand>(light) };
    remote.setCommand(offCommand);
    remote.pressButton();
    std::cout << "  Состояние: isOn = " << light.getIsOn() << ", яркость = "
        << light.getBrightness() << " %" << std::endl << std::endl;
    // Отмена последней команды
    std::cout << "4. Отменяем последнюю команду (Undo):" << std::endl;
    remote.pressUndo();
    std::cout << "  Состояние: isOn = " << light.getIsOn() << ", яркость = "
        << light.getBrightness() << " %" << std::endl << std::endl;
    // Отмена команды Dim
    std::cout << "5. Отменяем еще одну команду (Undo):" << std::endl;
    remote.pressUndo();
    std::cout << "  Состояние: isOn = " << light.getIsOn() << ", яркость = "
        << light.getBrightness() << " %" << std::endl << std::endl;
    // Отмена команды включения
    std::cout << "6. Отменяем еще одну команду (Undo):" << std::endl;
    remote.pressUndo();
    std::cout << "  Состояние: isOn = " << light.getIsOn() << ", яркость = "
        << light.getBrightness() << " %" << std::endl << std::endl;
    // Попытка отмены при пустой истории
    std::cout << "7. Попытка отменить при пустой истории:" << std::endl;
    remote.pressUndo();
    std::cout << std::endl;
    return 0;
}
