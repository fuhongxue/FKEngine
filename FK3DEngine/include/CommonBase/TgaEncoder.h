/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	TgaEncoder
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	TGA 图像解码器
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	//编码 TGA 图像数据
	extern FK_DLL void EncodeTgaImage( FileObject* pDstFile, BYTE* pSrcBuf, int nPitch, PixelFormat ePixelFormat,
		UINT nWidth, UINT nHeight );
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
