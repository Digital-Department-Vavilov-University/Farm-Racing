#include "Vehicle.h"

Vehicle::Vehicle(const std::string& model, int power, int maxSpeed, bool externalTuning, bool powerTuning)
    : model(model), power(power), maxSpeed(maxSpeed), externalTuning(externalTuning), powerTuning(powerTuning) {}

std::string Vehicle::getModel() const {
    return model;
}

int Vehicle::getPower() const {
    return power;
}

void Vehicle::setPower(int newPower) {
    power = newPower;
}

int Vehicle::getMaxSpeed() const {
    return maxSpeed;
}

bool Vehicle::hasExternalTuning() const {
    return externalTuning;
}

bool Vehicle::hasPowerTuning() const {
    return powerTuning;
}

void Vehicle::tunePower() {
    if (powerTuning) {
        power += 30;
    }
}