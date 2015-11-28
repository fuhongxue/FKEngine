/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	SkyEntity
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	天空体
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	//天空体
	class FK_DLL SkyEntity
	{
	protected:
		RenderState			mRenderOpacity;		//天空体不透明渲染状态
		RenderState			mRenderTransparent;	//天空体透明渲染状态

		Matrix4				mMatView;			//渲染天空体的观看矩阵
		Matrix4				mMatViewSave;		//原有的观看矩阵备份
		Matrix4				mMatWorld;			//渲染天空体的世界矩阵
		Matrix4				mMatWorldSave;		//原有的观看世界备份

	public:
		SkyEntity();
		virtual ~SkyEntity() = 0;

		//更新天空体
		virtual void _UpdateSky( float fTimeSinceLastFrame ) = 0;

		//渲染天空体
		virtual void _RenderSky() = 0;

	protected:
		//设置纹理状态
		void FKFastcall _SetTextureState();
	};
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
