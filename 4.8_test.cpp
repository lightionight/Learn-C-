#include <string>
#include <iostream>

//define monster enum class
enum class monstertype
{
  ogre,
  dragon,
  orc,
  giant_Spider,
  slime,
};

//构造怪物属性数值

struct monsterValue
{
   monsterType type;
   std::string monsterName;
   int         monsterHealth;
   double      monsterATK;
   double      monsterDEF;
};
std::string getmonsterType(monsterValue monster)
{
  if(monster.type == monsterType::ogre)
    return "Ogre";
  if(monster.type == monsterType::dragon)
    return "Dragon";
  if(monster.type == monsterType::orc)
    return "Orc";
  if(monster.type == monsterType::giant_Spider)
    return "Giant Spider";
  if(monster.type == monsterType::slime)
    return "Slime";
  
  return "Unknown"
}

//打印怪物属性

void printMonsterAttribute（monsterValue monster）
{
    std::cout << "This " << getmonsterType(monster) << " is named " << monster.name << " has "
              << "monster.Health" << ",have ATK " << "monster.ATK" << " point and DEF "
              << "monster.DEF ";
}

int main()
{
  monstervalue ogre = { monsterType::Ogre,"tom" , 127 , 25 , 34};
  monstervalue slime = { monsterType::slime,"jack" , 127 , 25 , 34};
  
  printMonsterAttribute(orge);
  printMonsterAttribute(slime);
  
  return 0;
}
