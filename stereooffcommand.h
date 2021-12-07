#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H

#include "command.h"
#include "stereo.h"

class StereoOffCommand : public Command
{
private:
    Stereo *stereo;
public:
    StereoOffCommand(Stereo *stereo);
    void execute();
};

#endif // STEREOOFFCOMMAND_H
