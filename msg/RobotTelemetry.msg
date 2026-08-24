# Mensagem com os dados de telemetria recebidos dos robô (via NRF24)

# Identificação e Tempo
uint8 robot_id
uint32 timestamp          # Timestamp em milissegundos para cálculo de Ping

# Odometria interna do robô (Estimativa do próprio firmware)
float32 x
float32 y
float32 orientation
float32 vx
float32 vy
float32 w

# Status do Hardware
uint8 battery_percentage
float32 kicker_voltage

# Cod de erros
# 1: Comm loss | 2: IMU fail | 4: TOF fail | 8: Batt under | 16: Batt over | 32: Kicker no charge ...
# Verificar tudo no ssl_robot_protocol_bp.h (pode estar em comms ou interface)
uint16 error_flags