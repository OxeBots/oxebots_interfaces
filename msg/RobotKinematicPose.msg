# Pose cinemática (posição + velocidade) de um robô, em unidades internas do oxebots_strategy
# (mm, radianos). Espelha a struct Pose do protocolo bitproto (ssl_robot_protocol.bitproto),
# usada tanto pro setpoint desejado (alvo) quanto pra referência atual (visão/Kalman).

float64 x           # mm
float64 y           # mm
float64 angle       # rad
float64 x_v         # mm/s
float64 y_v         # mm/s
float64 angular_vel # rad/s
