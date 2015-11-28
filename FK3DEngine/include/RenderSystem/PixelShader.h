/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	PixelShader
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	//像素着色器
	class FK_DLL PixelShader : public BaseShader
	{
	protected:
		static PixelShader*		mpLastSetPS;	//最后一次设置的像素着色器指针

	public:
		PixelShader();
		virtual ~PixelShader() = 0;

		//构建像素着色器
		virtual void BuildPixelShader() = 0;

		//设置像素着色器
		virtual void SetPixelShader() = 0;

		//设置像素着色器参数
		virtual void SetPixelShaderParam() = 0;

		//释放像素着色器
		virtual void ReleasePixelShader() = 0;
	};
	//--------------------------------------------------------------------------------------------------------------
	typedef Stack< PixelShader* >		PixelShaderList;
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
