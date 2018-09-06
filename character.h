// character.h
// Factions Character
#ifndef FAC_CHARACTER_H
#define FAC_CHARACTER_H

#include "scene/3d/physics_body.h"
#include "animation_set.h"
#include "scene/animation/animation_player.h"

class Character : public RigidBody{
  GDCLASS(Character, RigidBody);

  float stride_size = 1.0; // in game units
  float _legwheel = 0.0; // in radians

  float air_time = 0.0;

  float body_radius;
  float body_height;

  float max_speed;
  float min_speed;

  float turn_rate;

  Skeleton* skeleton;

  AnimationPlayer* animation_player;

  AnimationSet* animation_set;

protected:
  static void _bind_methods();

public:
  // Change the character's FACING
  void turn();

  // Change the character's POSITION
  void move();

  void jump();

  void crouch();

  void spin(float delta);

  Character(Skeleton skel, AnimationPlayer anim_player, AnimationSet anim_set);
  Character();

};

#endif
