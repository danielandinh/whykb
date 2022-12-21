# handwired/whykb

![front](https://user-images.githubusercontent.com/108564248/208898033-6bb7d656-bd04-488e-bf8b-d9106bb84435.jpg)

*Handwired keyboard kinda like a 40% but with arrow cluster, supports OLED Display and Rotary Encoder*

* Keyboard Maintainer: [Daniel Dinh](https://github.com/danielandinh)
* Hardware Supported: *MUC: [rp2040](https://joshajohnson.com/sea-picro/), OLED: SSD1306*

Make example for this keyboard (after setting up your build environment):

    make handwired/whykb:default

Flashing example for this keyboard:

    make handwired/whykb:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
