## TRPG���������ݒ� #########################################################
chara_folder	l_trpg_mikan,"chara"
chara_name	l_trpg_mikan,"TRPG�݂���"
@trpg_mikan_small
@trpg_mikan_shifuku

## ���� #######################################################################
macro	trpg_mikan_
	layer_fadeout	l_trpg_mikan
	trpg_mikan_flag=0
endmacro

## ���� #######################################################################
# ����
macro	trpg_mikan_small
	chara_size	l_trpg_mikan,"��",0,0
endm

# ����
macro	trpg_mikan_middle
	chara_size	l_trpg_mikan,"��",0,6
endm

# �߂�
macro	trpg_mikan_large
	chara_size	l_trpg_mikan,"��",0,-78
endm

## ���� ######################################################################
macro	trpg_mikan_shifuku
	chara_clothes	l_trpg_mikan,"����"
endm

macro	trpg_mikan_in
	if trpg_mikan_flag=0 then layer_move	l_trpg_mikan,1000,320,0,0,0,PASSTYPE_BEZIER_A
	trpg_mikan_flag=1
endm

## �\�� ######################################################################

#- ���� ----------------------------------------------------------------------
macro	trpg_mikan
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\��.png",420,0
	@trpg_mikan_in
endm
#- �{�� ----------------------------------------------------------------------
macro	trpg_mikan_ikari
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\�{.png",420,0
	@trpg_mikan_in
endm
#- �Ƃ� ----------------------------------------------------------------------
macro	trpg_mikan_tere
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\��.png",420,0
	@trpg_mikan_in
endm
#- ���� ----------------------------------------------------------------------
macro	trpg_mikan_odoroki
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\��.png",420,0
	@trpg_mikan_in
endm
#- ������ --------------------------------------------------------------------
macro	trpg_mikan_kanashimi
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\��.png",420,0
	@trpg_mikan_in
endm
#- ��� --------------------------------------------------------------------
macro	trpg_mikan_yorokobi
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\��.png",420,0
	@trpg_mikan_in
endm
macro	trpg_mikan_warai
	@trpg_mikan_yorokobi
endm
#- �K�E --------------------------------------------------------------------
macro	trpg_mikan_special
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\�K�E.png",420,0
endm
#- ���� ------------------------------------------------------------------
macro	trpg_mikan_damage
	chara		l_trpg_mikan,"chara\trpg�݂���\��\����\����.png",420,0
	layer_move	l_trpg_mikan,500,0,0,120,0,PASSTYPE_BEZIER_A

endm