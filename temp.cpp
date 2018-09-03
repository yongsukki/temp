
#include "eHealth.h"
#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <signal.h>
#include <string.h>
#include <pthread.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>

#include  <wiringPiI2C.h>
#include  <stdio.h>
#include  <math.h>

#include "arduPi.h"

namespace unistd {
        //All functions of unistd.h must be called like this: unistd::the_function()
    #include <unistd.h>
}

int main(void) {

        while(1)
        {
                printf("Temp Sensing ...Start\n");
                float temperature = eHealth.getTemperature();
                printf("Temperature : %f \n", temperature);
                delay(3000);
        }

        return(1);

}
