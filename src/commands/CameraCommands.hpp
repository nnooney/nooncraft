////////////////////////////////////////////////////////////////////////////////
/// @file CameraCommands.hpp
/// @brief Command implementations for the Camera.
///
/// This file contains several command classes that the Camera responds to. Most
/// of these commands are generated and responded to by the InputManager.
////////////////////////////////////////////////////////////////////////////////

#ifndef _CAMBRE_CAMERA_COMMANDS_H_
#define _CAMBRE_CAMERA_COMMANDS_H_

#include <glm/glm.hpp>

#include "Camera.hpp"
#include "Command.hpp"

/// @class LookCommand
/// @brief A command to cause the camera to look at a specific point.
class LookCommand : public Command
{
public:
    LookCommand(Camera *camera, float yaw, float pitch);
    virtual void execute(void);
private:
    Camera *mCamera;
    float mYaw;
    float mPitch;
};

/// @class MoveCommand
/// @brief A command to cause the camera to move to a specific location.
class MoveCommand : public Command
{
public:
    MoveCommand(Camera *camera, glm::vec3 position);
    virtual void execute(void);
private:
    Camera *mCamera;
    glm::vec3 mPosition;
};

#endif
