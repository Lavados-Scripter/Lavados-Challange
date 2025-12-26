# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	faceplayer
# 8 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 12 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 14 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 15 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 16 "data/maps/Route1/scripts.pory"
	waitmessage
# 17 "data/maps/Route1/scripts.pory"
	waitfanfare
# 18 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 19 "data/maps/Route1/scripts.pory"
	addmoney 2000
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 21 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 22 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 23 "data/maps/Route1/scripts.pory"
	release
# 24 "data/maps/Route1/scripts.pory"
	end
# 25 "data/maps/Route1/scripts.pory"

# 26 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 28 "data/maps/Route1/scripts.pory"
	release
# 29 "data/maps/Route1/scripts.pory"
	end
# 30 "data/maps/Route1/scripts.pory"

# 31 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 32 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 33 "data/maps/Route1/scripts.pory"
	end
# 34 "data/maps/Route1/scripts.pory"

# 35 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 37 "data/maps/Route1/scripts.pory"
	end
# 38 "data/maps/Route1/scripts.pory"

# 39 "data/maps/Route1/scripts.pory"
Route1_EventScript_Oak::
# 40 "data/maps/Route1/scripts.pory"
	lock
# 41 "data/maps/Route1/scripts.pory"
	faceplayer
# 42 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Oak, MSGBOX_YESNO
# 43 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route1_EventScript_NoOak
# 44 "data/maps/Route1/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 45 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_OAK, Route1_Text_YesOak, Route1_Text_OakDefeat, Route1_EventScript_PostOak, NO_MUSIC
# 46 "data/maps/Route1/scripts.pory"
	release
# 47 "data/maps/Route1/scripts.pory"
	end
# 48 "data/maps/Route1/scripts.pory"

# 49 "data/maps/Route1/scripts.pory"
Route1_EventScript_PostOak::
# 50 "data/maps/Route1/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 51 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_OakPostBattle
# 52 "data/maps/Route1/scripts.pory"
	setflag FLAG_OAK_DEFEATED
# 53 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_OAK
# 54 "data/maps/Route1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/Route1/scripts.pory"
	removeobject 3
# 56 "data/maps/Route1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 57 "data/maps/Route1/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 58 "data/maps/Route1/scripts.pory"
	release
# 59 "data/maps/Route1/scripts.pory"
	end
# 60 "data/maps/Route1/scripts.pory"

# 61 "data/maps/Route1/scripts.pory"
Route1_EventScript_NoOak::
# 62 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_NoOak
# 63 "data/maps/Route1/scripts.pory"
	release
# 64 "data/maps/Route1/scripts.pory"
	end
