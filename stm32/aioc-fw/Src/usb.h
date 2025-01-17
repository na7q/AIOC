#ifndef USB_H_
#define USB_H_

#include "usb_audio.h"
#include "usb_serial.h"

#define USB_SOF_TIMER       TIM2
#define USB_SOF_TIMER_CCR   TIM2->CCR1
#define USB_SOF_TIMER_HZ    72000000UL

void USB_Init(void);
void USB_Task(void);

#endif /* USB_H_ */
