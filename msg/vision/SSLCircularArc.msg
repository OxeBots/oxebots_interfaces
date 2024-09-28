string name          # Name of the circular arc marking.
Vector2f center      # Center point of the circular arc (in meters or millimeters, depending on the context).
float32 radius       # Radius of the circular arc (in meters or millimeters, depending on the context).
float32 a1           # Start angle of the arc, measured counterclockwise from the positive X-axis (in radians).
float32 a2           # End angle of the arc, measured counterclockwise from the positive X-axis (in radians).
float32 thickness    # Thickness of the arc line (in meters or millimeters, depending on the context).
uint32 type          # Type of the shape, typically an enum representing different field shapes (e.g., center circle, penalty area arc).
