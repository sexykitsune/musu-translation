#File added by SexyKitsune
# these are the configuration parameters for the training system

# constants to reduced the load on the constants 1,2 and 3
# makes code more transparent
TRAINING_MIKAN	=	1
TRAINING_ICHIGO	=	2
TRAINING_KARIN	=	3

# starting value of training_damagefix for the musumes
training_damagefix_start_mikan=1.0		# starts at 1.0 for now since mikan does not use the damagefix mechanism
training_damagefix_start_ichigo=1.2
training_damagefix_start_karin=1.2

# how many times you need to spank, whip or candle a musume for her to enter maso_mode
training_maso_check_mikan=-1			# -1 since mikan does not use maso_mode
training_maso_check_ichigo=100
training_maso_check_karin=80

# d for delta
# tairyoku, seishin and damagefix are decrements. all others are increments
motion_normal_tairyoku_d=3
motion_normal_seishin_d=5
motion_normal_damagefix_d_mikan=0
motion_normal_damagefix_d_ichigo=0
motion_normal_damagefix_d_karin=0

motion_pain_tairyoku_d=3
motion_pain_seishin_d=5
motion_pain_damagefix_d_mikan=0
motion_pain_damagefix_d_ichigo=0
motion_pain_damagefix_d_karin=0

motion_insert_tairyoku_d=10
motion_insert_seishin_d=15
motion_insert_damagefix_d_mikan=0
motion_insert_damagefix_d_ichigo=0
motion_insert_damagefix_d_karin=0

# caress also calls motion_normal
caress_miryoku_d=0
caress_karada_d=0
caress_atama_d=0
caress_kokoro_d=0
caress_damagefix_d_mikan=0
caress_damagefix_d_ichigo=0.01
caress_damagefix_d_karin=0.01

# spank also calls motion_pain
spank_tairyoku_d=15
spank_seishin_d=20
spank_miryoku_d=1
spank_karada_d=1
spank_atama_d=0
spank_kokoro_d=0
spank_damagefix_d_mikan=0
spank_damagefix_d_ichigo=0.02
spank_damagefix_d_karin=0.02

# whip also calls motion_pain
whip_tairyoku_d=35
whip_seishin_d=20
whip_miryoku_d=2
whip_karada_d=2
whip_atama_d=0
whip_kokoro_d=0
whip_damagefix_d_mikan=0
whip_damagefix_d_ichigo=0.04
whip_damagefix_d_karin=0.04

# candle also calls motion_pain
candle_tairyoku_d=20
candle_seishin_d=35
candle_miryoku_d=3
candle_karada_d=3
candle_atama_d=0
candle_kokoro_d=0
candle_damagefix_d_mikan=0
candle_damagefix_d_ichigo=0.03
candle_damagefix_d_karin=0.03

fellatio_tairyoku_d=30
fellatio_seishin_d=40
fellatio_miryoku_d=10
fellatio_karada_d=3
fellatio_atama_d=0
fellatio_kokoro_d=5
fellatio_damagefix_d_mikan=0
fellatio_damagefix_d_ichigo=0.1
fellatio_damagefix_d_karin=0.1

insert_tairyoku_d=40
insert_seishin_d=30
insert_miryoku_d=20
insert_karada_d=10
insert_atama_d=0
insert_kokoro_d=0
insert_damagefix_d_mikan=0
insert_damagefix_d_ichigo=0.1
insert_damagefix_d_karin=0.1

# from here on each musume get her own set of parameters

anal_tairyoku_d_mikan=70
anal_seishin_d_mikan=90
anal_miryoku_d_mikan=20
anal_karada_d_mikan=10
anal_atama_d_mikan=0
anal_kokoro_d_mikan=0
anal_damagefix_d_mikan=0

anal_tairyoku_d_ichigo=30
anal_seishin_d_ichigo=40
anal_miryoku_d_ichigo=10
anal_karada_d_ichigo=3
anal_atama_d_ichigo=0
anal_kokoro_d_ichigo=5
anal_damagefix_d_ichigo=0.1

anal_tairyoku_d_karin=45
anal_seishin_d_karin=60
anal_miryoku_d_karin=10
anal_karada_d_karin=0
anal_atama_d_karin=0
anal_kokoro_d_karin=30
anal_damagefix_d_karin=0.1

vibe_tairyoku_d_mikan=90
vibe_seishin_d_mikan=60
vibe_miryoku_d_mikan=20
vibe_karada_d_mikan=10
vibe_atama_d_mikan=0
vibe_kokoro_d_mikan=0
vibe_damagefix_d_mikan=0

vibe_tairyoku_d_ichigo=30
vibe_seishin_d_ichigo=40
vibe_miryoku_d_ichigo=10
vibe_karada_d_ichigo=3
vibe_atama_d_ichigo=0
vibe_kokoro_d_ichigo=5
vibe_damagefix_d_ichigo=0.1

