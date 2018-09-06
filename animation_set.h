// character.h

#ifndef FAC_ANIM_SET_H
#define FAC_ANIM_SET_H

#include "scene/main/node.h"
#include "map.h"

class AnimationSet : public Node{
  GDCLASS(AnimationSet, Node);

  List<String> anims;
protected:
  static void _bind_methods();

public:
  enum ANIMATIONS {DEFAULT=0, IDLE, WALK, RUN, JUMP};
  void remap(int anim, String new_anim_name);
  String get_animation(int anim);

  AnimationSet();


};

#endif

// Factions Character
