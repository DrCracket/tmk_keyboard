#!/bin/bash
make -f Makefile.32u4 KEYMAP=plain 
sudo avrdude -p atmega32u4 -P /dev/ttyACM0  -c avr109  -U flash:w:ps2_usb_32u4.hex
make -f Makefile.32u4 clean
