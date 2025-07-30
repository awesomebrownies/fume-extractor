# Fume-Extractor Reference Guide

Since I don't have the actual board and components, it's impossible to test the code I will create. I've linked together a network of relevant tutorials I will be using to problem shoot.

The firmware will be written in C++ using the Arduino IDE & many libraries.

## Parts

- How to control PWM on fans
- Reading button presses

### PWM on fans

https://fdossena.com/?p=ArduinoFanControl/i.md

### Reading Buttons

Since my buttons are connected to GND and a pin, I need to set the GPIO pins to PULL UP mode, and then detect the current state with the digital read function

```
pinMode(buttonPin, INPUT_PULLUP);
//and also
int buttonState = digitalRead(buttonPin);
```
