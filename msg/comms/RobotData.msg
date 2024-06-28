# Data to be sent to the robot comms module
uint32 id # The id of the robot

# Speed of the robot kick
# zero if it is not supossed to kick
float32 kick

# Motor speeds [m/s]
float32 front_right
float32 front_left
float32 back_right
float32 back_left
