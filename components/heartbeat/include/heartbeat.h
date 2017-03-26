

// Initializes GPIOs for heartbeat LED
void heartbeat_init(void);

// Task which blinks the LED to make sure the device
// is still running.
void heartbeat_task(void *pvParameter);
