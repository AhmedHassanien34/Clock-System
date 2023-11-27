

/********************************************************************************************/
/* Include libraries                                                                        */
/********************************************************************************************/
#include <stdint.h>

/********************************************************************************************/
/* Include Interface Files in MCAL                                                          */
/********************************************************************************************/


/********************************************************************************************/
/* Include Component Files                                                                  */
/********************************************************************************************/
#include "RTC_interface.h"
#include "RTC_private.h"
#include "RTC_config.h"

static uint32_t uint2bcd(uint32_t ival)
{
	return ((ival / 10) << 4) | (ival % 10);
}

void Ds1307_init(DS1307HourMode mode)
{

}

uint8_t Ds1307_seconds(void)
{

}

uint8_t Ds1307_minutes(void)
{

}

uint8_t Ds1307_hours(void)
{

}

uint8_t Ds1307_date(void)
{

}

void Ds1307_set_seconds(uint8_t seconds)
{

}

void Ds1307_set_minutes(uint8_t minutes)
{

}

void Ds1307_set_hours(uint8_t hours)
{

}

void Ds1307_set_year(uint8_t year)
{

}

void  Ds1307_write_register(uint8_t reg,uint8_t data)
{
	device_data[0] = reg;
	device_data[1] = data;
	
	
}

uint8_t Ds1307_read_register(uint8_t reg)
{
	device_data[0] = reg;

	
	return device_data[0];
}


/********************************************************************************************/
/*   END OF FILE: RTC_program.c                                                             */
/********************************************************************************************/
