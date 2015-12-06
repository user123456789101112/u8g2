#include "u8x8.h"

u8x8_t u8g2;


int main(void)
{
  u8x8_Setup_SDL_128x64(&u8g2);
  u8x8_InitDisplay(&u8g2);  

  u8x8_SetFont(&u8g2, u8x8_font_amstrad_cpc_r);
  
  u8x8_DrawString(&u8g2, 0, 0, "Hello World!");

  while( u8g_sdl_get_key() < 0 )
    ;
  
  return 0;
}

