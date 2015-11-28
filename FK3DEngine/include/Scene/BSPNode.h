/********************************************************************
*
*	本文件是FKMMORPG的一部分。本文件版权归属FreeKnightDuzhi(王宏张)所有。
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	文件名：	BSPNode
*	作者：		FreeKnightDuzhi[ 王宏张 ]
*	文件说明：	二叉树节点类
*
*	修改人:		
*	修改内容:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	//二叉树节点类
	class FK_DLL BSPNode
	{
	public:
		BSPPlane*	mpDivPlane3;		//子节点分割面

		BSPNode*	mpPosNode;		//前子节点
		BSPNode*	mpNegNode;		//后子节点

	public:
		BSPNode();
		~BSPNode();
	};
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================
