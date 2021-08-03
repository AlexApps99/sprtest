#!/bin/bash
# Delete existing register dump
mdel -i ~/.local/share/dolphin-emu/Wii/sd.raw ::/spr_log.txt
# Build program, and run it on headless Dolphin
make && timeout -s 9 10 dolphin-emu-nogui -e wii.dol -p headless
# Extract the register dump and filter out the zeroed ones (Dolphin has plenty of those)
mcopy -i ~/.local/share/dolphin-emu/Wii/sd.raw ::/spr_log.txt - | grep -v ':0x00000000$'
