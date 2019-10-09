#!/bin/bash
make -f Makefile.rev1 KEYMAP=custom
sudo avrdude -p atmega32u4 -P /dev/ttyACM0  -c avr109  -U flash:w:adb_usb_rev1.hex
make -f Makefile.rev1 clean
