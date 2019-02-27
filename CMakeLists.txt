cmake_minimum_required(VERSION 3.12.2)

project (RandomPrintThread)

add_executable(RandomPrint 
	main.cpp
	Producer.h
	Producer.cpp
	Consumer.h
	Consumer.cpp
)
