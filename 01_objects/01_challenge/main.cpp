#include "traffic_light.h"

int main(){
    TrafficLight input = TrafficLight::red;
    std::string output = get_action(input);
    std::cout << output << std::endl;
    return 0;
}
