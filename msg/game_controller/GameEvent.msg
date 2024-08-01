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

bool accepted

string msg


builtin_interfaces/Time  time