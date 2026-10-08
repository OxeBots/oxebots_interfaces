# Setpoint de trajetória para um robô (modo "point" do rádio NRF24, ver Nrf24.cpp).
# Em vez de mandar a velocidade instantânea (RobotCmdData), manda um ponto futuro + a
# velocidade desejada nesse ponto + o ângulo alvo, mais a pose atual (Kalman) como referência
# de correção para o firmware calcular as velocidades de roda localmente.

uint32 id

RobotKinematicPose target  # ponto futuro + velocidade desejada nele + ângulo alvo
RobotKinematicPose vision  # pose atual estimada (Kalman) — referência de correção no robô

# Mesma semântica de RobotCmdData.kick_speed: zero fora do chute.
float32 kick_speed
