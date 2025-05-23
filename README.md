# Mouse Controller with Arduino and Python 🖱️💻

This project is a simple mouse controller built using an Arduino and Python. The Arduino reads input from sensors or buttons, and the Python script translates those inputs into mouse movements and actions on your computer.

## Project Overview 🌟


- **Arduino Part:** Handles sensor/button inputs and communicates with the computer via serial.
- **Python Part:** Receives serial data from the Arduino and uses it to control the mouse with the `pyautogui` library.


---

## Arduino Setup  🔧

### Breadboard Setup
Refer to the following image for the breadboard wiring:

<img src="Arduino/Frietzing image.png" alt="Breadboard design" width="whatever" height="whatever">

### PCB Setup
For a more permanent build, you can use the provided PCB design:

- **Schematic:**
  <img src="Arduino/Kicad Schematic.png" alt="pcb design schematic" width="whatever" height="whatever">
- **PCB Layout:**

















  <img src="Arduino/Pcb.png" alt="pcb footprint design" width="whatever" height="whatever">

---

## Python Setup 🐍

### Required Libraries
Make sure you have the following Python libraries installed:

```
# Libraries:
├── pyserial
└── pyautogui
```

### Running the Script ▶️
1. Connect your Arduino to your computer.
2. Upload the appropriate sketch to the Arduino.
3. Make sure to select the right serial port in the python script
4. Run the Python script:

```bash
python mouse_controller.py
```

---

## How It Works
- The Arduino reads input from connected components (e.g., joystick, buttons, or sensors).
- It sends the data to the computer over the serial port.
- The Python script reads this data and translates it into mouse actions using `pyautogui`.

---
