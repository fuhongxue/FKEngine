/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	D3D9ShaderManager
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	D3D9 着色器管理器
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	// D3D9 着色器管理器
	class FK_DLL D3D9ShaderManager : public ShaderManager
	{
	public:
		D3D9ShaderManager();
		~D3D9ShaderManager();

		//创建顶点着色器
		VertexShader* CreateVertexShader();

		//创建像素着色器
		PixelShader* CreatePixelShader();
	};
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
