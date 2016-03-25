/*
 * ShooterLightIndicator.h
 *
 *  Created on: Feb 22, 2016
 *      Author: Diego
 */

#ifndef SRC_SHOOTERLIGHTINDICATOR_H_
#define SRC_SHOOTERLIGHTINDICATOR_H_

#include "Relay.h"

class ShooterLightIndicator
{
public:

    enum LightColor{
      kOff = 0,
      kRed = 1,
      kGreen = 2,
      kBlue = 3,
      kYellow = 4,
      kCyan = 5,
      kMagenta = 6,
    };

    ShooterLightIndicator (int redRelay, int greenRelay, int blueRelay);
    void SetColor(LightColor color);

private:

    Relay* redRelay;
    Relay* greenRelay;
    Relay* blueRelay;

};

#endif /* SRC_SHOOTERLIGHTINDICATOR_H_ */
