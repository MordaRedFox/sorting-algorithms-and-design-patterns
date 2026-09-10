<div align="center">

# 🧠 Sorting Algorithms and Design Patterns

### Educational project for studying classical algorithms and architectural solutions in C++

## Сменить язык: [Русский](README.md)

[![C++](https://img.shields.io/badge/C%2B%2B-17%2B-00599C?logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Visual Studio](https://img.shields.io/badge/Visual%20Studio-2022-5C2D91?logo=visual-studio&logoColor=white)](https://visualstudio.microsoft.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)

</div>

---

## 📖 About the Project

<div align="justify">

This repository is a **collection of implementations of popular sorting algorithms and classical design patterns (GoF)**. The project was created for educational purposes to gain a deep understanding of the internal structure of algorithms, evaluate their time and space complexity, and practice applying SOLID and OOP principles in modern C++.

Each design pattern is placed in a separate project (directory), which allows for isolated study of its structure, advantages, and use cases. Sorting algorithms are collected into a single module for convenient comparative analysis of their performance.

</div>

---

## 🎯 Key Features

<div align="center">

<table>
    <tr>
        <td valign="top" width="50%">
            <h3 align="center">📊 Sorting Algorithms</h3>
            <p align="center">
                <img src="https://img.shields.io/badge/⚡-Quick%20Sort-blue" alt="QuickSort">
                <img src="https://img.shields.io/badge/🔀-Merge%20Sort-green" alt="MergeSort">
                <img src="https://img.shields.io/badge/🫧-Bubble%20Sort-orange" alt="BubbleSort">
            </p>
            <div style="text-align: left; margin-left: 20px;">
                <ul style="text-align: left; padding-left: 20px;">
                    <li>📈 Implementation of classical sorting algorithms</li>
                    <li>⏱️ Time complexity analysis (Big O notation)</li>
                    <li>🧠 Various approaches: divide and conquer, exchange, insertion</li>
                    <li>🛠️ Template functions for working with various data types</li>
                </ul>
            </div>
        </td>
        <td valign="top" width="50%">
            <h3 align="center">🏗️ Design Patterns</h3>
            <p align="center">
                <img src="https://img.shields.io/badge/🏭-Creational-purple" alt="Creational">
                <img src="https://img.shields.io/badge/🔌-Structural-blue" alt="Structural">
                <img src="https://img.shields.io/badge/🎭-Behavioral-red" alt="Behavioral">
            </p>
            <div style="text-align: left; margin-left: 20px;">
                <ul style="text-align: left; padding-left: 20px;">
                    <li>🏭 Full set of creational patterns (Factories, Builder, Prototype)</li>
                    <li>🔌 Structural patterns (Adapter, Bridge, Composite, Decorator)</li>
                    <li>🎭 Behavioral patterns (Observer, Strategy, Command, State)</li>
                    <li>📚 Illustrative examples of applying each pattern</li>
                </ul>
            </div>
        </td>
    </tr>
</table>

</div>

---

## 🛠 Technology Stack

<div align="center">

<table>
    <tr align="center">
        <th>Component</th>
        <th>Version</th>
        <th>Purpose</th>
        <th>Badge</th>
    </tr>
    <tr align="center">
        <td><strong>C++</strong></td>
        <td>17 / 20</td>
        <td>Primary programming language</td>
        <td><img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?logo=c%2B%2B&logoColor=white" alt="C++"></td>
    </tr>
    <tr align="center">
        <td><strong>STL</strong></td>
        <td>-</td>
        <td>Standard Template Library</td>
        <td><img src="https://img.shields.io/badge/STL-Standard-00599C?logo=c%2B%2B&logoColor=white" alt="STL"></td>
    </tr>
    <tr align="center">
        <td><strong>Visual Studio</strong></td>
        <td>2022</td>
        <td>Development and build environment</td>
        <td><img src="https://img.shields.io/badge/Visual%20Studio-2022-5C2D91?logo=visual-studio&logoColor=white" alt="Visual Studio"></td>
    </tr>
    <tr align="center">
        <td><strong>MSVC</strong></td>
        <td>-</td>
        <td>Microsoft Visual C++ compiler</td>
        <td><img src="https://img.shields.io/badge/MSVC-Compiler-5C2D91?logo=visual-studio&logoColor=white" alt="MSVC"></td>
    </tr>
</table>

</div>

---

## 📁 Project Structure

```bash
sorting-algorithms-and-design-patterns/
├── PatternAbstractFactory/            # Implementation of the "Abstract Factory" pattern
├── PatternAdapter/                    # Implementation of the "Adapter" pattern
├── PatternBridge/                     # Implementation of the "Bridge" pattern
├── PatternBuilder/                    # Implementation of the "Builder" pattern
├── PatternChainOfResponsibility/      # Implementation of the "Chain of Responsibility" pattern
├── PatternCommand/                    # Implementation of the "Command" pattern
├── PatternComposite/                  # Implementation of the "Composite" pattern
├── PatternDecorator/                  # Implementation of the "Decorator" pattern
├── PatternFactoryMethod/              # Implementation of the "Factory Method" pattern
├── PatternFlyweight/                  # Implementation of the "Flyweight" pattern
├── PatternInterpreter/                # Implementation of the "Interpreter" pattern
├── PatternIterator/                   # Implementation of the "Iterator" pattern
├── PatternMediator/                   # Implementation of the "Mediator" pattern
├── PatternMemento/                    # Implementation of the "Memento" pattern
├── PatternObserver/                   # Implementation of the "Observer" pattern
├── PatternPrototype/                  # Implementation of the "Prototype" pattern
├── PatternProxy/                      # Implementation of the "Proxy" pattern
├── PatternSingleton/                  # Implementation of the "Singleton" pattern
├── PatternState/                      # Implementation of the "State" pattern
├── PatternStrategy/                   # Implementation of the "Strategy" pattern
├── PatternTemplateMethod/             # Implementation of the "Template Method" pattern
├── PatternVisitor/                    # Implementation of the "Visitor" pattern
├── SortingAlgorithms/                 # Module with sorting algorithms
├── .gitignore                         # Files and directories ignored by git
├── AlgorithmsAndPartners.slnx         # Visual Studio solution file
├── DesignPatterns.txt                 # Full descriptions of patterns with diagrams
├── LICENSE
├── README.en.md
└── README.md
```

---

## 🚀 Quick Start

### 📋 Prerequisites
- Installed Visual Studio 2022 (or newer) with the "Desktop development with C++" workload
- Support for the C++17 standard or higher

### 🔧 Build and Run
1. Clone the project repository:

```bash
git clone https://github.com/MordaRedFox/sorting-algorithms-and-design-patterns.git
cd sorting-algorithms-and-design-patterns
```

2. Open the solution file `AlgorithmsAndPartners.slnx` in Visual Studio
3. Select the project you are interested in in Solution Explorer (for example, `PatternObserver` or `SortingAlgorithms`)
4. Right-click the project and select "Set as Startup Project"
5. Press F5 (or `Ctrl+F5`) to build and run the selected example

---

## 📚 Educational Goals

The project is implemented to master key aspects of C++ development and architecture design:
- ✅ Algorithmic literacy - understanding how sorting algorithms work and evaluating their complexity (O(n log n), O(n²))
- ✅ Object-oriented design - applying encapsulation, inheritance, and polymorphism
- ✅ SOLID principles - learning how patterns help follow the single responsibility, open/closed, and other principles
- ✅ Memory management - working with smart pointers (`std::unique_ptr`, `std::shared_ptr`) and RAII
- ✅ Template programming - creating generic code using `template`
- ✅ Software architecture - understanding how patterns solve typical design problems

---

## ⚠️ Important Note
This project was developed by a beginner self-taught programmer. The code may contain:
- ❌ Errors and bugs
- ⚡ Suboptimal solutions
- 🛡️ Architectural shortcomings

---

## 📩 Contacts
I'm open to constructive criticism and suggestions for code improvement. If you found an error or know how to do something better - please contact me!

[![Telegram](https://img.shields.io/badge/-MordaRedFox-0088cc?style=for-the-badge&logo=telegram&logoColor=white)](https://t.me/MordaRedFox)
&nbsp;
[![Email](https://img.shields.io/badge/-mordaredfox@gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:mordaredfox@gmail.com)
