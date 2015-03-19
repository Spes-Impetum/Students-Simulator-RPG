cmake_minimum_required(VERSION 2.6)
set(EXECUTABLE_OUTPUT_PATH bin/)
project(student)

file(
  
  GLOB_RECURSE
  
  src_files
  
  src/*
  
  include/*
  
  )

add_definitions( -Wall -std=c++11 -g )
include_directories(
  
  include/
  /usr/include/SFML
  
  )

link_directories(
  /usr/lib/
  /usr/lib64
  )

add_executable(
  
  student
  ${src_files}
  
  )

target_link_libraries(
  student

  -lsfml-graphics
  -lsfml-window
  -lsfml-system
  
  )