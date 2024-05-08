#### GamingSuite
Collection of 2D/3D - board games

##  Goal
This project is for personal practice an for honing of software Engineering techniques. 

##  Frameworks: 
  - Qt 6.7
  - C++ >= 17

## optional environments for QtQuick applets; due to optional JavaScript best used for actual games
  - pyside6 from https://www.qt.io/qt-for-python (stable)
  - python 3.12 from https://www.python.org/downloads/ (stable)


#### Source
## cpp- Rules: 
  - qt- Classes are never directly instantiated in code; to allow optional overwrites classes are used with a "gs" (GamingSuite) prefix instead of the usual "q" prefix
    Example: gsApplication::qApplication 
