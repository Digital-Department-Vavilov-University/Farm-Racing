#pragma once
#include <string>

class Vehicle {
private:
    std::string model;
    int power;
    int maxSpeed;
    bool externalTuning;
    bool powerTuning;

public:
    Vehicle(const std::string& model, int power, int maxSpeed, bool externalTuning = false, bool powerTuning = false);

    std::string getModel() const;
    int getPower() const;
    void setPower(int newPower);
    int getMaxSpeed() const;
    bool hasExternalTuning() const;
    bool hasPowerTuning() const;
    void tunePower();
};