## TRPGいつき立ち設定 #########################################################
chara_folder	l_trpg_karin,"chara"
chara_name	l_trpg_karin,"TRPGかりん"
@trpg_karin_small
@trpg_karin_shifuku

## 消す #######################################################################
macro	trpg_karin_
	layer_fadeout	l_trpg_karin
	trpg_karin_flag=0
endmacro

## 距離 #######################################################################
# 遠い
macro	trpg_karin_small
	chara_size	l_trpg_karin,"小",0,0
endm

# 中間
macro	trpg_karin_middle
	chara_size	l_trpg_karin,"中",0,6
endm

# 近い
macro	trpg_karin_large
	chara_size	l_trpg_karin,"大",0,-78
endm

## 服装 ######################################################################
macro	trpg_karin_shifuku
	chara_clothes	l_trpg_karin,"私服"
endm

macro	trpg_karin_in
	if trpg_karin_flag=0 then layer_move	l_trpg_karin,1000,320,0,0,0,PASSTYPE_BEZIER_A
	trpg_karin_flag=1
endm

## 表情 ######################################################################

#- 普通 ----------------------------------------------------------------------
macro	trpg_karin
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\普.png",550,0
	@trpg_karin_in
endm
#- 怒り ----------------------------------------------------------------------
macro	trpg_karin_ikari
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\怒.png",550,0
	@trpg_karin_in
endm
#- 照れ ----------------------------------------------------------------------
macro	trpg_karin_tere
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\照.png",550,0
	@trpg_karin_in
endm
#- 驚き ----------------------------------------------------------------------
macro	trpg_karin_odoroki
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\驚.png",550,0
	@trpg_karin_in
endm
#- 哀しみ --------------------------------------------------------------------
macro	trpg_karin_kanashimi
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\哀.png",550,0
	@trpg_karin_in
endm
#- 喜び --------------------------------------------------------------------
macro	trpg_karin_yorokobi
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\喜.png",550,0
	@trpg_karin_in
endm
macro	trpg_karin_warai
	@trpg_karin_yorokobi
	@trpg_karin_in
endm
#- 必殺 --------------------------------------------------------------------
macro	trpg_karin_special
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\魔法.png",550,0
endm
#- やられ ------------------------------------------------------------------
macro	trpg_karin_damage
	chara	l_trpg_karin,"chara\trpgかりん\小\私服\やられ.png",550,0
	layer_move	l_trpg_karin,500,0,0,120,0,PASSTYPE_BEZIER_A
endm
