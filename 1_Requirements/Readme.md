# Automatic Access Control System Using Arduino and RFID Technology
# Introduction
The Automatic Access control system is security based system buit by using Embedded Technology
Wireless  security  based  applications have  rapidly  increased due  to  the  dramatic improvement  of modern technologies. Many access control systems were designed and implemented based on different types of  wireless  communication  technologies  by  different  people.  Radio  Frequency  Identification  (RFID)  is  a contactless  technology  that  is  widely  used  in several  industries  for  tasks like  access  control  system,  book tracking in libraries, tollgate system, supply chain management, and so on.The RFID-based access control system using Arduino  was designed. The system  combines RFID  technology and  Arduino to accomplish the required task. When the RFID reader installed at the entrance detects an RFID tag, the system captures the  user unique identifier (UID) and compares it  with the stored UID for  a match. If the  user UID captured match with any of the stored UID, access is granted; otherwise access is  denied. The results clearly show  that the  system  is  cheap, effective,  and  a reliable  means of  granting or  denying access  in a  secured environment.  Keywords Ard
# Objective of Project
Security systems play an important role to prevent unauthorized personnel entry into a secured environment, which may include physical and intellectual property. Various door locks such as mechanical locks or electrical locks were designed to attain basic security requirements. Basically, these locks can be easily hacked by unwanted people thereby allowing unauthorized personnel into secured premises. Automatic access control system has become necessary to overcome the security threats faced by many organizations in Nigeria. By installing the system at the entrance will only allow the authorized personnel to enter the organization. The system is not restricted to main entrance installation, but can be installed at various entrances within the organization to track personnel movement thereby restricting their access to areas where they  not authorized.The project is developed by using Embedded system and Rfid technology.
# Embedded System
## Introduction to Embedded System
An Embedded System is a special-purpose system in which the computer is completely encapsulated by or dedicated to the device or system it controls. Unlike a general-purpose computer, such as a personal computer, an embedded system performs one or a few pre-defined tasks, usually with very specific requirements. Since the system is dedicated to specific tasks, design engineers can optimize it, reducing the size and cost of the product.Each day, our lives become more dependent on 'embedded systems', digital information technology that is embedded in our environment. More than 98% of processors applied today are in embedded systems.
## Definition
"An Embedded System is a combination of both software and hardware,Which perform specific task".Embedded system is defined as, for a particular/specific application implementing the software code to interact directly with that particular hardware what we built. Software is used for providing features and flexibility.
## Examples of Embedded System
Embedded systems are found in wide range of application areas.The following are the different examples,
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
## History of Embedded Systems
The first recognizably modern embedded systems were the Apollo Guidance Computer, developed by “Charles Stark Draper” at the MIT Instrumentation Laboratory. At the project inception, the Apollo guidance computer was considered the riskiest item in the Apollo project as it employed the then newly developed monolithic integrated circuits to reduce the size and weight. An early mass produced embedded system was the Autonetics D-17 guidance computer for the Minuteman missile, released in 1961.It was built from transistor logic and had a hard disk for main memory .When the Minuteman II went into production in 1966, the D-17 was replaced with a new computer that was the first high volume use of integrated circuits. This program alone reduced prices on quad and gate ICs from $1000/ each to $3/ each permitting their use in commercial products.Since these early applications in the 1960s, embedded systems  have come down in price and there has been a dramatic rise in processing power and functionality. The first microprocessor for example, the Intel 4004, was designed for calculators and other small systems but still required many external memory and support chips. In 1978 National Engineering Manufactures Association released a “standard” for programmable microcontrollers, including almost any computer based controllers, such as single board computers, numerical and event based controllers. Embedded Systems are designed to some specific task, rather than be a general-purpose computer for multitasks. Some also have real-time performances constraints that must be met, for reasons such as safety and usability; others may have low or no performance requirement, allowing the system hardware to be simplified to reduce cost.
## Features
The following are the features of an embedded system,
* Embedded Systems are very powerful and complicated. 
* These systems have low power consumption CPU with a limited amount of memory.
* Versatile in nature.
* Many embedded systems use very small operating systems.
* The embedded system is dedicated to specific tasks, design engineers can optimize it, reducing the size and cost of the product, or increasing the reliability and performance.
* Embedded Systems have to operate in extreme environment conditions such as very high temperature & humidity. 
## Characteristics
Embedded computing systems generally exhibit rich functionality; complex functionality is usually the reason for introducing CPUs into the design. However, they also exhibit many non-functional requirements that make the task especially challenging:

