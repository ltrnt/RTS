#include <TaskManager.h>

const int ledPin = LED_BUILTIN;

int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

  taskManager.scheduleFixedRate(100000, [] {
      if (ledState1 == LOW) {
        ledState1 = HIGH;
      } else {
        ledState1 = LOW;
      }

      digitalWrite(11, ledState1);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(200000, [] {
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }

    digitalWrite(10, ledState2);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(400000, [] {
    if (ledState3 == LOW) { ledState3 = HIGH; } 
    else { ledState3 = LOW; }
    digitalWrite(9, ledState3);
	}, TIME_MICROS);


  taskManager.scheduleFixedRate(500000, [] {
    if (ledState4 == LOW) { ledState4 = HIGH; } 
    else { ledState4 = LOW; }
    digitalWrite(6, ledState4);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(600000, [] {
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(5, ledState5);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(700000, [] {
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    digitalWrite(3, ledState6);
	}, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}