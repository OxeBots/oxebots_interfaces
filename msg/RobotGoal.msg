int32 robot_id
geometry_msgs/PoseStamped pose

# Estratégia de planejamento a usar para chegar até este objetivo.
# Escolhida por nó da árvore de comportamento (porta "planner" do GoToPoint).
# A saída continua sempre um nav_msgs/Path no mesmo tópico, independente da estratégia.
uint8 planner_type 0

uint8 PLANNER_DSTAR=0
uint8 PLANNER_ASTAR=1
uint8 PLANNER_STRAIGHT_LINE=2
