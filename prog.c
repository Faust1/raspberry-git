#include <iostream>

#include <pigpio.h>

int main(int argc, char *argv[])
{
  if (gpioInitialise() < 0) return 1;
  else std::cout <<"gpio initialised..." << std::endl;
}
