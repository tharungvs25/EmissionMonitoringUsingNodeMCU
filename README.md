# Emission Monitoring Using NodeMCU with ThingSpeak Integration

This project monitors emission levels using a NodeMCU (ESP8266) microcontroller, MQ2 and MQ7 gas sensors, and sends the data to the ThingSpeak cloud platform for visualization and analysis.

## Components

* NodeMCU (ESP8266)
* MQ2 Gas Sensor (for general air quality)
* MQ7 Gas Sensor (for carbon monoxide)
* ThingSpeak Account (Free account available at [thingspeak.com](https://thingspeak.com/))

## Setup

1. **Hardware:** Connect the sensors to the NodeMCU according to the wiring diagram (see `wiring.png` or `wiring.pdf`).
2. **Software:**
    * Install the necessary Arduino libraries (e.g., for the MQ sensors, ESP8266 board support, and the ThingSpeak library).
    * Upload the Arduino code (`emission_monitoring.ino`) to the NodeMCU.
3. **ThingSpeak Setup:**
    * Create a ThingSpeak account (if you don't have one).
    * Create a new Channel in ThingSpeak.  You'll need at least two fields: one for the MQ2 sensor reading and one for the MQ7 sensor reading.
    * **Important:** Note down your ThingSpeak Channel ID and Write API Key.  You'll need these in your Arduino code.
4. **Arduino Code Configuration:**
    * In the `emission_monitoring.ino` file, replace the placeholder values for the ThingSpeak Channel ID and Write API Key with your actual values.  *(See the code example below)*

## Usage

* The NodeMCU reads the sensor values.
* The readings are sent to your ThingSpeak channel at regular intervals.
* You can visualize the data on the ThingSpeak website.
