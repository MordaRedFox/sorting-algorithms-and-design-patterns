#pragma once
#include <memory>
#include "House.h"

/// <summary>
/// Интерфейс строителя (паттерн проектирования) дома
/// </summary>
class IHouseBuilder
{
public:
	IHouseBuilder() = default;
	virtual ~IHouseBuilder() = default;
	IHouseBuilder(const IHouseBuilder&) = delete;
	IHouseBuilder& operator=(const IHouseBuilder&) = delete;
	IHouseBuilder(IHouseBuilder&&) = default;
	IHouseBuilder& operator=(IHouseBuilder&&) = default;

	/// <summary>
	/// Абстрактный метод для построения стен в доме
	/// </summary>
	virtual void buildWalls() = 0;

	/// <summary>
	/// Абстрактный метод для построения дверей в доме
	/// </summary>
	virtual void buildDoors() = 0;

	/// <summary>
	/// Абстрактный метод для построения окон в доме
	/// </summary>
	virtual void buildWindows() = 0;

	/// <summary>
	/// Абстрактный метод для построения крыши в доме
	/// </summary>
	virtual void buildRoof() = 0;

	/// <summary>
	/// Абстрактный метод для построения гаража в доме
	/// </summary>
	virtual void buildGarage() = 0;

	/// <summary>
	/// Абстрактный метод для построения бассейна в доме
	/// </summary>
	virtual void buildSwimmingPool() = 0;

	/// <summary>
	/// Абстрактный метод для возвращения результата - готовый дом
	/// </summary>
	virtual std::unique_ptr<House> getResult() = 0;
};
