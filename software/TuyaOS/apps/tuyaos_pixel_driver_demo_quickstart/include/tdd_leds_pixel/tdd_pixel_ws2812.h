/**
* @file tdd_pixel_ws2812.h
* @author www.tuya.com
* @brief tdd_pixel_ws2812 module is used to 
* @version 0.1
* @date 2022-03-03
*
* @copyright Copyright (c) tuya.inc 2022
*
*/

#ifndef __TDD_PIXEL_WS2812_H__
#define __TDD_PIXEL_WS2812_H__

#include "tuya_cloud_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/*********************************************************************
******************************macro define****************************
*********************************************************************/

/*********************************************************************
****************************typedef define****************************
*********************************************************************/

/*********************************************************************
****************************variable define***************************
*********************************************************************/


/*********************************************************************
****************************function define***************************
*********************************************************************/
/**
* @brief  tdd_ws2812_driver_register
*
* @param[in] driver_name
* @param[in] order_mode
* @return 
*/
OPERATE_RET tdd_ws2812_driver_register(IN CHAR_T *driver_name, IN UCHAR_T order_mode);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /*__TDD_PIXEL_WS2812_H__*/

