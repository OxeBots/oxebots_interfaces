# Resposta do controlador central de movimento (movement_calculation_node) a um
# RobotMotionOverride. Os leafs do BT (AlignToBall, KickBall) leem isto para decidir
# RUNNING/SUCCESS em vez de inferir o resultado de um comando que eles mesmos publicaram em
# /robot_commands — eles não escrevem mais nesse tópico diretamente.

uint32 robot_id

# Ecoa o modo que o controlador de fato processou nesta amostra. Evita que um leaf que acabou
# de assumir leia por engano um "aligned" que ainda pertence ao modo anterior, antes do
# controlador ter processado o primeiro override deste leaf.
uint8 active_mode

# Válido quando active_mode é MODE_ALIGN_TO_BALL ou MODE_ALIGN_TO_ANGLE.
bool aligned

# Incrementado toda vez que um ciclo de chute (disparo + janela de contato) termina no
# controlador. Os leafs de chute guardam o valor no início do pedido e esperam ele subir, em
# vez de inferir sucesso por um booleano que seria ambíguo entre "ainda não disparou" e "já
# disparou e voltou a ficar ocioso".
uint32 kick_fire_count
