#include <iostream>

enum Lanes
{
    RIGHT_LANE = 1,
    CENTER_LANE = 0,
    LEFT_LANE = -1,
};

typedef struct Vehicle
{
    int id;
    Lanes lane;
    float velocity;
} TS_Vehicle;

void print_vehicle_data(TS_Vehicle v)
{
    std::cout << "Vehicle ID: " << v.id << std::endl;
    std::cout << "Vehicle Lane: " << v.lane << std::endl;
    std::cout << "Vehicle Velocity: " << v.velocity << std::endl;
}

int main()
{

    TS_Vehicle v1 { 1, Lanes::CENTER_LANE, 100.0f };

    print_vehicle_data(v1);

    return 0;
}
