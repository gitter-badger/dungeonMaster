#ifndef ENEMY_H
#define ENEMY_H

#include "glm.h"

#include "character.h"

class Map;

class Enemy : public Character {
public:
  unsigned int detectRange;
  Movement movePattern;

  Enemy(glm::ivec2 position = glm::ivec2(0,0), glm::vec3 orientation = glm::vec3(0,0,0),
		float scale = 1, std::string id = "Default",
		unsigned int life = 0, unsigned int defense = 0, unsigned int power = 0,
		unsigned int detectRange = 5);
  ~Enemy();

  bool detect(Character* other);
  Movement reach(glm::ivec2 target, Map* map);
};

#endif
