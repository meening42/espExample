# ESP example (MQTT, btn, temperature, Wi-Fi Provisioning)



## How to use example
### Hardware 
* ESP32-C3-DevKitM-1
* On board button (GPIO 9)
* Using built-in temperature sensor

### Application Required

Provisioning applications are available for various platforms. See below

#### Platform : Android

For Android, a provisioning application along with source code is available on GitHub : [esp-idf-provisioning-android](https://github.com/espressif/esp-idf-provisioning-android)

#### Platform : iOS

For iOS, a provisioning application along with source code is available on GitHub : [esp-idf-provisioning-ios](https://github.com/espressif/esp-idf-provisioning-ios)

#### Platform : Linux / Windows / macOS

To install the dependency packages needed, please refer to the top level [README file](../../README.md#running-test-python-script-pytest).

`esp_prov` supports BLE and SoftAP transport for Linux, MacOS and Windows platforms. For BLE, however, if dependencies are not met, the script falls back to console mode and requires another application through which the communication can take place. The `esp_prov` console will guide you through the provisioning process of locating the correct BLE GATT services and characteristics, the values to write, and input read values.


### Build and Flash

Build the project and flash it to the board, then run monitor tool to view serial output:

```
idf.py -p PORT flash monitor
```

(To exit the serial monitor, type ``Ctrl-]``.)

See the Getting Started Guide for full steps to configure and use ESP-IDF to build projects.

### MQTT broker settings:

URI: mqtts://test.mosquitto.org:8884

Certificates examples in main folder 

ESP acts as mqtt client and publishes on topic ``example/data``

To request temperature over MQTT publish on topic ``example/temperature_request``

## Example Output

```
{"trigger_src":"button", "temperature":37.1}
{"trigger_src":"timer", "temperature":37.1}
{"trigger_src":"button", "temperature":38.1}
{"trigger_src":"timer", "temperature":37.1}
{"trigger_src":"mqtt_request", "temperature":37.1}
{"trigger_src":"timer", "temperature":36.1}
{"trigger_src":"timer", "temperature":36.1}
{"trigger_src":"timer", "temperature":36.1}
{"trigger_src":"timer", "temperature":36.1}
{"trigger_src":"timer", "temperature":35.1}
```

