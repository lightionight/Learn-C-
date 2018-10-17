#include <string>
#include <iostream>
//define enum
enum MonsterRaces
{
  type_orcs,
  type_gobins,
  type_trolls,
  type_ogres,
  type_skeleton,
};

//chose test
std::string getMonsterName (MonsterRaces monsterName)
{
  if (monsterName == type_orcs)
    return std::string ("Orcs");
  if (monsterName == type_gobins)
    return std::string ("Gobins");
  if (monsterName == type_trolls)
    return std::string ("Trolls");
  if (monsterName == type_skeleton)
    return std::string ("Skeleton");
  return std::string ("???");
}
//chose your Monster
int main()
{
  MonsterRaces monsterName = type_gobins;
  std::cout << "you're fight with " << getMonsterName(monsterName) << "\n";
  return 0;
}
