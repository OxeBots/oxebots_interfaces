# oxebots_interfaces

Pacote de interfaces ROS 2 da equipe **OxeBots** (UFBA) para a categoria RoboCup Small Size League – Entry Level (SSL-EL).

Este pacote define as mensagens (`.msg`), serviços (`.srv`) e esquemas de dados compartilhados entre todos os nós da pilha: visão, árbitro, fusão de dados, filtro de Kalman, estratégia, planejamento de trajetórias e comunicação de rádio.

---

## 1. Principais Mensagens e Serviços

### 1.1 Percepção e Estado de Jogo (`oxebots_observers`)
- **`GameData.msg`**: Estado consolidado da partida contendo timestamp, pose da bola (`BallPosition`) e listas de robôs aliados e adversários (`RobotGameData[]`).
- **`BallPosition.msg`**: Posição 2D da bola em coordenadas globais (milímetros), confiança de detecção e identificador da câmera de captura.
- **`RobotGameData.msg`**: Identificador do robô, posição `(x, y)` em mm, orientação `theta` (radianos), confiança e câmera de origem.
- **`Referee.msg`**: Comandos e parâmetros da partida decodificados do Game Controller oficial.
- **`SSLGeometryData.msg`**, **`SSLFieldSize.msg`**: Dimensões oficiais e demarcações das linhas e arcos do campo.

### 1.2 Predição e Filtro de Kalman (`oxebots_prediction`)
- **`BallPrediction.msg`** / **`BallPredicted.msg`**: Estado estimado e filtrado da bola contendo posição `(x, y)`, velocidade `(vx, vy)` em mm/s e covariâncias.
- **`RobotPrediction.msg`** / **`RobotPredicted.msg`**: Estado estimado dos robôs contendo pose, velocidade linear `(vx, vy)` e velocidade angular `w`.

### 1.3 Estratégia e Movimento (`oxebots_strategy`)
- **`RobotGoal.msg`**: Alvo cinemático publicado pelas árvores de comportamento para cada robô (ponto de destino `(x, y)`, orientação desejada, velocidade máxima, se deve desviar da bola ou de robôs).
- **`RoleAssignment.msg`**: Distribuição dinâmica de papéis (`GOALKEEPER`, `ATTACKER`, `DEFENDER`) calculada pelo `role_assigner_node`.
- **`RobotMotionOverride.msg`**: Permite que nós de estratégia sobrescrevam o controle padrão (ex: chutes de precisão ou manobras especiais).
- **`RobotMotionStatus.msg`**: Feedback do controlador de trajetória informando se o robô atingiu o alvo, tempo restante e erro.
- **`RobotTrajectorySetpoint.msg`**: Ponto de referência intermediário gerado pelo `trajectory_setpoint_node` para envio via rádio.

### 1.4 Controle e Hardware (`oxebots_comms`)
- **`RobotCmd.msg`** / **`RobotCmdData.msg`**: Comandos de controle em velocidade local/global ou modo trajetória com flags de chute e drible.
- **`RobotTelemetry.msg`**: Telemetria recebida do robô físico via rádio (tensões de bateria, velocidades medidas, status de sensores).

### 1.5 Serviços
- **`Substitute.srv`**: Permite a requisição de substituição de robôs em campo.

---

## 2. Pré-requisitos e Ambiente

- **Sistema Operacional:** Ubuntu 24.04 LTS
- **ROS 2:** Jazzy Jalisco
- **Compilador:** GCC 13+ (C++20)

---

## 3. Como Usar

### 3.1 C++ (`CMakeLists.txt` e Código Fonte)

No `CMakeLists.txt` do pacote consumidor:
```cmake
find_package(oxebots_interfaces REQUIRED)

target_link_libraries(seu_executavel
  ${oxebots_interfaces_TARGETS}
)
```

No `package.xml`:
```xml
<depend>oxebots_interfaces</depend>
```

No arquivo C++:
```cpp
#include "oxebots_interfaces/msg/game_data.hpp"
#include "oxebots_interfaces/msg/robot_goal.hpp"
#include "oxebots_interfaces/msg/robot_cmd.hpp"

void callback(const oxebots_interfaces::msg::GameData::SharedPtr msg) {
  // Acesso a campos
  double ball_x = msg->ball.x;
}
```

### 3.2 Python

No script Python:
```python
from oxebots_interfaces.msg import GameData, RobotGoal, RobotCmd

def listener_callback(msg: GameData):
    print(f"Bola: x={msg.ball.x}, y={msg.ball.y}")
```

---

## 4. Compilação Individual

Para compilar apenas as interfaces a partir da raiz do workspace:
```bash
source /opt/ros/jazzy/setup.bash
colcon build --packages-select oxebots_interfaces
source install/setup.bash
```

---

## 5. Licença

Este pacote é disponibilizado sob a licença **GPLv3**.
