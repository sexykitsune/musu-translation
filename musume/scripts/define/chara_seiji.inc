## ���i�����ݒ� #############################################################
chara_folder	l_seiji,"chara"
chara_name	l_seiji,"���i"
@seiji_small
@seiji_shifuku

## ���� #######################################################################
macro	seiji_
	chara_off	l_seiji
	layer_release	l_seiji+1
endmacro

## ���� #######################################################################
# ����
macro	seiji_small
	chara_size	l_seiji,"��",0,-30
endm

# ����
macro	seiji_middle
	chara_size	l_seiji,"��",0,0
endm

# �߂�
macro	seiji_large
	chara_size	l_seiji,"��",0,0
endm

## ���� ######################################################################
macro	seiji_shifuku
	chara_clothes	l_seiji,"����"
endm


## �\�� ######################################################################

#- ���� ----------------------------------------------------------------------
macro	seiji
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
endm
#- �΂� ----------------------------------------------------------------------
macro	seiji_warai
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
endm
#- �{�� ----------------------------------------------------------------------
macro	seiji_ikari
	layer_release	l_seiji+1
	chara_auto	l_seiji,"�{.png"
endm
#- �ɂ� ----------------------------------------------------------------------
macro	seiji_niko
	layer_release	l_seiji+1
	chara_auto	l_seiji,"�ɂ�.png"
endm


#- �� ----------------------------------------------------------------------
macro	seiji_ase
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
endm
#- ���� ----------------------------------------------------------------------
macro	seiji_odoroki
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
endm
#- ������ --------------------------------------------------------------------
macro	seiji_kanashimi
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
endm
#- ���� ----------------------------------------------------------------------
macro	seiji_goukyuu
	layer_release	l_seiji+1
	chara_auto	l_seiji,"����.png"
endm



#- ���� ----------------------------------------------------------------------
macro	seiji2
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
endm
#- �΂� ----------------------------------------------------------------------
macro	seiji2_warai
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
	layer_movepass_add	l_seiji,0,100,0,8
	layer_movepass_add	l_seiji,0,100,0,0
	layer_movepass_add	l_seiji,0,100,0,8
	layer_movepass_add	l_seiji,0,100,0,0
	layer_movepass_add	l_seiji,0,100,0,8
	layer_movepass_add	l_seiji,0,100,0,0
	layer_movepass_add	l_seiji,0,100,0,8
	layer_movepass_add	l_seiji,0,100,0,0
	layer_movepass_add	l_seiji,0,100,0,8
	layer_movepass_add	l_seiji,0,100,0,0
	layer_movepass_play	l_seiji,0,play_once

	chara		l_seiji+1,"chara\�}�[�N\�Ă�Ă�}�[�N2_��.png"
	layer_reference_set	l_seiji+1,l_seiji
	layer_position	l_seiji+1,120,40
	layer_scalepass_add 	l_seiji+1,0,	300,30,30
	layer_scalepass_add 	l_seiji+1,0,	300,0,0
	layer_scalepass_play	l_seiji+1,0,	PLAY_LOOP
endm
#- �{�� ----------------------------------------------------------------------
macro	seiji2_ikari
	layer_release	l_seiji+1
	chara_auto	l_seiji,"�{.png"
#	layer_movepass_add	l_seiji,0,50,0,8
#	layer_movepass_add	l_seiji,0,50,0,0
#	layer_movepass_add	l_seiji,0,50,0,8
#	layer_movepass_add	l_seiji,0,50,0,0
#	layer_movepass_add	l_seiji,0,50,0,8
#	layer_movepass_add	l_seiji,0,50,0,0
#	layer_movepass_add	l_seiji,0,50,0,8
#	layer_movepass_add	l_seiji,0,50,0,0
#	layer_movepass_add	l_seiji,0,50,0,8
#	layer_movepass_add	l_seiji,0,50,0,0
#	layer_movepass_play	l_seiji,0,play_once

	chara		l_seiji+1,"chara\�}�[�N\�{��}�[�N_��.png"
	layer_reference_set	l_seiji+1,l_seiji
	layer_position	l_seiji+1,160,32
	layer_scalepass_add 	l_seiji+1,0,	100,20,20
	layer_scalepass_add 	l_seiji+1,0,	100,0,0
	layer_scalepass_play	l_seiji+1,0,	PLAY_LOOP


endm
#- �ɂ� ----------------------------------------------------------------------
macro	seiji2_niko
	layer_release	l_seiji+1
	chara_auto	l_seiji,"�ɂ�.png"
endm


#- �� ----------------------------------------------------------------------
macro	seiji2_ase
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
	chara		l_seiji+1,"chara\�}�[�N\��Ԋ��}�[�N2_��.png"

	layer_reference_set	l_seiji+1,l_seiji
	layer_position	l_seiji+1,120,20
	layer_movepass_add	l_seiji+1,0,0,0,0
	layer_movepass_add	l_seiji+1,0,1000,-32,32
	layer_movepass_play	l_seiji+1,0,play_once
	layer_alpha		l_seiji+1,1000,0,-255,passtype_tcb
endm
#- ���� ----------------------------------------------------------------------
macro	seiji2_odoroki
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
	layer_movepass_add	l_seiji,0,50,0,8
	layer_movepass_add	l_seiji,0,50,0,0
	layer_movepass_add	l_seiji,0,50,0,8
	layer_movepass_add	l_seiji,0,50,0,0
	layer_movepass_add	l_seiji,0,50,0,8
	layer_movepass_add	l_seiji,0,50,0,0
	layer_movepass_play	l_seiji,0,play_once

	chara		l_seiji+1,"chara\�}�[�N\���}�[�N_��.png"
	layer_reference_set	l_seiji+1,l_seiji
	layer_position	l_seiji+1,160,-16
	layer_move	l_seiji+1,500,0,0,0,80,passtype_tcb
endm
#- ������ --------------------------------------------------------------------
macro	seiji2_kanashimi
	layer_release	l_seiji+1
	chara_auto	l_seiji,"��.png"
	chara		l_seiji+1,"chara\�}�[�N\�������_��.png"
	layer_reference_set	l_seiji+1,l_seiji
	layer_position	l_seiji+1,100,40
	layer_scalepass_add 	l_seiji+1,0,	300,20,20
	layer_scalepass_add 	l_seiji+1,0,	300,0,0
	layer_scalepass_play	l_seiji+1,0,	PLAY_LOOP
endm
#- ���� ----------------------------------------------------------------------
macro	seiji2_goukyuu
	layer_release	l_seiji+1
	chara_auto	l_seiji,"����.png"
	layer_movepass_add	l_seiji,0,50,0,8
	layer_movepass_add	l_seiji,0,50,0,0
	layer_movepass_add	l_seiji,0,50,0,8
	layer_movepass_add	l_seiji,0,50,0,0
	layer_movepass_add	l_seiji,0,50,0,8
	layer_movepass_add	l_seiji,0,50,0,0
	layer_movepass_play	l_seiji,0,play_loop
endm
