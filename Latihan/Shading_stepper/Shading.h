#ifndef MotorShading_h
#define MotorShading_h
#include <Arduino.h>

/*
* shading_motor_init
* return : none
* desc : inisialisasi motor stepper yang akan digunakan 
*        parameter pull digunakan untuk memberikan instruksi pulse (sinyal)
*        parameter dir digunakan untuk kontrol arah atau direction
*        parameter en digunakan untuk mengaktifkan/me-nonaktifkan motor stepper
*/
void shading_motor_init (uint8_t pull, uint8_t dir, uint8_t en);

/*
* shading_motor_set
* return : none
* desc : inisiasi motor untuk arah, dan keaktifannya
*        parameter STEPPER_PIN_DIR merupakan nilai dir, tipe Bool (1/0)
*        parameter STEPPER_PIN_EN merupakan nilai en, tipe Bool (1/0)
*/
void shading_motor_set (uint8_t dir, uint8_t STEPPER_PIN_DIR, uint8_t en, uint8_t STEPPER_PIN_EN);

/*
* shading_motor_step
* return : none
* desc : inisiasi motor untuk arah, dan keaktifannya
*        parameter speed_ms merupakan nilai delay, yang membuat kecepatan motor, semakin kecil nilai, semakin cepat motor
*        parameter STEPPER_PIN_PULL merupakan nilai pull, tipe Bool (1/0)
*/
void shading_motor_step (uint8_t speed_ms, uint8_t STEPPER_PIN_PULL);

#endif



