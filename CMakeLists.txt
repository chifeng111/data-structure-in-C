cmake_minimum_required(VERSION 3.13)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(sgLinkListTest sgLinkListTest.c SgLinkList.c)
add_executable(stackTest stackTest.c Stack.c)
add_executable(queueTest queueTest.c Queue.c)
add_executable(searchTreeTest searchTreeTest.c SearchTree.c)