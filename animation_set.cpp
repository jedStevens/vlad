#include "animation_set.h"
#include "typedefs.h"

void AnimationSet::_bind_methods() {
  ClassDB::bind_method(D_METHOD("get_animation", "get_animation"), &AnimationSet::get_animation);
  ClassDB::bind_method(D_METHOD("remap", "remap"), &AnimationSet::get_animation);
}

String AnimationSet::get_animation(int anim){
  return anims[anim];
}

void AnimationSet::remap(int anim, String new_anim_name){
  anims[CLAMP(anim, 0, JUMP)] = new_anim_name;
}

AnimationSet::AnimationSet(){
  anims.push_back("default");
  anims.push_back("idle");
  anims.push_back("walk");
  anims.push_back("run");
  anims.push_back("jump");
}
