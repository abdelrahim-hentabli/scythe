CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

project (SCYTHE)

ADD_EXECUTABLE(scythe
  constants.cpp board.cpp playermat.cpp faction.cpp main.cpp
  )
