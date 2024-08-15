# ESP example (MQTT, btn, temperature, Wi-Fi Provisioning)

Temperature data is periodically published every 5 seconds. Additionaly data is published by button press or upon receiving a request from MQTT. 



## How to use example
### Hardware needed
* ESP32-C3-DevKitM-1
    * On board button (GPIO 9)
    * Using built-in temperature sensor

### Application Required

Tested with Android ``ESP SoftAP Provisioning`` app. Other provisioning applications are available for various platforms. See below

#### Platform : Android
For Android, a provisioning application along with source code is available on GitHub : [esp-idf-provisioning-android](https://github.com/espressif/esp-idf-provisioning-android)
#### Platform : iOS
For iOS, a provisioning application along with source code is available on GitHub : [esp-idf-provisioning-ios](https://github.com/espressif/esp-idf-provisioning-ios)
#### Platform : Linux / Windows / macOS
To install the dependency packages needed, please refer to the top level [README file](../../README.md#running-test-python-script-pytest).

`esp_prov` supports BLE and SoftAP transport for Linux, MacOS and Windows platforms. 


### Build and Flash

Build the project and flash it to the board, then run monitor tool to view serial output:

```
idf.py -p PORT flash monitor
```

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

