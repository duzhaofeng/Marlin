/**
 ****************************************************************************************************
 * @file        qspi.h
 * @author      正点原子团队(ALIENTEK)
 * @version     V1.0
 * @date        2020-03-29
 * @brief       QSPI 驱动代码
 * @license     Copyright (c) 2020-2032, 广州市星翼电子科技有限公司
 ****************************************************************************************************
 * @attention
 *
 * 实验平台:正点原子 STM32H750开发板
 * 在线视频:www.yuanzige.com
 * 技术论坛:www.openedv.com
 * 公司网址:www.alientek.com
 * 购买地址:openedv.taobao.com
 *
 * 修改说明
 * V1.0 20200329
 * 第一次发布
 *
 ****************************************************************************************************
 */

#ifndef __QSPI_H
#define __QSPI_H

#include "Arduino.h"

uint8_t qspi_wait_flag(uint32_t flag, uint8_t sta, uint32_t wtime); /* QSPI等待某个状态 */
uint8_t qspi_init(void);    /* 初始化QSPI */
void qspi_send_cmd(uint8_t cmd, uint32_t addr, uint8_t mode, uint8_t dmcycle);  /* QSPI发送命令 */
uint8_t qspi_receive(uint8_t *buf, uint32_t datalen);   /* QSPI接收数据 */
uint8_t qspi_transmit(uint8_t *buf, uint32_t datalen);  /* QSPI发送数据 */

#endif
