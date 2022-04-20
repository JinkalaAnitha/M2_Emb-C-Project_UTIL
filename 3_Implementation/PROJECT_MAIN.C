#ifndef _DOOR_DETECTOR_H
#define _DOOR_DETECTOR_H
/**
 * @file Door_detector.h
 * @author Anitha J ()
 * @brief Project to detect the door is opened or not with the indication of LED glow and Buzzer sound that are connected to AVR328 MCU GPIO Pin
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 *

/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (500)   /**< LED OFF time in milli seconds */

#define BUZZER_ON (0xff)    /**<Buzzer ON for door detection */
#define BUZZER_OFF  (0x00)  /**< BUzzer OFF for door detection */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the state of the door opened or closed
 * 
 * @param state Pin level to which the LED Pin should be set
 */
int main(void);


#endif /** _DOOR_DETECTOR_H */
