# Ball Detection for RoboCup SSL
float32 confidence # Confidence in [0-1] of the detection
uint32 area
geometry_msgs/Point32 position # x, y, z [mm] in global ssl-vision coordinate system
geometry_msgs/Point32 pixel # x, y, z [pixel] in image