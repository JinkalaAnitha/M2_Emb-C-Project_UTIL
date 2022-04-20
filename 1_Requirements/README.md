# Smart Door Lock System
# Introduction
The Automatic Door Lock System that allow authorized persons and block the access to unauthorized persons using RFID Tags.Which is very secured  and This type of system can not be hacked.

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT0PUnB2Ap_huuIpOLQ3Mj28gnDqdnPOhNeSWndXEiRb4CTSWsjKZB2fSlHxxhl5CyiJ5Q&usqp=CAU)

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRkdyt1ma-WxfzyF3hIHU_YCFxQqbRYBmj_8g&usqp=CAU)
# Basic Requirements
* Hardware Equipment
*  Software
# Requirements to Built Project
The Following are the important requirements to built RFID Door Lock System.They are,
* ATmega328
* RFID Reader
* RFID Tags
* LCD & I2C Module
* Servo Motor
* Door Lock
* Iron Stick
* Foam Board
* Jumper Wires

# ATmega328 Micro-Controller
The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family (later Microchip Technology acquired Atmel in 2016). It has a modified Harvard architecture 8-bit RISC processor core.

The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.
## Features Of ATmega328
|Parameter	|Value  |
|-----------|-------|
|CPU type	|8-bit AVR|
|Maximum CPU speed|	20 MHz|
|Performance	|20 MIPS at 20 MHz|
|Flash memory|	32 KB|
|SRAM	|2 KB|
|EEPROM|	1 KB|
|Package pin count|	28 or 32|
|Capacitive touch sensing channels|	16|
|Maximum I/O pins	|23|
|External interrupts|	2|
|USB interface|	No|
## ATmega328 Micro-Controller Pin Description
The Atmega328 is a very popular microcontroller chip produced by Atmel. It is an 8-bit microcontroller that has 32K of flash memory, 1K of EEPROM, and 2K of internal SRAM.

The Atmega328 is one of the microcontroller chips that are used with the popular Arduino Duemilanove boards. The Arduino Duemilanove board comes with either 1 of 2 microcontroller chips, the Atmega168 or the Atmega328. Of these 2, the Atmega328 is the upgraded, more advanced chip. Unlike the Atmega168 which has 16K of flash program memory and 512 bytes of internal SRAM, the Atmega328 has 32K of flash program memory and 2K of Internal SRAM.

The Atmega328 has 28 pins.

It has 14 digital I/O pins, of which 6 can be used as PWM outputs and 6 analog input pins. These I/O pins account for 20 of the pins.

