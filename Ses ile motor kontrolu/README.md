## Motor Control with Sound
n this example, you will control the motor based on the value read by the sound sensor.
The sound sensor measures the ambient sound level using a microphone and provides a digital output. The sensor circuit amplifies the sound signal from the microphone and converts the analog audio signal into a digital signal according to a threshold level.

Since motors draw high current, a motor driver board is used in such circuits. The motor driver supplies power to the motor according to the signal it receives from the Arduino. This allows you to safely control the motor without damaging the Arduino.

The sound sensor has a built-in potentiometer that allows you to adjust the sound threshold level. This adjustment can be made using a small screwdriver.

![Motor Control With Sound](https://user-images.githubusercontent.com/111511331/191266510-b4533044-dbac-4793-a0cc-18a97d8194fe.png)
