#include "register_types.h"
#include "class_db.h"

#include "character.h"
#include "player.h"
#include "player_camera.h"
#include "click_wheel.h"

void register_factions_types() {

    ClassDB::register_class<Character>();
    ClassDB::register_class<Player>();
    ClassDB::register_class<PlayerCamera>();
    ClassDB::register_class<ClickWheel>();
}

void unregister_factions_types() {
   //nothing to do here
}
