// click_wheel.h

#ifndef FAC_PLAYER_CAMERA_H
#define FAC_PLAYER_CAMERA_H

#include "scene/3d/camera.h"

class PlayerCamera : public Camera{
  GDCLASS(PlayerCamera, Camera);

protected:
  static void _bind_methods();

public:

  PlayerCamera();
};

#endif

// Factions Character
