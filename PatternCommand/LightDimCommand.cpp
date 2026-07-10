#include "LightDimCommand.h"
#include "Light.h"

LightDimCommand::LightDimCommand(Light& light, int level)
    : light(light), newLevel(level), previousBrightness(0), previousState(false) {}

void LightDimCommand::execute()
{
    previousBrightness = light.getBrightness();
    previousState = light.getIsOn();
    light.dim(newLevel);
}

void LightDimCommand::undo()
{
    if (previousState) light.dim(previousBrightness);
    else light.off();
}
