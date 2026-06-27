#pragma once
#include <memory>
#include <string>
#include <unordered_map>
#include "IEnemy.h"

/// <summary>
/// Фабрика легковесов - управляет созданием и разделением общих объектов
/// </summary>
class EnemyFactory
{
public:
    EnemyFactory() = default;
    ~EnemyFactory() = default;
    EnemyFactory(const EnemyFactory&) = delete;
    EnemyFactory& operator=(const EnemyFactory&) = delete;
    EnemyFactory(EnemyFactory&&) = default;
    EnemyFactory& operator=(EnemyFactory&&) = default;

    /// <summary>
    /// Получает (или создает) врага заданного типа
    /// </summary>
    std::shared_ptr<IEnemy> getEnemy(const std::string& type);

private:
    std::unordered_map<std::string, std::shared_ptr<IEnemy>> pool_;
};
