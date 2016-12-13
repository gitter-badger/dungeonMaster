#ifndef MAP_H
#define MAP_H

#include "glm.h"
#include <math.h>
#include <vector>
#include <list>
#include <string>

#include "character.h"
#include "item.h"
#include "trap.h"

class Map {
private :
  std::string name;
  std::vector< std::vector<int> > datas;
  std::list<Character> characters;
  std::list<Item> items;
  std::vector<Trap> traps;

public:
  Map();
  ~Map();

  void save(std::string pathFile);
  void loadTerrain(std::string pathFile);
  void loadEntities(std::string pathFile);
  bool isCaseEmpty();
};

#endif // MAP_H