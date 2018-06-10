# DARKWING #

<http://github.com/hashbang/darkwing>

[![License][license-badge]][license]

[license-badge]: https://img.shields.io/github/license/hashbang/darkwing.svg
[license]: https://github.com/hashbang/darkwing/blob/master/LICENSE.md

## About ##

  DARKWING a pentestesting platform embedded inside a USB Cable. It is intended
  as a more covert alternative to the USB Rubberduck, designed to run a wider
  range of payloads that take advantage of the modern user habit of blindly
  trusting USB Type C cables.

  We use a powerful STM32F4 platform on a thin flexible PCB that can easily
  fit inside a USB Type C connector housing and be soldered directly to the
  connector.

  It is named DARKWING after the most stealthy of all ducks. We also make it
  ALL CAPS because it makes it look more like an NSA project.

## Use Cases ##

  * Run USB Rubber Ducky payloads
  * Installing malware via keyboard emulation
  * Sound exfiltration by emulating speakers
  * Screenshot by emulating USB-Type-C HDMI device
  * Mouse movement/click injection to prevent screen locking
  * Hidden data storage via internal flash memory
  * USB Device Authentication via custom kernel driver and device certificates.
  * Password management via hidden keyboard shortcuts and key injection
  * Device reverse engineering by logging USB packets from connected device

## Requirements ##

  * Development
    * [STM32F4 Development board][1]
  * Production
    * [USB Type C DIY cable ends][2]
    * [STM32F407VGT6 32BIT 1MB FLASH 100LQFP][3]

  [1]: https://www.digikey.com/product-detail/en/stmicro/STM32F407G-DISC1/497-16287-ND/5824404
  [2]: http://a.co/i35r3DK]
  [3]: https://www.digikey.com/product-detail/en/stmicroelectronics/STM32F407VGT6/497-11605-ND/2747117

## Usage ##

TBD

## Notes ##

  Use at your own risk. You may be eaten by a grue.
