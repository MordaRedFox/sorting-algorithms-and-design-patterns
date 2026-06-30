#include <iostream>
#include <memory>
#include <utility>
#include <clocale>
#include "EmailMessage.h"
#include "SmsMessage.h"
#include "ProxyCipher.h"

int main()
{
    std::setlocale(LC_ALL, ".UTF-8");
    std::cout << "Демонстрация паттерна \"Заместитель\" (Proxy)"
        << std::endl << std::endl;
    // Создание Email-сообщения и оборачивание его в прокси
    auto email{ std::make_unique<EmailMessage>(
        "Важное уведомление", "Встреча в 15:00") };
    ProxyCipher proxyEmail(std::move(email));
    std::cout << "--- Отправка Email через прокси ---" << std::endl << std::endl;
    proxyEmail.sendMessage();
    std::cout << std::endl;
    proxyEmail.sendMessageWithTitle();
    std::cout << std::endl;
    // Создание SMS-сообщения и оборачивание его в прокси
    auto sms{ std::make_unique<SmsMessage>(
        "Код подтверждения", "Ваш код: 1234", 16) };
    ProxyCipher proxySms(std::move(sms));
    std::cout << "-- Отправка SMS через прокси ---" << std::endl << std::endl;
    proxySms.sendMessage();
    std::cout << std::endl;
    proxySms.sendMessageWithTitle();
    std::cout << std::endl;
    // Прямая отправка без прокси (шифрование не применяется)
    std::cout << "--- Прямая отправка Email без прокси ---"
        << std::endl << std::endl;
    EmailMessage directEmail("Без прокси", "Это сообщение не шифруется");
    directEmail.sendMessage();
    std::cout << std::endl;
    directEmail.sendMessageWithTitle();
    return 0;
}
