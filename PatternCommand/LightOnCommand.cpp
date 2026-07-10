#include "LightOnCommand.h"
#include "Light.h"

LightOnCommand::LightOnCommand(Light& light)
    : light(light), previousState(false), previousBrightness(0) {}

void LightOnCommand::execute()
{
    previousState = light.getIsOn();
    previousBrightness = light.getBrightness();
    light.on();
}

void LightOnCommand::undo()
{
    if (previousState) light.dim(previousBrightness);
    else light.off();
}
