#ifndef __RECORD_H__
#define __RECORD_H__

#include "ff.h"
#include "sdio_debug.h"
#include "stm32f4_discovery_sdio_sd.h"

#include "FreeRTOS.h"
#include "timers.h"

void start_record(void);
void close_record(void);
void writeControlValue(uint32_t pwm_L, uint32_t pwm_R);
uint32_t readControlValue(void);
void recControlData(uint32_t pwm_L, uint32_t pwm_R, int enc_L, int enc_R);
void recControlData2(uint32_t pwm_L, uint32_t pwm_R, int enc_L, int enc_R, int cur_L, int cur_R);
void recControlData3(uint32_t pwm_L, uint32_t pwm_R, int enc_L, int enc_R, int cur_L, int cur_R, int fnc_l, int fnc_r);
void recFzyNeuData(int e1, int e2, int f_l, int f_r, int s_l, int s_r, int r_l, int r_r);
void endofRecord(void);
void record(void);
void pwmrecord(void);
FRESULT ff_test(void);
FRESULT ff_read(void);

#endif
