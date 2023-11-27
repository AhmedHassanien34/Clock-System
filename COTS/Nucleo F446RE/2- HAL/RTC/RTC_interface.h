


/********************************************************************************************/
/* Guard of file will call one time in .c  			                                        */
/********************************************************************************************/
#ifndef RTC_INTERFACE_H
#define RTC_INTERFACE_H



typedef enum
{
	SUNDAY = 1,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
}DS1307_DAYS_t;


typedef struct
{
    uint8_t Seconds ;
    uint8_t Minutes ;
    uint8_t Hours ;
    DS1307_DAYS_t Day ;
    uint8_t Date ;
    uint8_t Month ;
    uint8_t Year ;

} DS1307_Config_t;


#endif
/********************************************************************************************/
/* END OF FILE: RTC_interface.h                                                             */
/********************************************************************************************/
