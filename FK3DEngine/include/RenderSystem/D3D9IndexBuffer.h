/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	D3D9IndexBuffer
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	D3D9 索引缓存类
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================
struct IDirect3DIndexBuffer9;
//--------------------------------------------------------------------------------------------------------------

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	//D3D9 索引缓存类
	class FK_DLL D3D9IndexBuffer : public IndexBuffer
	{
	public:
		IDirect3DIndexBuffer9*		mpD3D9IndexBuffer;

	public:
		D3D9IndexBuffer();
		~D3D9IndexBuffer();

		//创建索引缓存
		void CreateIndexBuffer( UINT nIndexNum, IndexType eIndexType, bool bDynamic = false, bool bSoftProc = false );

		//释放索引缓存
		void ReleaseIndexBuffer();

		//锁定索引缓存
		void* Lock( UINT nOffsetNum, UINT nLockNum, bool bNoOverwrite = false );

		//解锁索引缓存
		void Unlock();
	};
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
