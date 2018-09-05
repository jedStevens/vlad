// character.h

#ifndef FAC_CHARACTER_H
#define FAC_CHARACTER_H

#include "scene/3d/physics_body.h"

class Character : public RigidBody{
  GDCLASS(Character, RigidBody);

  int count;

protected:
  static void _bind_methods();

public:
  void add(int value);
  void reset();
  int get_total() const;

  Character();
};

#endif

// Factions Character
