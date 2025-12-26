PewterCity_Gym_Text_BrockIntro::
    .string "Ah, du bist also hier.\n"
    .string "Ich bin ROCKO,\n"
    .string "der ARENALEITER von MARMORIA CITY.\p"
    .string "Meine Entschlossenheit ist so hart\n"
    .string "wie der Fels selbst!\p"
    .string "Und meine POKéMON?\n"
    .string "Hart, standfest und unerschütterlich!\p"
    .string "Ich bin ein Spezialist für\n"
    .string "Gesteins-POKéMON –\n"
    .string "und darauf bin ich stolz!\p"
    .string "Du weißt, dass du hier\n"
    .string "gegen eine Wand läufst…\p"
    .string "Und trotzdem stellst du dich mir?\p"
    .string "Hah! Genau das macht\n"
    .string "einen echten TRAINER aus!\p"
    .string "Dann komm!\n"
    .string "Zeig mir, ob du stark genug bist,\n"
    .string "um diesen Fels zu erschüttern!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"


@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "Ich habe dich unterschätzt.\p"
    .string "Das war mein Fehler.\p"
    .string "Als Beweis deines Sieges\n"
    .string "erhältst du den FELSORDEN!\p"
    .string "{FONT_NORMAL}{PLAYER} erhält den FELSORDEN\n"
    .string "von ROCKO!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}Der FELSORDEN stärkt\n"
    .string "die POKéMON deines Teams.\p"
    .string "Außerdem kannst du nun\n"
    .string "BLITZ außerhalb des Kampfes nutzen.$"


PewterCity_Gym_Text_TakeThisWithYou::
    .string "Moment!\n"
    .string "Nimm das hier mit.$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "{PLAYER} erhält TM39\n"
    .string "von ROCKO!$"

PewterCity_Gym_Text_ExplainTM39::
    .string "Eine TM bringt POKéMON\n"
    .string "eine neue Attacke bei.\p"
    .string "Jede TM ist nur einmal\n"
    .string "verwendbar.\p"
    .string "TM39 enthält FELSENGRAB.\p"
    .string "Sie trifft hart und senkt\n"
    .string "die INITIATIVE des Gegners.$"


PewterCity_Gym_Text_BrockPostBattle::
    .string "Die Welt ist voller\n"
    .string "starker TRAINER.\p"
    .string "Du hast echtes Talent.\p"
    .string "Versuch dein Glück als\n"
    .string "Nächstes in AZURIA CITY.$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "Du hast keinen Platz\n"
    .string "mehr dafür.$"

PewterCity_Gym_Text_RematchBrock::
    .string "Seit unserem letzten Kampf\n"
    .string "sind meine STEIN-POKéMON\l"
    .string "noch härter geworden!\p"
    .string "Bereit für eine Revanche?$"

PewterCity_Gym_Text_RematchBrockDefeat::
    .string "Ein Kampf für die Ewigkeit!$"

PewterCity_Gym_Text_BrockPostRematchBattle::
    .string "Unglaublich!\n"
    .string "Du bist wahrlich stark!\p"
    .string "Ein CHAMPION, wie ihn\n"
    .string "POKéMON verdient!$"

PewterCity_Gym_Text_BrockNoRematchBattle::
    .string "Vielleicht ein anderes Mal.$"

PewterCity_Gym_Text_RematchYesBrock::
    .string "Dann los!\n"
    .string "Zeig mir deine Stärke!$"


PewterCity_Gym_Text_LiamIntro::
    .string "Halt! Nicht so schnell!\p"
    .string "Du bist noch meilenweit\n"
    .string "davon entfernt, BROCK zu treffen!$"

PewterCity_Gym_Text_LiamDefeat::
    .string "Mist…!\p"
    .string "Scheinbar bist du doch stärker\n"
    .string "als gedacht.$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "Du bist echt stark!\n"
    .string "Aber BROCK ist noch eine Klasse drüber!$"


PewterCity_Gym_Text_RockyIntro::
    .string "Stopp! Wer bist du überhaupt?\p"
    .string "Vor BROCK kommst du so leicht\n"
    .string "nicht vorbei!$"

PewterCity_Gym_Text_RockyDefeat::
    .string "Verflixt…!\p"
    .string "Deine Steine sind vielleicht hart,\n"
    .string "aber du bist härter!$"

PewterCity_Gym_Text_RockyPostBattle::
    .string "Nicht schlecht, Herausforderer!\n"
    .string "Doch BROCK wartet noch auf dich!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "Hiya!\n"
    .string "Do you want to dream big?\p"
    .string "Do you dare to dream of becoming\n"
    .string "the POKéMON champ?\p"
    .string "I'm no TRAINER, but I can advise\n"
    .string "you on how to win.\p"
    .string "Let me take you to the top!$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "All right!\n"
    .string "Let's get happening!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "The first POKéMON out in a match is\n"
    .string "at the left of the POKéMON LIST.\p"
    .string "By changing the order of POKéMON,\n"
    .string "you may gain an advantage.\p"
    .string "Try different orders to suit your\n"
    .string "opponent's party.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "It's a free service!\n"
    .string "Let's get happening!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "Just as I thought!\n"
    .string "You're POKéMON champ material!$"

PewterCity_Gym_Text_GymStatue::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}, {PLAYER}$"

