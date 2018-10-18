#include <sting>
#include <iostream>

//define monster enum class
enum class monster
{
  ogre,
  dragon,
  orc,
  giantSpider,
  slime,
};

//构造怪物属性数值

struct monsterValue
{
   std::string monsterName;
   int         monsterHealth;
   double      monsterATK;
   double      monsterDEF;
}


   
   
