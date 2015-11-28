/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	BaseTypeDefine
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	基本类型定义
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================
#include <Windows.h>
//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------

	//坐标相对位置类型
	enum RelPos
	{
		RP_LEFT_UP,
		RP_LEFP_DOWN,
		RP_RIGHT_UP,
		RP_RIGHT_DOWN,
	};

	//--------------------------------------------------------------------------------------------------------------

	//读写指针移动基准类型
	enum BasePos
	{
		BP_Begin,	//起始
		BP_End,		//结尾
		BP_Curpos	//当前读写指针位置
	};

	//--------------------------------------------------------------------------------------------------------------

	const DWORD PF_COMPRESS_MASK	= 0x0100;	//纹理压缩格式掩码
	const DWORD PF_BUMPMAP_MASK		= 0x0200;	//凹凸贴图格式掩码

	//像素格式 
	enum PixelFormat
	{
		//未知格式
		PF_UNKNOWN	= 0x0000,

		//未压缩格式
		PF_A8R8G8B8	= 0x0001,
		PF_X8R8G8B8	= 0x0002,
		PF_R8G8B8	= 0x0003,
		PF_R5G6B5	= 0x0004,
		PF_A1R5G5B5	= 0x0005,
		PF_X1R5G5B5	= 0x0006,
		PF_A4R4G4B4	= 0x0007,

		//纹理压缩格式
		PF_DXT1		= 0x0001 | PF_COMPRESS_MASK,
		PF_DXT2		= 0x0002 | PF_COMPRESS_MASK,
		PF_DXT3		= 0x0003 | PF_COMPRESS_MASK,
		PF_DXT4		= 0x0004 | PF_COMPRESS_MASK,
		PF_DXT5		= 0x0005 | PF_COMPRESS_MASK,

		//凹凸贴图格式
		PF_V8U8		= 0x0001 | PF_BUMPMAP_MASK,
		PF_V16U16	= 0x0002 | PF_BUMPMAP_MASK,
		PF_L6V5U5	= 0x0003 | PF_BUMPMAP_MASK,
		PF_X8L8V8U8	= 0x0004 | PF_BUMPMAP_MASK,
	};

	//--------------------------------------------------------------------------------------------------------------

	//图像数据类型
	enum ImageType
	{
		eBMP,
		eTGA,
		eJPG,
		eDDS,
	};

	//各种图像文件扩展名哈希值
	const int BmpExtNameID = 7323;
	const int TgaExtNameID = 8412;
	const int JpgExtNameID = 7850;
	const int DDSExtNameID = 7382;

	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
