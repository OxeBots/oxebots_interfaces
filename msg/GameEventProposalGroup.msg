# This message contains the proposed game events
# derived from ssl_gc_referee_message.proto

############# Message Definition #############

# Unique ID of this group
string id

# The proposed game events
oxebots_interfaces/GameEvent[] game_events

# Whether the proposal group was accepted
bool accepted
