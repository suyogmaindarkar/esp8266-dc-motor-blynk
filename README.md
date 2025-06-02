#  DC Motor Control using ESP8266 and Blynk IoT

##  Project Overview
This project demonstrates how to control the speed and direction of a **DC motor** using the **ESP8266 NodeMCU** microcontroller and the **Blynk IoT platform**. It combines IoT automation with embedded system control, enabling wireless motor operation via smartphone.

##  Key Features
- Wireless control of DC motor using Blynk IoT App
- Real-time speed adjustment using sliders
- Direction control using buttons
- Integration of L298N motor driver
- Internet-based control using ESP8266 WiFi

##  Skills Gained
- Embedded programming (ESP8266)
- IoT dashboard development using Blynk
- DC motor interfacing with L298N
- Real-time PWM speed control
- Mobile-to-device communication over WiFi

##  Components Used
- ESP8266 NodeMCU
- L298N Motor Driver Module
- DC Motor (12V)
- Power Supply (Battery/Adapter)
- Blynk App (Free version)
- Jumper wires, Breadboard

##  Blynk App Setup
- **Platform:** Blynk (Legacy or Blynk IoT)
- **Widgets:**
  - Button for Direction
  - Slider for Speed (PWM)
  - Label for status (optional)
- **Virtual Pins Used:**
  - `V0` – Motor Speed (Slider)
  - `V1` – Direction Control (Button)

## Code Highlights
- PWM signal generation for speed control
- Digital I/O for direction reversal
- WiFi configuration for Blynk cloud connectivity

##  How to Run
1. Install the Blynk library and ESP8266 board in Arduino IDE.
2. Upload the code to NodeMCU.
3. Configure the Blynk App and link it with your device using Auth Token.
4. Connect the motor and power it through L298N.
5. Start controlling the motor from your phone.

##  Project Status
 -Completed and Tested  
- Ready for further expansion (e.g., Sensor Feedback, Auto Mode)

##  Developed By
**Suyog Pradip Maindarkar**  
B.Tech Electrical Engineering  
Shri Vithal Education & Research Institute (SVERI), Pandharpur

##  Project Goals
> To build a flexible and cost-effective IoT motor control system that can be expanded for automation, industrial training, or smart home applications.

##  Future Improvements
- Add encoder for speed feedback
- Integrate safety controls
- Expand to multi-motor systems
- Control through voice (Google Assistant via IFTTT)

