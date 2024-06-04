# SimUduck

SimUduck is a simulation project designed to emulate the behavior and characteristics of ducks in a controlled environment. This project serves as a teaching tool to understand object-oriented programming principles and design patterns, particularly focusing on inheritance, polymorphism, and the strategy pattern.

## Features

- **Duck Simulation**: Simulate various types of ducks, each with unique behaviors.
- **Behavioral Patterns**: Demonstrate the use of strategy patterns to change the behavior of ducks at runtime.
- **Object-Oriented Principles**: Illustrate inheritance and polymorphism through a flexible and extensible codebase.

## Getting Started

### Prerequisites

To run this project, you will need:

- A C++ compiler (GCC, Clang, MSVC, etc.)
- CMake for building the project

### Installation

1. Clone the repository:

```sh
git clone https://github.com/omeryildiz/SimUduck.git
cd SimUduck
```

2. Create a build directory and navigate to it:

```sh
mkdir build
cd build
```

3. Configure the project with CMake:

```sh
cmake ..
```

4. Build the project:

```sh
make
```

### Running the Simulation

After building the project, you can run the simulation using the following command:

```sh
./SimUduck
```

## Project Structure

- **src/**: Contains the source code files for the simulation.
- **include/**: Contains the header files.
- **build/**: Directory for building the project.
- **CMakeLists.txt**: CMake configuration file.

## Design Patterns

SimUduck employs the following design patterns:

- **Strategy Pattern**: Used to define a family of algorithms (e.g., different flying behaviors), encapsulate each one, and make them interchangeable.
- **Inheritance and Polymorphism**: Used to create a hierarchy of duck types, where each type can override and extend the base class functionalities.

## Contributing

Contributions are welcome! If you would like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes and commit them (`git commit -m 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Open a pull request.


## Acknowledgments

- Inspired by the classic "Head First Design Patterns" book which illustrates the strategy pattern using a duck simulation example.

