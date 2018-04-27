#include "Layer1Impl.h"
#include "Layer2Impl.h"
#include "Layer3Impl.h"

int main() {
    Layer1Impl l1;
    Layer2Impl l2;
    Layer3Impl l3;

    l1.connectHigh(&l2);
    l2.connectLow(&l1);
    l2.connectHigh(&l3);
    l3.connectLow(&l2);

    l3.service();

    return 0;
}