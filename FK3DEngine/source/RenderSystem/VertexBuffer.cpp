/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	VertexBuffer
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	
*
*	修改人:		
*	修改内容:
*********************************************************************/

#include "../../include/RenderSystem/RenderSystemInsideHeader.h"

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	VertexBuffer::VertexBuffer()
		: mnBufLen		(0)
		, mVerSize		(0)
		, mbDynamic		(false)
		, mbSoftProc	(false)
	{
	}
	//--------------------------------------------------------------------------------------------------------------
	VertexBuffer::~VertexBuffer()
	{
	}
	//--------------------------------------------------------------------------------------------------------------
	//写入数据到顶点缓存
	void VertexBuffer::WriteData( UINT nOffsetVer, void* pData, UINT nVerNum, bool bNoOverwrite )
	{
		//如果为调试模式则检测指针
#ifdef _DEBUG
		if( pData == NULL )
		{
			Except( Exception::ERR_INVALIDPARAMS, "在写入数据到顶点缓存时传入了空的数据指针。" );
			return;
		}
#endif

		//锁定顶点缓存
		void* pBuffer = Lock( nOffsetVer, nVerNum, bNoOverwrite );

		//复制数据
		memcpy( pBuffer, pData, (size_t)nVerNum * mVerSize );

		//解锁顶点缓存
		Unlock();
	}
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
