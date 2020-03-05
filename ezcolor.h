#include "cybsp.h"
#include "cyrgb_led.h"

typedef enum
{
  RED = CYRGB_LED_COLOR_RED, 
  GREEN = CYRGB_LED_COLOR_GREEN, 
  BLUE = CYRGB_LED_COLOR_BLUE
  } color_t;
  
  cyrslt_t init_colors (void);
  void color (color_t color);
