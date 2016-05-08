#include <stdio.h>

#include <pigpio.h>

int main(int argc, char *argv[])
{
  if (gpioInitialise() < 0){
   printf("gpio failed to initialise, EXIT.\n");	
   return 1;
  }
  else printf("gpio initialised.\n");

  return 0;
}
