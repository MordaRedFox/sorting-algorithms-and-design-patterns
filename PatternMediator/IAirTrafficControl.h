#pragma once
#include <string>

class IAircraft;

/// <summary>
/// Интерфейс диспетчерской службы (посредника), управляющей взаимодействием
/// между воздушными судами
/// </summary>
class IAirTrafficControl
{
public:
    IAirTrafficControl() = default;
    virtual ~IAirTrafficControl() = default;
    IAirTrafficControl(const IAirTrafficControl&) = delete;
    IAirTrafficControl& operator=(const IAirTrafficControl&) = delete;
    IAirTrafficControl(IAirTrafficControl&&) = default;
    IAirTrafficControl& operator=(IAirTrafficControl&&) = default;

    /// <summary>
    /// Передаёт сообщение от одного воздушного судна другому (или всем)
    /// через диспетчерскую вышку
    /// </summary>
    virtual void sendMessage(const std::string& message, IAircraft* sender) = 0;
};
