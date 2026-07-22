# Pedido de um leaf do BT (AlignToBall, KickBall, Halt) para o controlador central de
# movimento (movement_calculation_node) assumir uma ação física diferente do segmento de
# caminho padrão (que continua vindo de /robot_goal + /robot_X/path, como antes).
#
# "Sticky" por robot_id: o último modo recebido continua valendo até o próprio leaf liberar
# explicitamente (mode=MODE_NONE), tipicamente ao atingir SUCCESS ou em onHalted(). Como
# proteção contra um leaf que pare de publicar sem liberar (ex: reinício de loop no BT que não
# chama onHalted, ou um nó travado), o controlador também trata o override como expirado se não
# receber nada por um tempo curto — nesse caso ele volta sozinho para o comportamento padrão.

uint32 robot_id

uint8 MODE_NONE=0
uint8 MODE_ALIGN_TO_BALL=1
uint8 MODE_ALIGN_TO_ANGLE=2
uint8 MODE_KICK=3
uint8 MODE_HALT=4

uint8 mode

# MODE_ALIGN_TO_ANGLE: ângulo alvo absoluto, radianos
float64 target_angle

# MODE_ALIGN_TO_BALL / MODE_ALIGN_TO_ANGLE
float64 angle_threshold_deg
float64 max_angular_speed
float64 p_gain

# MODE_KICK
float64 kick_speed
