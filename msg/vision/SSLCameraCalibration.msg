uint32 camera_id            # Unique identifier for the camera.
float32 focal_length        # Focal length of the camera lens (in pixels).
float32 principal_point_x   # X-coordinate of the camera's principal point (optical center) in the image (in pixels).
float32 principal_point_y   # Y-coordinate of the camera's principal point (optical center) in the image (in pixels).
float32 distortion          # Lens distortion coefficient to account for radial distortion.
float32 q0                  # Quaternion component q0, representing the rotation of the camera (real part).
float32 q1                  # Quaternion component q1, representing the rotation of the camera (imaginary part).
float32 q2                  # Quaternion component q2, representing the rotation of the camera (imaginary part).
float32 q3                  # Quaternion component q3, representing the rotation of the camera (imaginary part).
float32 tx                  # Translation along the X-axis from the camera to the world coordinate system (in meters).
float32 ty                  # Translation along the Y-axis from the camera to the world coordinate system (in meters).
float32 tz                  # Translation along the Z-axis from the camera to the world coordinate system (in meters).
float32 derived_camera_world_tx  # Derived translation along the X-axis from the camera's position in the world coordinate system (in meters).
float32 derived_camera_world_ty  # Derived translation along the Y-axis from the camera's position in the world coordinate system (in meters).
float32 derived_camera_world_tz  # Derived translation along the Z-axis from the camera's position in the world coordinate system (in meters).
uint32 pixel_image_width     # Width of the image captured by the camera (in pixels).
uint32 pixel_image_height    # Height of the image captured by the camera (in pixels).
