int32 field_length               # Length of the field (distance between the goal lines) in millimeters.
int32 field_width                # Width of the field (distance between the touch lines) in millimeters.
int32 goal_width                 # Width of the goal (distance between the inner edges of the goal posts) in millimeters.
int32 goal_depth                 # Depth of the goal (distance from the outer goal line edge to the inner back of the goal) in millimeters.
int32 boundary_width             # Width of the boundary (distance from the touch/goal line centers to the boundary walls) in millimeters.
SSLFieldLineSegment[] field_lines # Array of line segments that define the field markings (e.g., touch lines, goal lines).
SSLCircularArc[] field_arcs      # Array of circular arcs that define the field markings (e.g., center circle).
int32 penalty_area_depth         # Depth of the penalty area (measured from the goal line) in millimeters.
int32 penalty_area_width         # Width of the penalty area in millimeters.
int32 center_circle_radius       # Radius of the center circle in millimeters.
int32 line_thickness             # Thickness of the lines on the field in millimeters.
int32 goal_center_to_penalty_mark # Distance from the goal center to the penalty mark in millimeters.
int32 goal_height                # Height of the goal in millimeters.
float32 ball_radius              # Radius of the ball in millimeters.
float32 max_robot_radius         # Maximum allowed robot radius in millimeters.