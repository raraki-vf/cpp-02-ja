#pragma once
#include <iostream>
#include <string> 

enum class TrafficLight {red, yellow, green};

std::string get_action(TrafficLight light);
