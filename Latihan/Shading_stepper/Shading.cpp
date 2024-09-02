#ifndef MotorShading_h
#define MotorShading_h
#include <Arduino.h>

void shading_motor_init (uint8_t pull, uint8_t dir, uint8_t en); // initialize pin-pin yang digunakan pada motor stepper
void shading_motor_set (uint8_t dir, uint8_t en, uint8_t STEPPER_PIN_EN, uint8_t STEPPER_PIN_DIR); // instruksi pergerakan motor
void shading_motor_step (uint8_t speed_ms, uint8_t STEPPER_PIN_PULL);
  
void shading_motor_init (uint8_t pull, uint8_t dir, uint8_t en) {
  pinMode(pull, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(en, OUTPUT);
}

void shading_motor_set (uint8_t dir, uint8_t STEPPER_PIN_DIR, uint8_t en, uint8_t STEPPER_PIN_EN) {
    digitalWrite(STEPPER_PIN_EN, en);
    digitalWrite(STEPPER_PIN_DIR, dir);
}

void shading_motor_step (uint8_t speed_ms, uint8_t STEPPER_PIN_PULL) {
    digitalWrite(STEPPER_PIN_PULL, 1);
    delay(speed_ms);
    digitalWrite(STEPPER_PIN_PULL, 0);
    delay(speed_ms);
}
#endif



