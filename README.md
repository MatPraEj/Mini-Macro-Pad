# Mini-Macro-Pad

Mini macropad is a 6 key "macropad" with a rotary encoder and OLED Display to allow for flexibility and the very important cool factor :D.

Why macropad in ""? Although it can function as a macropad when used with VIA, its main purpose is to act as a second mini keyboard with the RCTL, RSFT, LEFT, UP, DOWN, RIGHT buttons to serve as a sort of controller for PC where the second player plays on arrow keys and two buttons!

## Features:
- a Sturdy case with multiple points where the PCB is supported to minimize flex
- a recessed USB-C port
- an EC11 Rotary encoder for versatilty
- a 32x128 OLED display for cool factor
- 6 keys
- and [VIA](https://www.caniusevia.com/) support

## CAD Model
The Mini macropad is put together using 4 M3x16mm bolts and 4 heatset inserts, with another 1 M3x6 bolt holding the PCB (there are slots for 3 if it turns out 1 is unstable)

There are 3 seperate pieces of the case: the bottom where the PCB sits on a raised ledge around the edges as well as center supports; the middle part that acts as the plate for keyswitches, it is 3mm thick to allow for sturdiness but has a recess around the switch holes so they can clip in; and the top which covers the middle plate and sits flush with the bottom of the keycaps.

<img src=assets/CAD.png alt="the whole macropad assembly" width="500"/>

Learning Fusion 360 was a bit of a pain but I got the hang of it, now I can describe my experience only with one word: Nifty.

## PCB
Below is my PCB made in KiCad, Joe Scotto's guide's came in incredibly handy with this one.

I also snuck in a silkscreen easter egg of a sketch of the mini macropad :D

Schematic
<img src=assets/schematic.jpeg alt="the PCB schematic" width="500"/>

PCB
<img src=assets/pcb.jpeg alt="the PCB" width="500"/>

## Firmware
I used [QMK](https://qmk.fm/) for the firmware here, it was a massive pain to setup but if VIA works (fingers crossed!) it will be worth it, if it doesn't I'll do whatever to make it work.

By default:
- the rotary encoder changes volume and mutes/unmutes media when pressed
- the 6 keys act as a mini gamepad posing as UP, DOWN, LEFT, RIGHT and RCTL and RSFT
- the OLED screen displays an animation of a seal (by request of a friend)

VIA will allow me to change these keyboard mappings, allowing flexibility and allowing me to use it as an actual macropad :D

## BOM
Below is everything I'll need to build this:
- 6x Cherry MX Switches
- 6x DSA Keycaps
- 4x M3x5x4 Heatset inserts
- 4x M3x16 SHCS Bolts
- 1x M3x6 SHCS Bolt (I will source this myself)
- 7x DO-35 Diodes
- 1x 0.91" 128x32 OLED Display
- 1x EC11 Rotary Encoder
- 1x Seed Studio XIAO RP2040
- 2x 2.54mm 1x7 pin headers
- 1x 2.54mm 1x4 pin header
- 1x Case (3 3d printed parts)
- 1x Custom PCB
