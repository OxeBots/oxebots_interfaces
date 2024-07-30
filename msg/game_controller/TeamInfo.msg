# This message contains information about a single team given by the
# GameController
# derived from ssl_gc_referee_message.proto

############# Message Definition #############

# The team's name (empty string if operator has not typed anything).
string name

# The number of goals scored by the team during normal play and overtime.
uint32 score

# The number of red cards issued to the team since the beginning of the game.
uint32 red_cards

# The amount of time (in microseconds) left on each yellow card issued to the
# team. If no yellow cards are issued, this array has no elements. Otherwise,
# times are ordered from smallest to largest.
uint32[] yellow_card_times

# The total number of yellow cards ever issued to the team.
uint32 yellow_cards

# The number of timeouts this team can still call. If in a timeout right now,
# that timeout is excluded.
uint32 timeouts

# The number of microseconds of timeout this team can use.
uint32 timeout_time

# The pattern number of this team's goalkeeper.
uint32 goalkeeper

# The total number of countable fouls that act towards yellow cards
uint32 foul_counter

# The number of consecutive ball placement failures of this team
uint32 ball_placement_failures

# Indicate if the team is able and allowed to place the ball
bool can_place_ball

# The maximum number of bots allowed on the field based on division and cards
uint32 max_allowed_bots

# The team has submitted an intent to substitute one or more robots at the next
# chance
bool bot_substitution_intent

# Indicate if the team reached the maximum allowed ball placement failures and
# is thus not allowed to place the ball anymore
bool ball_placement_failures_reached

# The team is allowed to substitute one or more robots currently
bool bot_substitution_allowed

# The number of bot substitutions left by the team in this halftime
uint32 bot_substitutions_left

# The number of microseconds left for current bot substitution
uint32 bot_substitution_time_left
