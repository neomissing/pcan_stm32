/*
 * can.c
 *
 *  Created on: 25.07.2015
 *      Author: hd
 */

#include "can.h"

void can_init(void) {

}

void can_set_bitrate(uint8_t channel, uint8_t brp, uint8_t tseg1, uint8_t tseg2, uint8_t sjw) {
  // TODO implement me
	(void)channel;
	(void)brp;
	(void)tseg1;
	(void)tseg2;
	(void)sjw;
}

void can_set_silent(uint8_t channel, uint8_t silent_mode) {
	// TODO implement me
	(void)channel;
	(void)silent_mode;
}


void can_set_led(uint8_t channel, led_mode_t mode, uint32_t timeout) {
	// TODO implement me
	(void)channel;
	(void)mode;
	(void)timeout;
}

void can_set_bus_active(uint8_t channel, uint16_t mode) {
	// TODO implement me
	(void)channel;
	(void)mode;
}
