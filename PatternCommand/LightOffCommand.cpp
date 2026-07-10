#include "LightOffCommand.h"
#include "Light.h"

LightOffCommand::LightOffCommand(Light& light)
    : light(light), previousState(false), previousBrightness(0) {}

void LightOffCommand::execute()
{
    previousState = light.getIsOn();
    previousBrightness = light.getBrightness();
    light.off();
}

void LightOffCommand::undo()
{
    if (previousState) light.dim(previousBrightness);
    else light.off();
}
