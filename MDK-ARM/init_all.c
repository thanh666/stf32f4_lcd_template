#include "main.h"

void initAll(void)
{
    
    /* USER CODE BEGIN 2 */
    BSP_LCD_Init();
    /* LCD Layers Initialization */
    BSP_LCD_LayerDefaultInit(LCD_FOREGROUND_LAYER, (LCD_FRAME_BUFFER + BUFFER_OFFSET));

    /* Configure the transparency for foreground : Increase the transparency */
    BSP_LCD_SetTransparency(LCD_BACKGROUND_LAYER, 0);
    BSP_LCD_SelectLayer(LCD_FOREGROUND_LAYER);

    /* LCD Log initialization */
    LCD_LOG_Init();

    LCD_LOG_SetHeader((uint8_t *)"LTDC Application");
    LCD_UsrLog("*** Application started. ***\n");
    LCD_LOG_SetFooter((uint8_t *)"                      Cong Thanh");
}
