SSLFieldSize field                # Field size and markings, including dimensions and line/arc segments.
SSLCameraCalibration[] calib      # Array of camera calibration data for the cameras used in the field.
SSLGeometryModels models          # Models used for simulating ball behavior, including straight and chipped ball dynamics.

############## Constants ##############

# Field types
uint8 UNDEFINED = 0
uint8 CENTER_CIRCLE = 1
uint8 TOP_TOUCH_LINE = 2
uint8 BOTTOM_TOUCH_LINE = 3
uint8 LEFT_GOAL_LINE = 4
uint8 RIGHT_GOAL_LINE = 5
uint8 HALFWAY_LINE = 6
uint8 CENTER_LINE = 7
uint8 LEFT_PENALTY_STRETCH = 8
uint8 RIGHT_PENALTY_STRETCH = 9
uint8 LEFT_FIELD_LEFT_PENALTY_STRETCH = 10
uint8 LEFT_FIELD_RIGHT_PENALTY_STRETCH = 11
uint8 RIGHT_FIELD_LEFT_PENALTY_STRETCH = 12
uint8 RIGHT_FIELD_RIGHT_PENALTY_STRETCH = 13
