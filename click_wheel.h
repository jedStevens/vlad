// click_wheel.h

#ifndef FAC_CLICK_WHEEL_H
#define FAC_CLICK_WHEEL_H

#include "scene/2d/node_2d.h"

class ClickWheel : public Node2D{
  GDCLASS(ClickWheel, Node2D);

protected:
  static void _bind_methods();

public:
  ClickWheel();
  
};

#endif

// Factions Character
