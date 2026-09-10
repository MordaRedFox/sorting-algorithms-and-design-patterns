<div align="center">

# 🧠 Алгоритмы сортировки и Паттерны проектирования

### Учебный проект по изучению классических алгоритмов и архитектурных решений на C++

## Change language: [English](README.en.md)

[![C++](https://img.shields.io/badge/C%2B%2B-17%2B-00599C?logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Visual Studio](https://img.shields.io/badge/Visual%20Studio-2022-5C2D91?logo=visual-studio&logoColor=white)](https://visualstudio.microsoft.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)

</div>

---

## 📖 О проекте

<div align="justify">

Данный репозиторий представляет собой **коллекцию реализаций популярных алгоритмов сортировки и классических паттернов проектирования (GoF)**. Проект создан в образовательных целях для глубокого понимания внутреннего устройства алгоритмов, оценки их временной и пространственной сложности, а также для отработки навыков применения принципов SOLID и ООП в современном C++.

Каждый паттерн проектирования вынесен в отдельный проект (директорию), что позволяет изолированно изучать его структуру, преимущества и сценарии применения. Алгоритмы сортировки собраны в единый модуль для удобства сравнительного анализа их производительности.

</div>

---

## 🎯 Основные возможности

<div align="center">

<table>
    <tr>
        <td valign="top" width="50%">
            <h3 align="center">📊 Алгоритмы сортировки</h3>
            <p align="center">
                <img src="https://img.shields.io/badge/⚡-Быстрая%20сортировка-blue" alt="QuickSort">
                <img src="https://img.shields.io/badge/🔀-Сортировка%20слиянием-green" alt="MergeSort">
                <img src="https://img.shields.io/badge/🫧-Пузырьковая%20сортировка-orange" alt="BubbleSort">
            </p>
            <div style="text-align: left; margin-left: 20px;">
                <ul style="text-align: left; padding-left: 20px;">
                    <li>📈 Реализация классических алгоритмов сортировки</li>
                    <li>⏱️ Анализ временной сложности (Big O notation)</li>
                    <li>🧠 Различные подходы: разделяй и властвуй, обмен, вставка</li>
                    <li>🛠️ Шаблонные функции для работы с различными типами данных</li>
                </ul>
            </div>
        </td>
        <td valign="top" width="50%">
            <h3 align="center">🏗️ Паттерны проектирования</h3>
            <p align="center">
                <img src="https://img.shields.io/badge/🏭-Порождающие-purple" alt="Creational">
                <img src="https://img.shields.io/badge/🔌-Структурные-blue" alt="Structural">
                <img src="https://img.shields.io/badge/🎭-Поведенческие-red" alt="Behavioral">
            </p>
            <div style="text-align: left; margin-left: 20px;">
                <ul style="text-align: left; padding-left: 20px;">
                    <li>🏭 Полный набор порождающих паттернов (Фабрики, Строитель, Прототип)</li>
                    <li>🔌 Структурные паттерны (Адаптер, Мост, Компоновщик, Декоратор)</li>
                    <li>🎭 Поведенческие паттерны (Наблюдатель, Стратегия, Команда, Состояние)</li>
                    <li>📚 Наглядные примеры применения каждого паттерна</li>
                </ul>
            </div>
        </td>
    </tr>
</table>

</div>

---

## 🛠 Технологический стек

<div align="center">

<table>
    <tr align="center">
        <th>Компонент</th>
        <th>Версия</th>
        <th>Назначение</th>
        <th>Бейдж</th>
    </tr>
    <tr align="center">
        <td><strong>C++</strong></td>
        <td>17 / 20</td>
        <td>Основной язык программирования</td>
        <td><img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?logo=c%2B%2B&logoColor=white" alt="C++"></td>
    </tr>
    <tr align="center">
        <td><strong>STL</strong></td>
        <td>-</td>
        <td>Стандартная библиотека шаблонов</td>
        <td><img src="https://img.shields.io/badge/STL-Standard-00599C?logo=c%2B%2B&logoColor=white" alt="STL"></td>
    </tr>
    <tr align="center">
        <td><strong>Visual Studio</strong></td>
        <td>2022</td>
        <td>Среда разработки и сборки</td>
        <td><img src="https://img.shields.io/badge/Visual%20Studio-2022-5C2D91?logo=visual-studio&logoColor=white" alt="Visual Studio"></td>
    </tr>
    <tr align="center">
        <td><strong>MSVC</strong></td>
        <td>-</td>
        <td>Компилятор Microsoft Visual C++</td>
        <td><img src="https://img.shields.io/badge/MSVC-Compiler-5C2D91?logo=visual-studio&logoColor=white" alt="MSVC"></td>
    </tr>
</table>

</div>

---

## 📁 Структура проекта

```bash
sorting-algorithms-and-design-patterns/
├── PatternAbstractFactory/            # Реализация паттерна "Абстрактная фабрика"
├── PatternAdapter/                    # Реализация паттерна "Адаптер"
├── PatternBridge/                     # Реализация паттерна "Мост"
├── PatternBuilder/                    # Реализация паттерна "Строитель"
├── PatternChainOfResponsibility/      # Реализация паттерна "Цепочка обязанностей"
├── PatternCommand/                    # Реализация паттерна "Команда"
├── PatternComposite/                  # Реализация паттерна "Компоновщик"
├── PatternDecorator/                  # Реализация паттерна "Декоратор"
├── PatternFactoryMethod/              # Реализация паттерна "Фабричный метод"
├── PatternFlyweight/                  # Реализация паттерна "Приспособленец"
├── PatternInterpreter/                # Реализация паттерна "Интерпретатор"
├── PatternIterator/                   # Реализация паттерна "Итератор"
├── PatternMediator/                   # Реализация паттерна "Посредник"
├── PatternMemento/                    # Реализация паттерна "Хранитель"
├── PatternObserver/                   # Реализация паттерна "Наблюдатель"
├── PatternPrototype/                  # Реализация паттерна "Прототип"
├── PatternProxy/                      # Реализация паттерна "Заместитель"
├── PatternSingleton/                  # Реализация паттерна "Одиночка"
├── PatternState/                      # Реализация паттерна "Состояние"
├── PatternStrategy/                   # Реализация паттерна "Стратегия"
├── PatternTemplateMethod/             # Реализация паттерна "Шаблонный метод"
├── PatternVisitor/                    # Реализация паттерна "Посетитель"
├── SortingAlgorithms/                 # Модуль с алгоритмами сортировки
├── .gitignore                         # Файлы и директории, игнорируемые git
├── AlgorithmsAndPartners.slnx         # Файл решения Visual Studio
├── DesignPatterns.txt                 # Полные описания паттернов со схемами
├── LICENSE
├── README.en.md
└── README.md
```

---

## 🚀 Быстрый старт

### 📋 Предварительные требования
- Установленная среда разработки Visual Studio 2022 (или новее) с рабочей нагрузкой "Разработка классических приложений на C++"
- Поддержка стандарта C++17 или выше

### 🔧 Сборка и запуск
1. Клонируйте репозиторий проекта:

```bash
git clone https://github.com/MordaRedFox/sorting-algorithms-and-design-patterns.git
cd sorting-algorithms-and-design-patterns
```

2. Откройте файл решения `AlgorithmsAndPartners.slnx` в Visual Studio
3. Выберите интересующий вас проект в обозревателе решений (например, `PatternObserver` или `SortingAlgorithms`)
4. Нажмите правой кнопкой мыши на проект и выберите "Назначить запускаемым проектом" (Set as Startup Project)
5. Нажмите F5 (или `Ctrl+F5`) для сборки и запуска выбранного примера

---

## 📚 Образовательные цели

Проект реализован для освоения ключевых аспектов разработки на C++ и проектирования архитектуры:
- ✅ Алгоритмическая грамотность - понимание принципов работы сортировок и оценки их сложности (O(n log n), O(n²))
- ✅ Объектно-ориентированное проектирование - применение инкапсуляции, наследования и полиморфизма
- ✅ Принципы SOLID - изучение того, как паттерны помогают соблюдать принципы единственной ответственности, открытости/закрытости и прочее
- ✅ Управление памятью - работа с умными указателями (`std::unique_ptr`, `std::shared_ptr`) и RAII
- ✅ Шаблонное программирование - создание обобщенного кода с помощью `template`
- ✅ Архитектура ПО - понимание того, как паттерны решают типовые проблемы проектирования

---

## ⚠️ Важное примечание
Этот проект был разработан начинающим программистом-самоучкой. Код может содержать:
- ❌ Ошибки и баги
- ⚡ Неоптимальные решения
- 🛡️ Недочёты в архитектуре

---

## 📩 Контакты
Я открыт для конструктивной критики и предложений по улучшению кода. Если вы нашли ошибку или знаете, как сделать что-то лучше - пожалуйста, свяжитесь со мной!

[![Telegram](https://img.shields.io/badge/-MordaRedFox-0088cc?style=for-the-badge&logo=telegram&logoColor=white)](https://t.me/MordaRedFox)
&nbsp;
[![Email](https://img.shields.io/badge/-mordaredfox@gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:mordaredfox@gmail.com)
