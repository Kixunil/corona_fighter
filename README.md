# Corona virus fighter

A device helping you fight the Corona virus by avoiding contact with the tap.

## About

This is a code for a device that can help you fight Corona virus by turning the
water on and off for you, without the need to touch anything. It uses Arduino,
servo motor, ultrasound sensor, a stick, and shitload of ductape.

You can watch a [video of the Corona Fighter in action](https://twitter.com/kixunil/status/1238852703238963201).

## Usage

* Connect servo to pin 6
* Connect trigger of ultrasound sensor to pin 7
* Connect echo of ultrasound sensor to pin 8
* Load the code
* Wave with your hand in front of it

## Disclaimer

**Use of Corona Fighter will NOT make you invulnerable to Corona virus! It will only help. Don't assume perfect safety, use responsibly!**

## Troubleshooting

Use more ductape.

## Known issues

* The device sometimes triggers on its own right after start
* The code is in unsafe language. Fortunately Corona wasn't observed exploiting C++ yet, so this should be fine. In case such thing happens in the wild, I will rewrite it in Rust.

## License

WTFPL
