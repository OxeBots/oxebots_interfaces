# This message contains the information that the GameController sends to the
# teams
# derived from ssl_gc_referee_message.proto

############# Message Definition #############

# A random UUID of the source that is kept constant at the source while
# running. If multiple sources are broadcasting to the same network, this id can
# be used to identify individual sources.
string source_identifier

# MatchType is a meta information about the current match for easier log
# processing
uint8 match_type
# The UNIX timestamp when the packet was sent.

builtin_interfaces/Time timestamp

# Stage of the game, relative to time
uint8 stage

# The number of microseconds left in the stage. If the stage runs over its
# specified time, this value becomes negative.
builtin_interfaces/Time stage_time_left

# Referee commands to the robots
uint8 command

# The number of commands issued since startup
uint32 command_counter

# The UNIX timestamp when the command was issued, in microseconds. This value
# changes only when a new command is issued, not on each packet.
builtin_interfaces/Time command_timestamp

# Information about the yellow team
oxebots_interfaces/TeamInfo yellow

# Information about the blue team
oxebots_interfaces/TeamInfo blue

# The coordinates of the Designated Position. These are measured in millimetres
# and correspond to SSL-Vision coordinates.
geometry_msgs/Point32 designated_position

# Information about the direction of play. True, if the blue team will have
# it's goal on the positive x-axis of the ssl-vision coordinate system.
# Obviously, the yellow team will play on the opposite half.
bool blue_team_on_positive_half 

# The command that will be issued after the current stoppage and ball placement
# to continue the game.
uint8 next_command

# All game events that were detected since the last RUNNING state.
oxebots_interfaces/GameEvent[] game_events

# All proposed game events that were detected since the last RUNNING state.
oxebots_interfaces/GameEventProposalGroup[] game_event_proposals

# The time in microseconds that is remaining until the current action times
# out. The time will not be reset. It can get negative. An autoRef would raise
# an appropriate event, if the time gets negative. Possible actions where this
# time is relevant:
#   * free kicks
#   * kickoff, penalty kick, force start
#   * ball placement
builtin_interfaces/Time current_action_time_remaining

# A message that can be displayed to the spectators, like a reason for a
# stoppage.
string status_message

############## Constants ##############

## Possible match type values
# not set
uint8 MATCH_TYPE_UNKNOWN_MATCH = 0
# match is part of the group phase
uint8 MATCH_TYPE_GROUP_PHASE = 1
# match is part of the elimination phase
uint8 MATCH_TYPE_ELIMINATION_PHASE = 2
# a friendly match, not part of a tournament
uint8 MATCH_TYPE_FRIENDLY = 3

## Possible stage values
# The first half is about to start. A kickoff is called within this stage. This
# stage ends with the NORMAL_START.
uint8 STAGE_NORMAL_FIRST_HALF_PRE = 0
# The first half of the normal game, before half time.
uint8 STAGE_NORMAL_FIRST_HALF = 1
# Half time between first and second halves.
uint8 STAGE_NORMAL_HALF_TIME = 2
# The second half is about to start. A kickoff is called within this stage.
# This stage ends with the NORMAL_START.
uint8 STAGE_NORMAL_SECOND_HALF_PRE = 3
# The second half of the normal game, after half time.
uint8 STAGE_NORMAL_SECOND_HALF = 4
# The break before extra time.
uint8 STAGE_EXTRA_TIME_BREAK = 5
# The first half of extra time is about to start. A kickoff is called within
# this stage. This stage ends with the NORMAL_START.
uint8 STAGE_EXTRA_FIRST_HALF_PRE = 6
# The first half of extra time.
uint8 STAGE_EXTRA_FIRST_HALF = 7
# Half time between first and second extra halves.
uint8 STAGE_EXTRA_HALF_TIME = 8
# The second half of extra time is about to start. A kickoff is called within
# this stage. This stage ends with the NORMAL_START.
uint8 STAGE_EXTRA_SECOND_HALF_PRE = 9
# The second half of extra time.
uint8 STAGE_EXTRA_SECOND_HALF = 10
# The break before penalty shootout.
uint8 STAGE_PENALTY_SHOOTOUT_BREAK = 11
# The penalty shootout.
uint8 STAGE_PENALTY_SHOOTOUT = 12
# The game is over.
uint8 STAGE_POST_GAME = 13

## Possible commands values
# All robots should completely stop moving.
uint8 COMMAND_HALT = 0
# Robots must keep 50 cm from the ball.
uint8 COMMAND_STOP = 1
# A prepared kickoff or penalty may now be taken.
uint8 COMMAND_NORMAL_START = 2
# The ball is dropped and free for either team.
uint8 COMMAND_FORCE_START = 3
# The yellow team may move into kickoff position.
uint8 COMMAND_PREPARE_KICKOFF_YELLOW = 4
# The blue team may move into kickoff position.
uint8 COMMAND_PREPARE_KICKOFF_BLUE = 5
# The yellow team may move into penalty position.
uint8 COMMAND_PREPARE_PENALTY_YELLOW = 6
# The blue team may move into penalty position.
uint8 COMMAND_PREPARE_PENALTY_BLUE = 7
# The yellow team may take a direct free kick.
uint8 COMMAND_DIRECT_FREE_YELLOW = 8
# The blue team may take a direct free kick.
uint8 COMMAND_DIRECT_FREE_BLUE = 9
# The yellow team is currently in a timeout.
uint8 COMMAND_TIMEOUT_YELLOW = 12
# The blue team is currently in a timeout.
uint8 COMMAND_TIMEOUT_BLUE = 13
# Equivalent to STOP, but the yellow team must pick up the ball and drop it in
# the Designated Position.
uint8 COMMAND_BALL_PLACEMENT_YELLOW = 16
# Equivalent to STOP, but the blue team must pick up the ball and drop it in
# the Designated Position.
uint8 COMMAND_BALL_PLACEMENT_BLUE = 17
