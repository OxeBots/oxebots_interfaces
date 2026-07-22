float32 x
float32 y
float32 z

# Confiança da detecção de visão (0.0-1.0) que originou esta posição. Repassada de
# VisionDetectionBall::confidence — antes era descartada em game_observer_node, então não havia
# como distinguir uma leitura ruim (bola ocluída pelo próprio robô, tipicamente perto do kicker)
# de uma posição real. game_observer_node já filtra detecções abaixo do limiar mínimo antes de
# aceitar como posição nova, mas o valor é exposto aqui também para quem quiser refinar.
float32 confidence