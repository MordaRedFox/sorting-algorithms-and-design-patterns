#include <iostream>
#include <clocale>
#include <memory>
#include "Message.h"
#include "LoggingHandler.h"
#include "LengthLimitHandler.h"
#include "EncryptionHandler.h"
#include "CompressionHandler.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Цепочка обязанностей\""
        << std::endl << std::endl;
    // Создание обработчиков
    auto logger{ std::make_shared<LoggingHandler>() };
    auto lengthLimiter{ std::make_shared<LengthLimitHandler>(50) };
    auto encryptor{ std::make_shared<EncryptionHandler>() };
    auto compressor{ std::make_shared<CompressionHandler>() };
    // Построение цепочки: логирование - ограничение длины - шифрование - сжатие
    logger->setNext(lengthLimiter);
    lengthLimiter->setNext(encryptor);
    encryptor->setNext(compressor);
    // Создание сообщения с длинным текстом
    Message msg("Важное уведомление",
        "Это очень длинное сообщение, которое должно быть обработано "
        "цепочкой обязанностей. Оно содержит много лишней информации, "
        "которая может быть обрезана, зашифрована и сжата");
    std::cout << "--- Исходное сообщение ---" << std::endl;
    std::cout << "Заголовок: " << msg.title << std::endl;
    std::cout << "Тело: " << msg.body << std::endl << std::endl;
    // Запуск цепочки обязанностей
    std::cout << "--- Запуск цепочки обработчиков ---" << std::endl;
    logger->handle(msg);
    std::cout << std::endl << "--- Сообщение после обработки ---" << std::endl;
    std::cout << "Заголовок: " << msg.title << std::endl;
    std::cout << "Тело: " << msg.body << std::endl;
    return 0;
}
