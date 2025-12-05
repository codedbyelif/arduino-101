## Details of Analog Reading and Serial Communication with Arduino
When you look at the Arduino board, you will see the “Analog Input” pins. These pins allow the voltage on them to be read by converting the signal from analog to digital. Arduino can read 0V and 5V digitally. If there are intermediate values between these two, it cannot detect them directly and treats the incoming voltage as either 0V or 5V based on the threshold.
Thanks to the analog pins, you can detect voltage values between 0V and 5V and convert them into digital data.

To obtain intermediate signal values, you will use an adjustable resistor (a potentiometer). In this activity, you will read the numerical value of the voltage coming from the analog input pin through the serial port.


![Analog Reading](https://user-images.githubusercontent.com/112697142/190644724-2359220f-709e-430c-b819-509a8e4ba646.PNG)