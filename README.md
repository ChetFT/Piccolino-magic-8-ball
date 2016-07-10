# Piccolino-magic-8-ball
Magic 8 Ball Using Piccolino

Parts:

Piccolino with display from
http://www.piccolino.rocks

FTDI programmer to connect the Piccolino to the Arduino development enviornment on your PC
http://www.piccolino.rocks

Arduino development enviornment:
https://www.arduino.cc/en/Main/Software

Amazon gift card case. There are several from which to choose. They have a nice window in the bottom for the display.
https://www.amazon.com/Amazon-com-Gift-Black-Classic-Design/dp/B0160LI5T0/ref=sr_1_7?s=gift-cards&ie=UTF8&qid=1468155887&sr=1-7&keywords=gift+card

I used a tilt-switch from the junk box. If you buy a new one, it should be able to carry 20 mA of current. The tilt switch turns the unit on when the box is turned upside down (revealing the display), and turns the unit off when turned right-side-up. Here's one that will work OK:
https://www.amazon.com/uxcell®-Motion-Position-Mercury-Switch/dp/B00TX5YAF4/ref=sr_1_7?ie=UTF8&qid=1468157001&sr=8-7&keywords=tilt+switch

3x AAA batteries

Instructions:
The arduino web site referenced above will get you started with the programming interface for your PC. The piccolino website will give you specific instructions on how to get the piccolino board working with the programming interface. You need to select the correct board type in the enviornment. Under tools/board select Arduino Pro Pro Mini, and under tools/port select your serial port.

Connect approx 3-inch long pieces of wire to the analog inputs (piccolino pins 23, 24, 25). The wires act as antennas, so the second end of the wires is left unattached. This provdes the noise needed for the 8-Ball answer randomification. The antennas work best if they are rounted in a circle around the piccolino pcb (Google Michael Faraday and electromagnetic induction if you want to know why that is). Connect the 3 AAA batteries in series. Connect the resuting 4.5V battery plus terminal to the tilt-switch. Connect the other pin of the tilt-switch to piccolino pin 28. Connect the battery minus terminal to piccolino pin 27.

Tools:
Soldering the wires works best, but another way is to use wire-wrap. Google wire wrap tool, or you can get a tool and wire here:

https://www.amazon.com/Electronix-Express-03WTE-Wire-Gauge/dp/B00BFYE0CY/ref=sr_1_1?ie=UTF8&qid=1468156811&sr=8-1&keywords=wire+wrap+tool

https://www.amazon.com/Breadboard-B-30-1000-Plated-Copper-Wrapping/dp/B008AGUAII/ref=sr_1_3?ie=UTF8&qid=1468156936&sr=8-3&keywords=wire+wrap+wire

The antennas, being about 3 inches in length, allow the system to be perturbed by the cosmic microwave background, which radiation began as the flash of light during recombination when the universe was much much smaller and much much more homogenous. Since these microwave photons are likely entangled with the rest of the universe (including the matter in the user of the device), the 8-ball is instantaneously informed of the changes in state of the rest of the universe, and indeed the rest of the universe is informed about changes in state of the 8-ball. Use with caution since there is a non-zero probability that use will cause a quantum fluctuation resuling in a re-start of the universe - i.e. only ask if it is really, really important. :)



