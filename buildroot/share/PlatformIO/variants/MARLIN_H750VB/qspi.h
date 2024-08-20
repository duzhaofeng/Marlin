#ifndef __QSPI_H
#define __QSPI_H
#include "Arduino.h"
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32H7开发板
//QSPI驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2017/8/14
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	
extern QSPI_HandleTypeDef hqspi;    //QSPI句柄

u8 QSPI_Init(void);												//初始化QSPI
void QSPI_Send_CMD(u8 cmd,u32 addr,u8 mode,u8 dmcycle);			//QSPI发送命令
u8 QSPI_Receive(u8* buf,u32 datalen);							//QSPI接收数据
u8 QSPI_Transmit(u8* buf,u32 datalen);							//QSPI发送数据
#endif
