# Estado de jogo interpretado e consolidado pelo referee_state_node a partir do Game Controller.
# Publicado em /game_state com QoS reliable + transient_local.

std_msgs/Header header

# Contador e comando bruto do Referee (ssl_league_msgs/Referee)
uint32 command_counter
uint8 command

# Enums de fase (phase) — estados da máquina do regulamento SSL-EL
uint8 PHASE_HALT=0
uint8 PHASE_TIMEOUT=1
uint8 PHASE_STOP=2
uint8 PHASE_BALL_PLACEMENT=3
uint8 PHASE_PREPARE_KICKOFF=4
uint8 PHASE_KICKOFF=5
uint8 PHASE_PREPARE_PENALTY=6
uint8 PHASE_PENALTY=7
uint8 PHASE_FREE_KICK=8
uint8 PHASE_RUN=9

uint8 phase

# Enums de contexto de reinício (restart_ctx) — memória para resolver NORMAL_START
uint8 RESTART_NONE=0
uint8 RESTART_KICKOFF=1
uint8 RESTART_PENALTY=2
uint8 RESTART_FREE_KICK=3
uint8 RESTART_FORCE=4

uint8 restart_ctx

# Verdadeiro se o reinício/parada atual é a favor do nosso time
bool we_favored

# Estágio da partida (copiado de Referee.stage)
uint8 stage

# Verdadeiro se o nosso gol está no semieixo x positivo (calculado via blue_team_on_positive_half e is_yellow_team)
bool our_goal_positive_x

# Posição designada pelo GC em milímetros (convertida de metros do ssl_ros_bridge)
geometry_msgs/Point32 designated_position
bool has_designated

# Limites regulamentares derivados da fase atual
float32 speed_limit_mps
float32 ball_min_distance_mm

# Informações do nosso TeamInfo no Referee
bool can_place_ball
uint8 max_allowed_bots
uint32 our_goalkeeper_id

# Verdadeiro se o Game Controller não envia mensagens há mais de stale_timeout_ms (ex.: 500 ms)
bool stale
