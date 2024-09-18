# A globally unique id of the game event.
string id

# The origins of this game event.
# Empty, if it originates from game controller.
# Contains autoRef name(s), if it originates from one or more autoRefs.
# Ignored if sent by autoRef to game controller.
string[] origin

# Unix timestamp in microseconds when the event was created.
uint64 created_timestamp

# Type of the event.
# Event will have a type and the necessary properties
# Check the ssl_gc_game_event.proto file for more descrition on each event type.
# 1 - BallLeftFieldTouchLine
# 2 - BallLeftFieldTouchGoalLine
# 3 - AimlessKick
# 4 - AttackerTooCloseToDefenseArea
# 5 - DefenderInDefenseArea
# 6 - BoundaryCrossing
# 7 - KeeperHeldBall
# 8 - BotDribbledBallTooFar
# 9 - BotPushedBot
# 10 - BotHeldBallDeliberately
# 11 - BotTippedOver
# 12 - BotDroppedParts
# 13 - AttackerTouchedBallInDefenseArea
# 14 - BootKickedBallTooFast
# 15 - BotCreashUnique
# 16 - BotCrashDrawn
# 17 - DefenderTooCloseToKickPoint
# 18 - BotTooFastInStop
# 19 - BotInterferedPlacement
# 20 - PossibleGoal
# 21 - Goal
# 22 - InvalidGoal
# 23 - AttackerDoubleTouchedBall
# 24 - PlacementSucceeded
# 25 - PenaltyKickFailed
# 26 - NoProgressInGame
# 27 - MultipleCards
# 28 - MultipleFouls
# 29 - BotSubstitution
# 30 - ExcessiveBotSubstitution
# 31 - TooManyRobots
# 32 - ChallengeFlag
# 33 - ChallengeFlagHandled
# 34 - EmergencyStop
# 35 - UnsportingBehaviorMinor
# 36 - UnsportingBehaviorMajor
# Deprecated Events
# 37 - Prepared 
# 38 - IndirectGoal
# 39 - ChippedGoal
# 40 - KickTimeout
# 41 - AttackerTouchedOpponentInDefenseArea
# 42 - AttackerTouchedOpponentInDefenseAreaSkipped
# 43 - BotCrashUniqueSkipped
# 44 - BotPushedBotSkipped
# 45 - DefenderInDefenseAreaPartially
# 46 - MultiplePlacementFailures
uint32 event_type

# The team that caused the event.
# 0 - Unknown
# 1 - Yellow
# 2 - Blue
uint32 by_team
uint32 by_robot
uint32 victim
uint32 bot_yellow
uint32 bot_blue

oxebots_interfaces/Vector2 location
oxebots_interfaces/Vector2 kick_location
oxebots_interfaces/Vector2 ball_location
oxebots_interfaces/Vector2 start
oxebots_interfaces/Vector2 end

float32 distance
float32 duration
float32 ball_speed
float32 max_ball_height
float32 speed
float32 speed_diff
float32 crash_angle
float32 precision
float32 nearest_bot_distance

bool accepted

string msg

builtin_interfaces/Time  time

### Constants
uint32 BALL_LEFT_FIELD_TOUCH_LINE = 6
uint32 BALL_LEFT_FIELD_GOAL_LINE = 7
uint32 AIMLESS_KICK = 11
uint32 ATTACKER_TOO_CLOSE_TO_DEFENSE_AREA = 19
uint32 DEFENDER_IN_DEFENSE_AREA = 31
uint32 BOUNDARY_CROSSING = 43
uint32 KEEPER_HELD_BALL = 13
uint32 BOT_DRIBBLED_BALL_TOO_FAR = 17
uint32 BOT_PUSHED_BOT = 24
uint32 BOT_HELD_BALL_DELIBERATELY = 26
uint32 BOT_TIPPED_OVER = 27
uint32 BOT_DROPPED_PARTS = 51
uint32 ATTACKER_TOUCHED_BALL_IN_DEFENSE_AREA = 15
uint32 BOOT_KICKED_BALL_TOO_FAST = 18
uint32 BOT_CRASH_UNIQUE = 22
uint32 BOT_CRASH_DRAWN = 21
uint32 DEFENDER_TOO_CLOSE_TO_KICK_POINT = 29
uint32 BOT_TOO_FAST_IN_STOP = 28
uint32 BOT_INTERFERED_PLACEMENT = 20
uint32 POSSIBLE_GOAL = 39
uint32 GOAL = 8
uint32 INVALID_GOAL = 44
uint32 ATTACKER_DOUBLE_TOUCHED_BALL = 14
uint32 PLACEMENT_SUCCEEDED = 5
uint32 PENALTY_KICK_FAILED = 45
uint32 NO_PROGRESS_IN_GAME = 2
uint32 PLACEMENT_FAILED = 3
uint32 MULTIPLE_CARDS = 32
uint32 MULTIPLE_FOULS = 34
uint32 BOT_SUBSTITUTION = 37
uint32 EXCESSIVE_BOT_SUBSTITUTION = 52
uint32 TOO_MANY_ROBOTS = 38
uint32 CHALLENGE_FLAG = 46
uint32 CHALLENGE_FLAG_HANDLED = 48
uint32 EMERGENCY_STOP = 47
uint32 UNSPORTING_BEHAVIOR_MINOR = 35
uint32 UNSPORTING_BEHAVIOR_MAJOR = 36
uint32 PREPARED = 1
uint32 INDIRECT_GOAL = 9
uint32 CHIPPED_GOAL = 10
uint32 KICK_TIMEOUT = 12
uint32 ATTACKER_TOUCHED_OPPONENT_IN_DEFENSE_AREA = 16
uint32 ATTACKER_TOUCHED_OPPONENT_IN_DEFENSE_AREA_SKIPPED = 42
uint32 BOT_CRASH_UNIQUE_SKIPPED = 23
uint32 BOT_PUSHED_BOT_SKIPPED = 25
uint32 DEFENDER_IN_DEFENSE_AREA_PARTIALLY = 30
uint32 MULTIPLE_PLACEMENT_FAILURES = 33
