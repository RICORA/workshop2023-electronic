import machine
led_pin = machine.Pin(2, machine.Pin.OUT)

import time
while True:
    led_pin.value(1)
    time.sleep(1)
    led_pin.value(0)
    time.sleep(1)