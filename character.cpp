/* summator.cpp */

#include "character.h"

void Character::add(int value) {

    count += value;
}

void Character::reset() {

    count = 0;
}

int Character::get_total() const {

    return count;
}

void Character::_bind_methods() {

    ClassDB::bind_method(D_METHOD("add", "value"), &Character::add);
    ClassDB::bind_method(D_METHOD("reset"), &Character::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Character::get_total);
}

Character::Character() {
    count = 0;
}
