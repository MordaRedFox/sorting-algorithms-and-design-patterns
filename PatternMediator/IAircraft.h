#pragma once
#include <memory>
#include <string>

class IAirTrafficControl;

/// <summary>
/// Интерфейс воздушного судна (коллеги), которое взаимодействует с другими
/// через диспетчерскую вышку
/// </summary>
class IAircraft
{
public:
    IAircraft() = default;
    virtual ~IAircraft() = default;
    IAircraft(const IAircraft&) = delete;
    IAircraft& operator=(const IAircraft&) = delete;
    IAircraft(IAircraft&&) = default;
    IAircraft& operator=(IAircraft&&) = default;

    /// <summary>
    /// Устанавливает диспетчерскую вышку для данного судна
    /// </summary>
    virtual void setControlTower(std::shared_ptr<IAirTrafficControl> tower) = 0;

    /// <summary>
    /// Отправляет сообщение через диспетчерскую вышку
    /// </summary>
    virtual void send(const std::string& message) = 0;

    /// <summary>
    /// Получает сообщение от диспетчерской вышки
    /// </summary>
    virtual void receive(const std::string& message) = 0;
};
