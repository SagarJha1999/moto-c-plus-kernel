/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __SWTP_H__
#define __SWTP_H__
#include <ccci_config.h>

#ifdef FEATURE_MTK_SWITCH_TX_POWER
//lenovo@lenovo.com 20170122 begin
#define SWTP_EINT_PIN_PLUG_IN        (0)
#define SWTP_EINT_PIN_PLUG_OUT       (21)
//lenovo@lenovo.com 20170122 end

struct swtp_t {
	unsigned int	md_id;
	unsigned int	irq;
	unsigned int	gpiopin;
	unsigned int	setdebounce;
	unsigned int	eint_type;
	unsigned int	curr_mode;
	unsigned int	retry_cnt;
	spinlock_t		spinlock;
	struct delayed_work delayed_work;
};
/****************************************************************************************************************/
/* External API Region called by ccci_swtp object */
/****************************************************************************************************************/
extern int ccci_md_get_state_by_id(int md_id);

#endif
#endif				/* __SWTP_H__ */
