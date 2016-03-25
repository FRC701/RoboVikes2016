/*
 * ShooterLightIndicator.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: Diego
 */

#include <ShooterLightIndicator.h>

ShooterLightIndicator::ShooterLightIndicator (int redRelay, int greenRelay,
                                              int blueRelay)
{
    this->redRelay = new Relay (redRelay, Relay::kForwardOnly);
    this->greenRelay = new Relay (greenRelay, Relay::kForwardOnly);
    this->blueRelay = new Relay (blueRelay, Relay::kForwardOnly);

}

void ShooterLightIndicator::SetColor (LightColor color)
{
    switch (color)
    {

        case kOff:
            redRelay->Set (Relay::kOff);
            greenRelay->Set (Relay::kOff);
            blueRelay->Set (Relay::kOff);
            break;

        case kRed:
            redRelay->Set (Relay::kOn);
            greenRelay->Set (Relay::kOff);
            blueRelay->Set (Relay::kOff);
            break;

        case kGreen:
            redRelay->Set (Relay::kOff);
            greenRelay->Set (Relay::kOn);
            blueRelay->Set (Relay::kOff);
            break;

        case kBlue:
            redRelay->Set (Relay::kOff);
            greenRelay->Set (Relay::kOff);
            blueRelay->Set (Relay::kOn);
            break;

        case kYellow:
            redRelay->Set (Relay::kOn);
            greenRelay->Set (Relay::kOn);
            blueRelay->Set (Relay::kOff);
            break;

        case kCyan:
            redRelay->Set (Relay::kOff);
            greenRelay->Set (Relay::kOn);
            blueRelay->Set (Relay::kOn);
            break;

        case kMagenta:
            redRelay->Set (Relay::kOn);
            greenRelay->Set (Relay::kOff);
            blueRelay->Set (Relay::kOn);
            break;

        default:
            redRelay->Set (Relay::kOff);
            greenRelay->Set (Relay::kOff);
            blueRelay->Set (Relay::kOff);
            break;

    }
}