vibe_tairyoku_d_karin=60
vibe_seishin_d_karin=45
vibe_miryoku_d_karin=10
vibe_karada_d_karin=30
vibe_atama_d_karin=0
vibe_kokoro_d_karin=0
vibe_damagefix_d_karin=0.1

# also called analbeads
analpearl_tairyoku_d_mikan=60
analpearl_seishin_d_mikan=80
analpearl_miryoku_d_mikan=20
analpearl_karada_d_mikan=10
analpearl_atama_d_mikan=0
analpearl_kokoro_d_mikan=0
analpearl_damagefix_d_mikan=0

analvibe_tairyoku_d_ichigo=30
analvibe_seishin_d_ichigo=40
analvibe_miryoku_d_ichigo=10
analvibe_karada_d_ichigo=3
analvibe_atama_d_ichigo=0
analvibe_kokoro_d_ichigo=5
analvibe_damagefix_d_ichigo=0.1

analvibe_tairyoku_d_karin=45
analvibe_seishin_d_karin=60
analvibe_miryoku_d_karin=10
analvibe_karada_d_karin=0
analvibe_atama_d_karin=0
analvibe_kokoro_d_karin=30
analvibe_damagefix_d_karin=0.1

# also called analexpantion
hardanal_tairyoku_d_mikan=600
hardanal_seishin_d_mikan=500
hardanal_miryoku_d_mikan=40
hardanal_karada_d_mikan=10
hardanal_atama_d_mikan=0
hardanal_kokoro_d_mikan=20
hardanal_damagefix_d_mikan=0

# has to many aliases to list all of them here
swimsuit_tairyoku_d_mikan=500
swimsuit_seishin_d_mikan=500
swimsuit_miryoku_d_mikan=35
swimsuit_karada_d_mikan=15
swimsuit_atama_d_mikan=0
swimsuit_kokoro_d_mikan=25
swimsuit_damagefix_d_mikan=0

facemask_tairyoku_d_karin=200
facemask_seishin_d_karin=300
facemask_miryoku_d_karin=30
facemask_karada_d_karin=15
facemask_atama_d_karin=0
facemask_kokoro_d_karin=25
facemask_damagefix_d_karin=0.1

video_tairyoku_d_karin=300
video_seishin_d_karin=400
video_miryoku_d_karin=30
video_karada_d_karin=15
video_atama_d_karin=0
video_kokoro_d_karin=25
video_damagefix_d_karin=0.1

@training_stats_init

# zeroes out all of the stats, counters and flags
macro	training_stats_init

# number of times the musume has been trained
training_count_total=0
training_count_mikan=0
training_count_ichigo=0
training_count_karin=0

# number of times has been spanked, whiped or candled
# i might want to make facemask, analexpansion and swimsuit count also (need to check is karin's video is SM themed)
training_maso_count_mikan=0
training_maso_count_ichigo=0
training_maso_count_karin=0

# once a masochist always a masochist
training_maso_flag_mikan=0
training_maso_flag_ichigo=0
training_maso_flag_karin=0

# times you trainined the musume too hard and she passed out
training_faint_count_mikan=0
training_faint_count_ichigo=0
training_faint_count_karin=0

# times you did a good job training (earned at least 10 charm)
# changes the voice at the start and end of the training setion
training_command_count_mikan=0
training_command_count_ichigo=0
training_command_count_karin=0

# time each action has been taken
# minor actions
training_caress_count_mikan=0
training_caress_count_ichigo=0
training_caress_count_karin=0

training_spank_count_mikan=0
training_spank_count_ichigo=0
training_spank_count_karin=0

training_whip_count_mikan=0
training_whip_count_ichigo=0
training_whip_count_karin=0

training_candle_count_mikan=0
training_candle_count_ichigo=0
training_candle_count_karin=0

# major actions
training_fellatio_count_mikan=0
training_fellatio_mouth_count_mikan=0
training_fellatio_face_count_mikan=0
training_fellatio_count_ichigo=0
training_fellatio_count_karin=0

training_insert_count_mikan=0
training_insert_count_ichigo=0
training_insert_count_karin=0

training_anal_count_mikan=0
training_anal_count_ichigo=0
training_anal_count_karin=0

training_vibe_count_mikan=0
training_vibe_count_ichigo=0
training_vibe_count_karin=0

training_analpearl_count_mikan=0

training_analvibe_count_ichigo=0
training_analvibe_count_karin=0

training_hardanal_count_mikan=0
training_swimsuit_count_mikan=0

training_facemask_count_karin=0
training_video_count_karin=0

# service stuff that is connected to the training system
service_bloomers_count_ichigo=0
service_bunnygirl_count_karin=0
endm
