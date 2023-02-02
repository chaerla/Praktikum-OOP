#include "SpacingGuildShip.hpp"

using namespace std;

float SpacingGuildShip::totalGuildTravel = 0;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip() : maxPassengerCap(50), guildNavigatorCount(3), serialNum(producedShips + 1)
{
    this->passengerCount = 0;
    this->operatingGuildNavigator = this->guildNavigatorCount;
    this->spiceStock = 50;
    producedShips++;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock) : maxPassengerCap(maxPassengerCap), guildNavigatorCount(guildNavigatorCount), serialNum(producedShips + 1)
{
    this->passengerCount = 0;
    this->operatingGuildNavigator = this->guildNavigatorCount;
    this->spiceStock = spiceStock;
    producedShips++;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip &other) : maxPassengerCap(other.maxPassengerCap), guildNavigatorCount(other.guildNavigatorCount), serialNum(producedShips + 1)
{
    this->passengerCount = other.passengerCount;
    this->operatingGuildNavigator = other.operatingGuildNavigator;
    this->spiceStock = other.spiceStock;
    producedShips++;
}

SpacingGuildShip::~SpacingGuildShip(){};

int SpacingGuildShip::getShipSerialNum() const
{
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const
{
    return this->passengerCount;
}

void SpacingGuildShip::travel(float distance)
{
    if (this->operatingGuildNavigator > 0)
    {
        float addedDist = distance / (E * E * this->operatingGuildNavigator);
        totalGuildTravel += addedDist;
        this->operatingGuildNavigator--;
    }
}

void SpacingGuildShip::boarding(int addedPassengers)
{
    int newPass = this->getPassengerCount() + addedPassengers;
    if (newPass > this->maxPassengerCap)
    {
        this->passengerCount = this->maxPassengerCap;
    }
    else
    {
        this->passengerCount = newPass;
    }
}

void SpacingGuildShip::dropOff(int droppedPassengers)
{
    int currPass = this->getPassengerCount();
    if (currPass < droppedPassengers)
    {
        this->passengerCount = 0;
    }
    else
    {
        this->passengerCount -= droppedPassengers;
    }
}

void SpacingGuildShip::refreshNavigator(int n)
{
    int refreshNum;
    if (n + this->operatingGuildNavigator <= this->guildNavigatorCount)
    {
        refreshNum = n;
    }
    else
    {
        refreshNum = this->guildNavigatorCount - this->operatingGuildNavigator;
    }
    int spice = refreshNum * GUILD_NAVIGATOR_SPICE_DOSE;
    if (this->spiceStock < spice)
    {
        this->operatingGuildNavigator += this->spiceStock / GUILD_NAVIGATOR_SPICE_DOSE;
        this->spiceStock = 0;
    }
    else
    {
        this->operatingGuildNavigator = refreshNum;
        this->spiceStock -= spice;
    }
}

void SpacingGuildShip::transitToArrakis(int addedSpice)
{
    this->spiceStock += addedSpice;
}