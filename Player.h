#include <string>
#include <iostream>

using namespace std;

class Player {
  public:
    Player();
    string GetTribe();
    double GetHolyPoints(); // value between 1-10 that will effect questions given
    double GetDeathChance(); // Random number between 1 and 10 minus the holypoints
    double GetArmor();
    string GetHairColor(); // For a build your own character
    string GetEyeColor();
    string GetName();
    void ChangeTribe(); // change your tribe
    void HolyPoints(); // change the rightness level

  private:
    string tribe;
    double HolyPoints;
    double deathChance;
    double armor;
    string hairColor;
    string eyeColor;
    string name;

}