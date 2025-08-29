BUILDPATH 		?= ./build
# PORT 			?= 	/dev/ttyUSB0
BAUD 			?= 115200
PORT-FLASH		?= 	COM5
PORT-MONITOR 	?= 	COM21


.PHONY: build
build:
	arduino-cli compile --fqbn esp32:esp32:esp32s3usbotg . \
						--build-path=${BUILDPATH} \
						--build-property build.cdc_on_boot=1 \
						--build-property build.usb_mode=0

flash:
	arduino-cli upload -p ${PORT-FLASH} --fqbn esp32:esp32:esp32s3usbotg . --build-path=${BUILDPATH}

monitor:
	arduino-cli monitor -p ${PORT} -c baudrate=${BAUD}

monitor-usb:
	arduino-cli monitor -p ${PORT-MONITOR} --fqbn esp32:esp32:esp32s3usbotg

