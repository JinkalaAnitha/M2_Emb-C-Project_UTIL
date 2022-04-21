# Smart Door Lock System
# Table of Content
* Abstract
* Introduction
* Embedded System
   * Definition
   * Features
   * EXplanation
   * Advantages and Applications
* Block Diagram
* Control Flow and UML diagrams
* Specifications
   * Hardware 
   * Software
   * Embedded C language
* Components
   *  ATmega328
   *  LED
   *  12v Adapter
   *  LCD I2C Module
   * RFID Reader
   * RFID Tags
   * LCD & I2C Module
   * Servo Motor
   * Door Lock
   * Iron Stick
   * Foam Board
* Test Plan
* Circuit Diagram PNG
* SWOT Analysis
* 4W's & 1H
* Output PNG
# Abstract
Brief Explanation about project,

A digital door lock system is equipment that uses the digital information such as a secret code, semi-conductors, smart card, and finger prints as the method for authentication instead of the legacy key system. In our proposed system, a ZigBee module is embedded in digital door lock and the door lock acts as a central main controller of the overall home automation system. Technically, our proposed system is the network of sensor nodes and actuators with digital door lock as base station. A door lock system proposed here consists of RFID reader for user authentication, touch LCD, motor module for opening and closing of the door, sensor modules for detecting the condition inside the house, communication module, and control module for controlling other modules. Sensor nodes for environment sensing are deployed at appropriate places at home.
# Introduction
Security systems play an important role to prevent unauthorized personnel entry into a secured environment, which may include physical and intellectual property. Various door locks such as mechanical locks or electrical locks were designed to attain basic security requirements. Basically, these locks can be easily hacked by unwanted people thereby allowing unauthorized personnel into secured premises. Automatic access control system has become necessary to overcome the security threats faced by many organizations in Nigeria. By installing the system at the entrance will only allow the authorized personnel to enter the organization. The system is not restricted to main entrance installation, but can be installed at various entrances within the organization to track personnel movement thereby restricting their access to areas where they not authorized.The project is developed by using Embedded system and Rfid technology.
# Embedded System
An Embedded System is a special-purpose system in which the computer is completely encapsulated by or dedicated to the device or system it controls. Unlike a general-purpose computer, such as a personal computer, an embedded system performs one or a few pre-defined tasks, usually with very specific requirements. Since the system is dedicated to specific tasks, design engineers can optimize it, reducing the size and cost of the product.Each day, our lives become more dependent on 'embedded systems', digital information technology that is embedded in our environment. More than 98% of processors applied today are in embedded systems.

## Definition
"An Embedded System is a combination of both software and hardware,Which perform specific task".Embedded system is defined as, for a particular/specific application implementing the software code to interact directly with that particular hardware what we built. Software is used for providing features and flexibility.

## Features
* Embedded Systems are very powerful and complicated.
* These systems have low power consumption CPU with a limited amount of memory.
* Versatile in nature.
* Many embedded systems use very small operating systems.
* The embedded system is dedicated to specific tasks, design engineers can optimize it, reducing the size and cost of the product, or increasing the reliability and performance.
* Embedded Systems have to operate in extreme environment conditions such as very high temperature & humidity.
## Applications
* Automatic Teller Machines
* Cellular telephone and telephone switches
* Computer network equipment
* Computer printers
* Disk drives
* Home automation products
* Handheld calculators
* Household appliances
* Medical equipment
* Measurement equipment
* Multifunction wrist watches
* Multifunction printers
# Block Diagram

