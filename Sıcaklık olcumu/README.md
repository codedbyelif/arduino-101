## Temperature Measurement with an NTC Thermistor
In this application, as in other temperature-reading setups, we will read an analog signal and interpret it to perform the desired task. An NTC thermistor is a component whose internal resistance decreases as temperature increases. One commonly used alternative is the PTC thermistor, which reacts by increasing its internal resistance when the temperature rises.

To convert the data read from an NTC thermistor into temperature units, the signal needs to be processed. Since the resistance value of an NTC changes nonlinearly with temperature, logarithmic functions are required. For now, you don’t need to study these functions in detail—knowing the overall process is enough. After you understand the logic of using an NTC sensor, you can examine this part more deeply.

![](https://user-images.githubusercontent.com/111511331/190996612-c9b0154c-50ab-4f7e-94fa-27c8fb9f8c7e.png)