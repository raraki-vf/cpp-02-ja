#include "traffic_light.h"

std::string get_action(TrafficLight light) {
    switch (light)
    {
    case TrafficLight::red :
        return "Stop";
    
    case TrafficLight::yellow :
        return "Caution";

    case TrafficLight::green :
        return "Go";
    
    default:
        return "Error";
    }
}