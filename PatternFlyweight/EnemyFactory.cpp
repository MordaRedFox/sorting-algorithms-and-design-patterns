#include <memory>
#include <stdexcept>
#include <string>
#include "EnemyFactory.h"
#include "IEnemy.h"
#include "Skeleton.h"
#include "Orc.h"

std::shared_ptr<IEnemy> EnemyFactory::getEnemy(const std::string& type)
{
    auto it{ pool_.find(type) };
    // Если существует - возвращаем
    if (it != pool_.end())
        return it->second;
    // Создаем, если не существует
    std::shared_ptr<IEnemy> enemy;
    if (type == "Skeleton")
        enemy = std::make_shared<Skeleton>();
    else if (type == "Orc")
        enemy = std::make_shared<Orc>();
    else
        throw std::invalid_argument("Неизвестный тип врага: " + type);
    pool_.emplace(type, enemy);
    return enemy;
}
