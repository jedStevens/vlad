// click_wheel.h

#ifndef FAC_PLAYER_H
#define FAC_PLAYER_H

#include "scene/main/node.h"

class Player : public Node{
  GDCLASS(Player, Node);

protected:
  static void _bind_methods();

public:
  Player();

};

#endif

// Factions Character
