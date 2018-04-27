//
// Created by zain on 4/26/18.
//

#include "IMeter.h"
#include "BorderDecorator.h"
#include "BeforeTextDecorator.h"
#include "AfterTextDecorator.h"
#include "DigitalMeter.h"
#include "Speed.h"

int main() {
    IMeter *meter = new BorderDecorator(
            new BeforeTextDecorator(
                    new AfterTextDecorator(
                            new DigitalMeter,
                            /* AFTER */ "Datum: April 26 2018 "
                    ),
                    /* BEFORE */ "De snelheid is: \n"
            )
    );

    Speed speed (meter);
    speed.measure();
    speed.show();
}

