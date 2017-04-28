# Minimal Teensy 3.x Project Template

Based on [Austin Morton's teensy-template](https://github.com/apmorton/teensy-template).

No Arduino? No Wiring? No problem! This repository provides the absolute bare minimum code required to run a C/C++ program on a Teensy 3.x board.

The following changes have been made from the teensy-template project:

- Only the minimum set of headers is included. (No `digitalWrite()` et al. Direct register access must be used.)
- The SysTick interrupt is not enabled. (no `millis()`)
- The RTC is not initialized.
- Basically, the only things the reset handler does are initialize the interrupt vectors, configure the clocks, and call `main()`.

The example program (in `src/main.c`) instructs the CPU to toggle pin 13 (connected to the orange LED) as fast as it can. Viewing the waveform on an oscilloscope should show a 16 MHz square wave (with a 96 MHz system clock). The LED should glow dimly.

The Makefile assumes that the Arduino IDE and [Teensyduino](https://www.pjrc.com/teensy/td_download.html) are installed. I've only tested it on Mac OS X. On Linux you will have to modify the Makefile with the proper location of your ARM toolchain and the Teensy utilities. (`teensy_post_compile`, `teensy_reboot`)
