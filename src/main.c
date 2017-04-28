#include "kinetis.h"

int main(void)
{
  /* set LED pin as an output */
  PORTC_PCR5 = PORT_PCR_SRE | PORT_PCR_DSE | PORT_PCR_MUX(1);
  GPIOC_PDDR |= 1 << 5;
  while (1) {
    GPIOC_PTOR = 1 << 5;
  }
}

