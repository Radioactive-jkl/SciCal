# Practical Scientific Calculator
Radioactive *`V1.0`*
<h3 align="center">Curriculum Design for OPP C++</h3>

---

#### Contents

* [Highlights](#highlights)
* [Usage](#usage)
* [Development](#development)


##### `High Accuraccy Algorithm` is going to be added in the next release,
      ~~if I have free time~~.

## Highlights

* Designed for utility, it works like a real scientific calculator.
* Modern C++ with QT5.14.2
* Easy to read my code even no comments.
* Simply download the
  [boxed_exe](https://github.com/Radioactive-jkl/cppSciCal/blob/master/sciCalculator/scientificCalculator_boxed.exe)
  and start using.

## Usage

1. Download the 
   [boxed_exe](https://github.com/Radioactive-jkl/cppSciCal/blob/master/sciCalculator/scientificCalculator_boxed.exe)
   then use.
    
2. use **`calculate.h`** and **`calculate.cpp`** as [*toolFunction*](https://github.com/Radioactive-jkl/cppSciCal/blob/master/sciCalculator/testFunc_cmake).

    ```c++
    /*
     * testFunc_cmake
     *  ├── out
     *  ├── CMakeLists.txt
     *  └── src
     *       ├── CMakeLists.txt
     *       ├── calculate.h
     *       ├── calculate.cpp
     *       └── main.cpp
     */
    ```

## Development

**`testFunc_cmake`** can be compiled and built either through the command line, or using
an IDE that has direct support for CMake (such as CLion, Qt Creator) or for
which CMake can generate project files (Visual Studio, Eclipse CDT, Code::Blocks
and more).

**`code_qmake`** is recommended to use Qt Creator.

### Using the command line

On Linux and macOS, you can compile and run the tests using the command line from the project's root directory.

* To compile the tests, run **`cmake`**.
* To build and run the tests, run **`make`**.
* To generate the single-include header file, run **`make install`**.

### Using an IDE that supports CMake

1. Load the project directory in your IDE.
2. In the build settings for CMake, which can usually be found at
   `Settings > Build > CMake`, set the `Generation path` to `build`.

Then you can simply select which target (unit test) you want to build/run, and
your IDE will do the rest.

In case your IDE does not support CMake directly, you will need to run `cmake`
via the command line with the appropriate flags to generate the project files
for your IDE. Give it a try, it's not supposed to be hard!

### Using Qt Creator

Just open
[**`scientificCalculator.pro`**](https://github.com/Radioactive-jkl/cppSciCal/blob/master/sciCalculator/code_qmake/scientificCalculator/scientificCalculator.pro)
to use.
