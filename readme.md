# Practical Scientific Calculator
Radioactive *`V1.1`*
<h3 align="center">Curriculum Design for OPP C++</h3>

---

<a target="_blank" rel="noopener noreferrer" href="https://www.microsoft.com/zh-cn/windows"><img src="https://camo.githubusercontent.com/b44114213a5a462903bd69611bb6846f1dc41fe6f3230bd37c67c3d4eb65f08c/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f2d57696e646f77732d626c61636b3f7374796c653d666c61742d737175617265266c6f676f3d77696e646f7773266c6f676f436f6c6f723d626c7565" alt="Windows" data-canonical-src="https://img.shields.io/badge/-Windows-black?style=flat-square&amp;logo=windows&amp;logoColor=blue" style="max-width: 100%;"></a>  [![Github Actions Badge](https://img.shields.io/badge/-Git%20-2088FF?style=flat&logo=Git&logoColor=white)](https://git-scm.com/)  [![VS Badge](https://img.shields.io/badge/VS-C%2B%2B-5C2D91?logo=visualstudio&logoColor=white)](https://visualstudio.microsoft.com/zh-hans/vs/)  [![qt](https://img.shields.io/badge/Qt-41CD52?logo=qt&logoColor=white)](https://www.qt.io/zh-cn/)


#### Contents

* [Highlights](#highlights)
* [Usage](#usage)
* [Development](#development)



##### `High Accuraccy Algorithm` is going to be added in the next release, ~~if I have free time~~.



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
    
2. Use **`calculate.h`** and **`calculate.cpp`** as *toolFunction*.
   [*`testFunc_cmake`*](https://github.com/Radioactive-jkl/cppSciCal/blob/master/sciCalculator/testFunc_cmake) is a demo.
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
3. Use an IDE like **Qt Creator** to develop [*`code_qmake`*](https://github.com/Radioactive-jkl/cppSciCal/tree/master/sciCalculator/code_qmake).



## Development

**`testFunc_cmake`** can be compiled and built either through the command line, or using
an IDE that has direct support for CMake (such as CLion, Qt Creator) or for
which CMake can generate project files (Visual Studio, Eclipse CDT, Code::Blocks
and more).

**`code_qmake`** is recommended to use Qt Creator.


### Using the command line

On Linux and macOS, you can compile and run the tests using the command line from the project's root directory.


### Using an IDE that supports CMake

1. Load the project directory in your IDE.
2. In the build settings for CMake, which can usually be found at
   `Settings > Build > CMake`, set the `Generation path` to `build`.

Then you can simply select which target (unit test) you want to build/run, and
your IDE will do the rest.

In case your IDE does not support CMake directly, you will need to run `cmake`
via the command line with the appropriate flags to generate the project files
for your IDE. Give it a try, it's not supposed to be hard!

If using Qt Creator
Just download[*`code_qmake`*](https://github.com/Radioactive-jkl/cppSciCal/blob/master/sciCalculator/code_qmake/scientificCalculator/code_qmake)
and open **`scientificCalculator.pro`** to use.