* Real-time deadlines that will cause system failure if not met
* Multi-rate operation
* In many cases, low power consumption
* Low manufacturing cost, which often means limited code size.
## Architecture of an Embedded System
Every embedded system consists of custom-built hardware built around a Central Processing Unit (CPU). This hardware also contains memory chips onto which the software is loaded. The software residing on the memory chip is also called the ‘firmware’.
![](https://www.eetimes.com/wp-content/uploads/media-1073730-embedded-systems-architecture-fig1.jpg)
An Embedded System consits of set of components.They are,
* Central Processing Unit (CPU)
* Memory (Read-only Memory and Random Access Memory)
* Input Devices
* Output devices
* Communication interface
* Application-specific circuitry

The block diagram for an Embedded System is shown below,
![](https://qph.fs.quoracdn.net/main-qimg-5fa73bbb1a2e2a30420f2423b308c67b)
![](https://3.bp.blogspot.com/-pAVc60227_8/TXZrW3k35CI/AAAAAAAAAEo/wZcCCa1Is-g/s1600/Embedded_Systems_Block_Diagram.png)
## Explanation
Explanation about different blocks os an Embedded System given by,
### Central Processing Unit(CPU)
The Central Processing Unit can be  a microcontroller, microprocessor or Digital Signal Processor (DSP). A micro-controller is a low-cost processor. Its main attraction is that on the chip itself, there will be many other components such as memory, serial communication interface, analog-to digital converter etc. So, for small applications, a micro-controller is the best choice as the number of external components required will be very less. On the other hand, microprocessors are more powerful, but you need to use many external components with them. D5P is used mainly for applications in which signal processing is involved such as audio and video processing.
### Memory
The memory is categorized as Random Access 11emory (RAM) and Read Only Memory (ROM). The contents of the RAM will be erased if power is switched off to the chip, whereas ROM retains the contents even if the power is switched off. So, the firmware is stored in the ROM. When power is switched on, the processor reads the ROM; the program is program is executed.
### Input devices
Unlike the desktops, the input devices to an embedded system have very limited capability. There will be no keyboard or a mouse, and hence interacting with the embedded system is no easy task. Many embedded systems will have a small keypad-you press one key to give a specific command. A keypad may be used to input only the digits. Many embedded systems used in process control do not have any input device for user interaction; they take inputs from sensors or transducers 1’fnd produce electrical signals that are in turn fed to other systems.
### Output devices
The output devices of the embedded systems also have very limited capability. Some embedded systems will have a few Light Emitting Diodes (LEDs) to indicate the health status of the system modules, or for visual indication of alarms. A small Liquid Crystal Display (LCD) may also be used to display some important parameters.
### Communication interfaces
The embedded systems may need to, interact with other embedded systems at they may have to transmit data to a desktop. To facilitate this, the embedded systems are provided with one or a few communication interfaces such as RS232, RS422, RS485, Universal Serial Bus (USB), IEEE 1394, Ethernet etc.
### Application-specific circuitry
Sensors, transducers, special processing and control circuitry may be required fat an embedded system, depending on its application. This circuitry interacts with the processor to carry out the necessary work. The entire hardware has to be given power supply either through the 230 volts main supply or through a battery. The hardware has to design in such a way that the power consumption is minimized.
## Debugging of an Embedded Systems
Embedded debugging may be performed at different levels, depending on the facilities available. 
* Interactive resident debugging using the simple shell provided by the embedded operating system.
* An in-circuit debugger (ICD), a hardware device that connects to the microprocessor via a JTAG or NEXUS interface. 
* An in- circuit emulator (ICE) replaces the microprocessor with a simulated equivalent, providing full control over all aspects of the microprocessor.
* External debugging using logging or serial port output to trace operating using either a monitor in flash or using a debug server like the Remedy Debugger which even works for heterogeneous multi core systems.
