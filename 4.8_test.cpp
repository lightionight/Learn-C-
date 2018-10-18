#include <string>
#include <iostream>

//define monster enum class
enum class monstertype
{
  ogre,
  dragon,
  orc,
  giant_Spider,
  slime
};

//构造怪物属性数值

struct monsterValue
{
   monstertype type;
   std::string monsterName;
   int monsterHealth;
   int monsterATK;
   int monsterDEF;
};
std::string getmonsterType(monsterValue monster)
{
  if(monster.type == monstertype::ogre)
    return "Ogre";
  if(monster.type == monstertype::dragon)
    return "Dragon";
  if(monster.type == monstertype::orc)
    return "Orc";
  if(monster.type == monstertype::giant_Spider)
    return "Giant Spider";
  if(monster.type == monstertype::slime)
    return "Slime";
  
  return "Unknown";
}

//打印怪物属性

void printMonsterAttribute(monsterValue monster)
{
    std::cout << "This " << getmonsterType(monster) << " is named " << monster.monsterName << " has "
              << "monster.monsterHealth" << ",have ATK " << "monster.monsterATK" << " point and DEF "
              << "monster.monsterDEF ";
}

int main()
{
  monsterValue ogre = {monstertype::ogre,"tom",127,25,34};
  monsterValue slime = {monstertype::slime,"jack",127,25,34};
  
  printMonsterAttribute(ogre);
  std::cout << '\n';
  printMonsterAttribute(slime);
  
  return 0;
}