![](http://www.learningaboutelectronics.com/images/Atmega328-pinout.png)

|Pin Number|	Description	|Function|
|----------|---------------|--------|
|1|	PC6	|Reset|
|2	|PD0	|Digital Pin (RX)|
|3	|PD1	|Digital Pin (TX)|
|4	|PD2	|Digital Pin|
|5	|PD3	|Digital Pin (PWM)|
|6	|PD4	|Digital Pin|
|7	|Vcc	|Positive Voltage (Power)|
|8 |	GND|	Ground|
|9	|XTAL 1|	Crystal Oscillator|
|10	|XTAL 2	|Crystal Oscillator|
|11	|PD5	|Digital Pin (PWM)|
|12	|PD6|	Digital Pin (PWM)|
|13	|PD7|	Digital Pin|
|14	|PB0|	Digital Pin|
|15	|PB1|	Digital Pin (PWM)|
|16	|PB2|	Digital Pin (PWM)|
|17	|PB3|	Digital Pin (PWM)|
|18	|PB4|	Digital Pin|
|19	|PB5|	Digital Pin|
|20	|AVCC	|Positive voltage for ADC (power)|
|21	|AREF|	Reference Voltage|
|22	|GND	|Ground|
|23	|PC0	|Analog Input|
|24	|PC1	|Analog Input|
|25	|PC2	|Analog Input|
|26	|PC3	|Analog Input|
|27	|PC4	|Analog Input|
|28	|PC5	|Analog Input|
## Block Diagram
The block diagram of ATmega328 is given by,

![](https://microcontrollerslab.com/wp-content/uploads/2019/12/ATMEGA328P-Block-Diagram.jpg)
## Applications of ATmega328
The following are the applications of atmega328 microcontroller,
* A complete package including ATmega 328 and Arduino can be used in several different real-life applications.
* It can be used in Embedded Systems Projects.
* It can also be used in robotics.
* Quad-copter and even small aero-plane can also be designed through it.
* Power monitoring and management systems can also be prepared using this device.
* I have designed this Home Security System using Arduino UNO, you should have a look at it.
# RFID (Radio Frequency Identification)
RFID stands for Radio Frequency Identification. RFID is one member in the family of Automatic Identification and Data Capture (AIDC) technologies and is a fast and reliable means of identifying objects. There are two main components: The Interrogator (RFID Reader) which transmits and receives the signal and the Transponder (tag) that is attached to the object. An RFID tag is composed of a miniscule microchip and antenna. RFID tags can be passive or active and come in a wide variety of sizes, shapes, and forms. Communication between the RFID Reader and tags occurs wirelessly and generally does not require a line of sight between the devices. An RFID Reader can read through most anything with the exception of conductive materials like water and metal, but with modifications and positioning, even these can be overcome. 
       
    The Following is the RFID connected with Arduino Uno Board,
![](https://hacksterio.s3.amazonaws.com/uploads/attachments/365518/rfid_circuit_dig_0ww0QIKAqk.jpg)

![](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQoqCCI59RVBJQYQAzUm5S4M6QxrvHKq1ELkg&usqp=CAU)


 In its simplest form a product tag, made of a microchip with a tiny antenna, is attached to a product. An associated tag reader puts out electromagnetic waves. The tag antenna receives the waves and the tag itself draws power from the field generated by the reader, powering the chip, and then modulates the reader signal, sending it back where it is converted into digital data. The electromagnetic waves are harmless at the low end of the spectrum and no more dangerous than a car radio. 
RFID tags come in a wide range of flavors including the passive type described above, battery powered, multi-frequency and tag-talks-first. RFID antenna types can vary too. Whats more, not all RFID systems use low-frequency EM waves. There are read-only tags and read-write tags. There are tags holding up to 2K of product data and tags that contain only a single product ID. Tags can also be used for more than product IDs; they can be used in environmental monitors, security devices, and product integrity mechanisms 
## RFID Frequencies
 Radio waves are the carriers of data between the reader and tags. The approach generally adopted for RFID communication is to allocate frequencies depending on application. The frequencies used cover a wide spectrum.
 These specified bands are
 Very long wave 9 - 135 kHz Short wave 13.56MHz
 UHF 400-1200 MHz Microwave 2.45 and 5.8 GHz
 The allocation of frequencies is regulated by government agencies, requiring care in considering RFID applications in different countries. Efforts at standardization should avert these problems. The many varied applications will work their best at different frequencies; therefore, it is important to understand the requirements before selecting a particular type of RFID system. The most common uses of low frequency systems are in security access, asset tracking and animal identification. They generally have short reading ranges and lower system costs. High-frequency systems are used for such applications as railroad car tracking and automated toll collection.
 ### Frequency Bands
|Band|Regulations|Range|Data speed|ISO/IEC 18000 Section|Remarks|Approximate tag cost in volume(2006)
|----|-----------|-----|----------|--------|--------|-----------|
|LF:120–150kHz |	Unregulated|	10 cm|	Low	|Part 2|Animal identification, factory data collection|	US$1|
|HF: 13.56 MHz	|ISM band worldwide|	10 cm–1 m|Low to moderate	|Part 3|Smart cards (ISO/IEC 15693, ISO/IEC 14443 A, B),ISO-non-compliant memory cards (Mifare Classic, iCLASS, Legic, Felica ...),ISO-compatible microprocessor cards (Desfire EV1, Seos)|	US$0.50 to US$5|
|UHF: 433 MHz|	Short range devices|1–100 m	|Moderate|	Part 7|Defense applications, with active tags|	US$5|
|UHF: 865–868 MHz (Europe) 902–928 MHz (North America)|ISM band|1–12 m	|Moderate to high|	Part 6|EAN, various standards; used by railroads[16]|US$0.15(passive tags)|
|microwave: 2450–5800 MHz|ISM band|	1–2 m|High|	Part 4|802.11 WLAN, Bluetooth standards	|US$25 (active tags)|
|microwave: 3.1–10 GHz|	Ultra wide band|up to 200 m|High|not defined|Requires semi-active or active tags|US$5 projected|
## Signaling
Signaling between the reader and the tag is done in several different incompatible ways, depending on the frequency band used by the tag. Tags operating on LF and HF bands are, in terms of radio wavelength, very close to the reader antenna because they are only a small percentage of a wavelength away.
   
   Types of tags,
   * Passive Tag
     * Passive tags are generally smaller, lighter and less expensive than those that are active and can be applied to objects in harsh environments, are maintenance free and will last for years. These transponders are only activated when within the response range of a reader. The RFID reader emits a low- power radio wave field which is used to power up the tag so as to pass on any information that is contained on the chip.
 
   * Active Tag
     * Active tags differ in that they incorporate their own power source, where as the tag is a transmitter rather than a reflector of radio frequency signals which enables a broader range of functionality like programmable and read/write capability

The following diagram shows the diffent types of tages,

![](https://www.researchgate.net/profile/Jayant-Shekhar-3/publication/332319065/figure/fig3/AS:746026419884032@1554877967405/Type-of-an-RFID-tags.jpg)
# Software
The software manages various hardware devices and systems. The basic idea behind embedded systems software is to control the functioning of a set of hardware devices without compromising on the purpose or the efficiency. Embedded systems software can be compared to the operating systems in computers.
## SimulIDE
SimulIDE is a simple real time electronic circuit simulator, intended for hobbyist or students to learn and experiment with simple electronic circuits and microcontrollers, supporting PIC, AVR and Arduino.This is not an accurate simulator for circuit analysis, it aims to be fast, simple and easy to use, this means simple and not very accurate electronic models and limited features.

    
You can create, simulate and interact with your circuits within minutes, just drag components from the list, drop into the circuit, connect them and push power button to see how it works.

SimulIDE also features a code Editor and Debugger for GcBasic, Arduino, PIC asm and AVR asm. It is still in it's firsts stages of development, with basic functionalities, but it is possible to write, compile and basic debugging with breakpoints, watch registers and global variables.
## AVR Cross Compiler
AVR-GCC is a compiler that takes C language high level code and creates a binary source which can be uploaded into an AVR micro controller. Thus AVR-GCC might be regarded as a 'C' cross compiler for producing AVR code. AVR-libc are 'C' run-time libraries, header files, and documentation primarily for the AVR target and are used in conjunction with AVR-GCC . Please note that AVR-libc and AVRLIB are different sets of libraries but both work with the AVR-GCC compiler.

Once code in 'C' is written for a particular project AVR-GCC will turn C code into assembly language files. AVR-libc includes all the header files that contain the addresses of port and register names, the floating point library, AVR-specific macros, and AVR start-up code. It also provides a lot of documentation, both on the library items itself as well as on a number of general items on the entire tool chain, including a FAQ.

Individual assembler files are then converted into object files. Object files are files of code that AVR chips could run. The linker AVR-ld will take all these assembler files, and cross-reference functions names to create one single object file. The linker will also take modules from the 'C' library and make them into a single object. Normally this linked object is in ELF format and furthermore AVR-objcopy is used to generate a HEX format file.

To install AVR-GCC as well as all AVR-Tools like avr-libc, avr-gcc-c++, avr-binutils, avr-gdb, avr-libc-docs on Fedora 7 and above, as root, just issue the 'yum' command with something like:

      [host] yum install avr-*  
      
Other Linux distributions use the 'apt-get' command in a similar way. For OS-X, CCRMA's PID Wiki has instructions for Setting up your Computer for AVR Development. Fink on OS-X might include AVR-GCC as well AVR-Tools. 
## Visual Studio Code
Visual Studio Code, also commonly referred to as VS Code, is a source-code editor made by Microsoft for Windows, Linux and macOS. Features include support for debugging, syntax highlighting, intelligent code completion, snippets, code refactoring, and embedded Git. Users can change the theme, keyboard shortcuts, preferences, and install extensions that add additional functionality.

Visual Studio Code is a lightweight but powerful source code editor which runs on your desktop and is available for Windows, macOS and Linux.

![](data:image/jpeg;base64,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)
## Embedded C Language
Embedded C is a set of language extensions for the C programming language by the C Standards Committee to address commonality issues that exist between C extensions for different embedded systems.

Embedded C programming typically requires nonstandard extensions to the C language in order to support enhanced microprocessor features such as fixed-point arithmetic, multiple distinct memory banks, and basic I/O operations. The C Standards Committee produced a Technical Report, most recently revised in 2008 and reviewed in 2013,providing a common standard for all implementations to adhere to. It includes a number of features not available in normal C, such as fixed-point arithmetic, named address spaces and basic I/O hardware addressing. Embedded C uses most of the syntax and semantics of standard C, e.g., main() function, variable definition, datatype declaration, conditional statements (if, switch case), loops (while, for), functions, arrays and strings, structures and union, bit operations, macros, etc.
# Desired Features of software
* Reader Master – Should allow editing of various access points and their interface details viz. IP address, Unit ID, Com Port.
* Employee Master - Allows editing of employee details, like name, employee
number, shift, access zones.
* Reader Configuration - Allows modification of reader parameters, like operating mode, door open time, welcome string, Alarm settings, Timeouts, etc. These parameters are also stored in the local database.
* Card Personaliser / Finger Encoding (option): Allows Mifare card/ Finger print encoding based on the employee master information. Needs externally connected personaliser.
* Offline Data Gathering – Periodically polls all the connected readers for swipe data and displays with user photograph if available. Data is available in near real-time(within 30 seconds).
* Headcount – Zonewise presence of employees is available. Alternately employee can be tracked within a zone.
* Clock Data Editing - Allows editing of the time data (by administrators with time data edit permission).
* Database : MYSQL
* Export Function - Export function can be used to export data to a CSV file.
* Time Synchronization - Time can be synchronized of all the connected readers on a
periodic basis.
* Large Data -Upto 10Gb data can be stored in the current tables. Older data is moved
to archives. Instantaneous Reports are available on the current table data.
* Easy of Operation: User can group different readers and employees. Different actions can be applied to selected group of readers or employees.
  * Installation & commissioning -
Installation & commissioning will be completely done by supplier and All
installation related works like electrification,casing-caping & routing of cables as per requirements, carpentry & civil work has been done by supplier with no any extra cost supplier must do arrangement of required material & items for completion of this work.
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





