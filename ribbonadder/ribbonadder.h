/*
 * ribbonadder.h
 *
 *  Created on: 12.04.2009
 *      Author: Bastian
 */

#ifndef RIBBONADDER_H_
#define RIBBONADDER_H_


#endif /* RIBBONADDER_H_ */


#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>


typedef unsigned __int16 uin16;
typedef unsigned __int32 uint32;

struct animfake
{
	__int16 zero1;
	__int16 minusone;
	uint32 nTime;
	uint32 offsettime;
	uint32 nKey;
	uint32 offsetkey;
};

struct animsub{
	uint32 n;
	uint32 ofs;
};

struct ribbon {
	__int32 id;
	__int32 bone;
	float pos[3];
	__int32 nTextures;
	__int32 ofsTextures;
	__int32 nUnknown;
	__int32 ofsUnknown;
	animfake color;
	animfake opacity;
	animfake above;
	animfake below;
	float res, length, gravity;
	__int16 blending1, blending2;
	animfake unk1;
	animfake unk2;
	__int32 unknown;
};

enum eRibbonOffsets{
	refTex=0x0,
	refTexBlend=0x10,
	color_times=0x20,
	color_keys=0x30,
	opacity_times=0x40,
	opacity_keys=0x50,
	above_times=0x60,
	above_keys=0x70,
	below_times=0x80,
	below_keys=0x90,
	unk1_times=0xA0,
	unk1_keys=0xB0,
	unk2_times=0xC0,
	unk2_keys=0xD0,
	color_times_v=0xE0,
	color_keys_v=0xF0,
	opacity_times_v=0x100,
	opacity_keys_v=0x110,
	above_times_v=0x120,
	above_keys_v=0x130,
	below_times_v=0x140,
	below_keys_v=0x150,
	unk1_times_v=0x160,
	unk1_keys_v=0x170,
	unk2_times_v=0x180,
	unk2_keys_v=0x190,
	ribbon_ofs_size=0x1A0


};
