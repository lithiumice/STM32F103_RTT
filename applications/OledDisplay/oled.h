//////////////////////////////////////////////////////////////////////////////////
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   :
//  ��������   : 2014-0101
//  ����޸�   :
//  ��������   : OLED 4�ӿ���ʾ����(51ϵ��)
//              ˵��:
//              ----------------------------------------------------------------
//              GND    ��Դ��
//              VCC  ��5V��3.3v��Դ
//              SCL   P1^0
//              SDA   P1^1
//              RES  ��P12
//              DC   ��P13
//              CS   ��P14
//              ----------------------------------------------------------------
//******************************************************************************/
// #include "REG51.h"
#ifndef __OLED_H
#define __OLED_H
//#include "sys.h"
//#include "stdlib.h"
#include "rtthread.h"
#include <rtdevice.h>
#include <board.h>
#include "my_def.h"

#define OLED_CMD 0  //д����
#define OLED_DATA 1 //д����
#define OLED_MODE 0

// sbit OLED_CS = P1 ^ 4;   //Ƭѡ
// sbit OLED_RST = P1 ^ 2;  //��λ
// sbit OLED_DC = P1 ^ 3;   //����/�������
// sbit OLED_SCL = P1 ^ 0;  //ʱ�� D0��SCLK?
// sbit OLED_SDIN = P1 ^ 1; //D1��MOSI�� ����

#define OLED_SCL_PIN GET_PIN(B, 7)
#define OLED_SDA_PIN GET_PIN(B, 6)
#define OLED_RST_PIN GET_PIN(B, 5)
#define OLED_DC_PIN GET_PIN(B, 3)
#define OLED_CS_PIN GET_PIN(B, 4)

// #define OLED_SCL(x) rt_pin_write(OLED_SCL_PIN, x)
// #define OLED_SDA(x) rt_pin_write(OLED_SDA_PIN, x)
// #define OLED_RST(x) rt_pin_write(OLED_RST_PIN, x)
// #define OLED_DC(x) rt_pin_write(OLED_DC_PIN, x)
// #define OLED_CS(x) rt_pin_write(OLED_CS_PIN, x)

#define OLED_CS_Clr() rt_pin_write(OLED_CS_PIN, 0)
#define OLED_CS_Set() rt_pin_write(OLED_CS_PIN, 1)

#define OLED_RST_Clr() rt_pin_write(OLED_RST_PIN, 0)
#define OLED_RST_Set() rt_pin_write(OLED_RST_PIN, 1)

#define OLED_DC_Clr() rt_pin_write(OLED_DC_PIN, 0)
#define OLED_DC_Set() rt_pin_write(OLED_DC_PIN, 1)

#define OLED_SCLK_Clr() rt_pin_write(OLED_SCL_PIN, 0)
#define OLED_SCLK_Set() rt_pin_write(OLED_SCL_PIN, 1)

#define OLED_SDIN_Clr() rt_pin_write(OLED_SDA_PIN, 0)
#define OLED_SDIN_Set() rt_pin_write(OLED_SDA_PIN, 1)

//OLEDģʽ����
//0:4�ߴ���ģʽ
//1:����8080ģʽ

#define SIZE 16
#define XLevelL 0x02
#define XLevelH 0x10
#define Max_Column 128
#define Max_Row 64
#define Brightness 0xFF
#define X_WIDTH 128
#define Y_WIDTH 64
//-----------------OLED�˿ڶ���----------------

void delay_ms(unsigned int ms);

//OLED�����ú���
void OLED_WR_Byte(u8 dat, u8 cmd);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x, u8 y, u8 t);
void OLED_Fill(u8 x1, u8 y1, u8 x2, u8 y2, u8 dot);
void OLED_ShowChar(u8 x, u8 y, u8 chr);
void OLED_ShowNum(u8 x, u8 y, u32 num, u8 len, u8 size2);
void OLED_ShowString(u8 x, u8 y, u8 *p);
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(u8 x, u8 y, u8 no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1, unsigned char BMP[]);
#endif
