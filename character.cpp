#include "character.h"
#include "typedefs.h"

void Character::spin(float delta){
  set_rotation_degrees(get_rotation_degrees() + Vector3(0.0, delta, 0.0));
}
void Character::_bind_methods() {

    ClassDB::bind_method(D_METHOD("spin", "spin"), &Character::spin);
}

Character::Character() {
}