![](https://www.researchgate.net/profile/Michael-Okundamiya/publication/323228541/figure/fig1/AS:594755457142784@1518812159094/Architecture-of-the-proposed-RFID-based-security-system.png)

# Control Flow and UML diagrams
![](https://hackster.imgix.net/uploads/attachments/906018/flow_qSLgiSu4tf.jpg?auto=compress%2Cformat&w=680&h=510&fit=max)

![](https://www.researchgate.net/publication/327900947/figure/fig2/AS:675316179693568@1538019332991/Use-case-diagram-in-RFID-based-integrated-information-system.ppm)
# Specifications
 ## Hardware 
 The hardware components are used to built the RFID Door Lock System and madec cirvuit by hardware.
 ## Software
 Simulate the hardware by using software.Here the hex fill will created and by using software dump the code into ATmega328 Microcontroller
  ## Embedded C language
  The programming for Atmega328 implemented using basic C programming languge.Develop the code using functions,loops and structures etc.
# Components
## ATmega328
ATmega328 is an 8-bit, 28-Pin AVR Microcontroller, manufactured by Microchip, follows RISC Architecture and has a flash-type program memory of 32KB.Atmega328 is the microcontroller, used in basic Arduino boards i.e Arduino UNO, Arduino Pro Mini and Arduino Nano.
* It has 8 Pins for ADC operations, which all combine to form PortA ( PA0 – PA7 ).
* It also has 3 built-in Timers, two of them are 8 Bit timers while the third one is 16-Bit Timer.
* It operates ranging from 3.3V to 5.5V but normally we use 5V as a standard.
* Its excellent features include cost-efficiency, low power dissipation, programming lock for security purposes, real timer counter with separate oscillator.
* It’s normally used in Embedded Systems applications. You should have a look at these Real Life Examples of Embedded Systems, we can design all of them using this Microcontroller.
## RFID Reader
 The RFID reader is a network-connected device that can be portable or permanently attached. It uses radio waves to transmit signals that activate the tag. Once activated, the tag sends a wave back to the antenna, where it is translated into data. The transponder is in the RFID tag itself.
## RFID Tags
RFID tags are a type of tracking system that uses radio frequency to search, identify, track, and communicate with items and people. Essentially, RFID tags are smart labels that can store a range of information from serial numbers, to a short description, and even pages of data.
## Servo Motor
A servo motor is an electromechanical device that produces torque and velocity based on the supplied current and voltage. A servo motor works as part of a closed loop system providing torque and velocity as commanded from a servo controller utilizing a feedback device to close the loop.
## Foam Board
The total circuit ,Which built on Foam Board By Soldering the components.
## I2C LCD Display
I2C_LCD is an easy-to-use display module, It can make display easier. Using it can reduce the difficulty of make, so that makers can focus on the core of the work.It consumes only two I/O pins that are not even part of a set of digital I/O pins and can also be shared with other I2C devices.
## LED
The LED Stands for Light Emitting Diode.LED is a semiconductor device used in many electronic devices, mostly used for indication purposes. It is used widely as indicator during test for checking the validity of results at different stages.It is very cheap and easily available in variety of shape, color and size. The LEDs are also used in designing of message display boards and traffic control signal lights etc.
## 12V Adapter
A twelve-volt battery has six single cells in series producing a fully charged output voltage of 12.6 volts. A battery cell consists of two lead plates a positive plate covered with a paste of lead dioxide and a negative made of sponge lead, with an insulating material (separator) in between.
# Test Plan
## High Level Test Plan
|  Test ID  |  Description  |  Expected Input  |  Expected Output  |  Status  |
| ------  | ------  | ------ | ------ | ------ |
|  H01  |  Writing Code  |  Compiling the Code  |  No Errors  |  Implemented  |   
|  H02  |  Generating Hex FIle  |  Hex File  |  Hex File  |  Implemented  |
|  H03  |  Making the Circuit  |  Components  |  Circuit  |  Implemented  |
|  H04  |  Buzzer  |  Component  |  Buzzer sound  |  Implemented  |
|  H05  |  Input RFID Tag  |  Correct tag with  Authorized Person  | Door Opened| Implemented  |
|  H06  |  Input RFID Tag  |  Wrong Tag and Unauthorized Person |Door Closed or Doen not Opened|  Implemented  |
|  H07  |  Input Password  |  No Input  |  Count down display  |  Implemented  |

## Low Level Test Plan
|  Test ID  |  Description  |  Expected Input  |  Expected Output  |  Status  |
| ------  | ------  | ------ | ------ | ------ |
|  L01  |  Library files  |  Added Library files  |  Execution without Errors  |  Implemented  |   
|  L02  |  Countdown display  |  Run  |  Display  |  Implemented  |
|  L03  |  Circuit   |  Implementing Circuit    |  Run Circuit  |  Implemented  |
# Circuit Diagram PNG

![Simulation-Door Lock Indication With LED and BUZZER](https://user-images.githubusercontent.com/101356849/164372036-8e12727b-3286-4b98-9a73-78a43c74becb.jpg)

# SWOT Analysis
The SWOT Analysis is given by

![](https://www.researchgate.net/publication/345434985/figure/fig1/AS:955231005323264@1604756227559/SWOT-Analysis-of-Traditional-Horsemanship-and-Hoof-Care.png)

* Strenghts: Allows authorized persons only and blocks unauthorized persons.

* Weakness: If the person forgotor lost the RFID Reader Tag then no entry.

* Oppurtunities: Can be extended for WiFi,Bluetooth,Zigbee,Finger print and Face recognition etc.

* Threats: No major threats
# 4W's & 1H:
* Who: Can be used by every person.
* What: For security purpose to allow authorized persons and does not allow unauthorized persons.
* When: Can be utilized when a person needs an security toward their home,office,organization and building.
* Where: House, Offices
* How: By using ATmega328 and other components.
# Detail Requirements
## High Level Requirements

|  ID  |  Description  |
| ------  | ------  |
|  HLR1  |  LCD for displaying Permission  Accessed, Denied | 
|  HLR2  |  Setting delay |
|  HLR3  |  Power Source or 12V Adapter |
|HLR4|RFID Reader and RFID Tags|

## Low Level Requirements

|  ID  |  Description  |
|  ------  |  ------  |
|  LLR1  |  Battery Backup  |
|  LLR2  |  Time Format Adjustment  |
|  LLR3  |  Temperature Adjustment  |

# Output 

![Simulation-Door Lock Indication With LED and BUZZER](https://user-images.githubusercontent.com/101356849/164372036-8e12727b-3286-4b98-9a73-78a43c74becb.jpg)

## Door Opened 

![Simulation2-Door Opened](https://user-images.githubusercontent.com/101356849/164372205-e2c6d05f-b870-43d2-8472-68331d7c2a30.jpg)

## Door Closed

![Simulation1-Door Closed](https://user-images.githubusercontent.com/101356849/164372266-830aeedf-38cc-46e1-923e-254079100763.jpg)





