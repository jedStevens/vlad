#include "register_types.h"
#include "class_db.h"
#include "character.h"

void register_factions_types() {

        ClassDB::register_class<Character>();
}

void unregister_factions_types() {
   //nothing to do here
}
