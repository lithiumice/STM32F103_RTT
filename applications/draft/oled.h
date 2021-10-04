
#ifndef _SEEKFREE_OLED_h
#define _SEEKFREE_OLED_h

#include "my_def.h"

void Dly_ms(uint16 ms);
void OLED_Init(void);
void OLED_Fill(uint8 dat);
void OLED_WrDat(uint8 data);
void OLED_Wr6Dat(uint8 data);
void OLED_PutPixel(uint8 x, uint8 y);
void OLED_ClrPixel(uint8 x, uint8 y);
void OLED_Set_Pos(uint8 x, uint8 y);
void OLED_P6x8Str(uint8 x, uint8 y, uint8 ch[]);
void OLED_P8x16Str(uint8 x, uint8 y, uint8 ch[]);
void OLED_HEXACSII(uint16 hex, uint8 *Print);
void OLED_Print_Num(uint8 x, uint8 y, uint16 num);
void OLED_Print_Num1(uint8 x, uint8 y, int16 num);
void OLED_PrintFloatValue(unsigned char x, unsigned char y, float data);
void OLED_Put6x8Char(unsigned char x, unsigned char y, unsigned char ch);

void dis_bmp(uint16 high, uint16 width, uint8 *p, uint8 value);
void Showimage(void);
extern const uint8 F6x8[][6];

#endif
