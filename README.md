# Robot-LED-eyes
In this task I have designed a power circuit for LEDs lighting using voltage regulator and using PWM to minimized power consumption by controlling blinking frequency of LEDs with help of transistors. also, to choose whether to connect LED on series or parallel and to explain why. I have used Tinker CAD to simulate this circuit and you can find it here:
[Tinker CAD link](https://www.tinkercad.com/things/jeBOQKH9Ago-robotic-led-eyes/editel?sharecode=pvDtS9qNMBmcXQoB4dLemtc3LmaJ93Hn0Ijw9mj76ZQ)

**COMPONENTS USED**

I have used **9V power supply** in this circuit, **LM7805 voltage regulator** to change the 9V to 5V, **two capacitors** to minimize voltage variation in 9V side and 5V side, **resistor** and **potentiometer** to control the output voltage in limited  region, **Arduino** to control base signal of switch, **NPN transistor (BJT)** to work as a switch to perform blinking effect of LEDs and finally **2 LED light**s.
Note: It turned out that controlling output voltage using potentiometer is not needed here, but I still didn't remove it from the circuit and it can be used for a changable color LED. LEDs are connected at the output of the voltage regulator series with BJT and I will explain if to connect LEDs series or parallel soon. All the values of components are in the link below as well as connection of the voltage regulator:

[Adjustable voltage using 7805](http://www.learnerswings.com/2014/07/adjustable-output-voltage-regulator.html)

**CODING**

I have used Arduino to control PWM signal of the base signal of BJT transistor to blink the LED every 20mS such that it the duty cycle ratio is 50% (ON for 10mS and OFF for 10mS). The code is attached.

**SERIES OR PARALLEL ??**

For the connection of LED light in real life it is combination of series parallel connection due to adjusting volts and current for each LED.
Here we are using 5mm LED which has nominal current of (16-18 mA) and voltage of (1.8-2.2 V). The output voltage of our voltage regulator circuit here is 5V which is higher thus, I have decided to connect them **SERIES** with using small resistor (about 20 ohms) to minimize current. It is less resistace compared to parallel connection while achieving less power consuming and less components required.

[5mm basic LED datasheet](http://www.sparkfun.com/datasheets/Components/LED/COM-09590-YSL-R531R3D-D2.pdf)

**ATTACHMENTS**

Let me introduce all the attachments in this repository. There are several files with the following extensions: **brd** file, which is a simulation file from Tinker CAD simulation website. **ino** file, which is an Arduino code to control LED blinking. and there are **PNG** files to show the simulation before and after running the simulation and the code beside voltage regulator connection.

If you are working on this in real life please check for the connection of each element carefully as shown in the simulation file of the pictures attached before running for the safety of your tools.

