/********************************************************************
*
*	���ļ���FKMMORPG��һ���֡����ļ���Ȩ����FreeKnightDuzhi(������)���С�
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	�ļ�����	RenderSubGroup
*	���ߣ�		FreeKnightDuzhi[ ������ ]
*	�ļ�˵����	����Ⱦ����
*
*	�޸���:		
*	�޸�����:
*********************************************************************/

#pragma once

//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------
	//��Ⱦ��Ԫ
	struct RenderUnit
	{
		RenderParam*		pRenderParam;		//��Ⱦ����ָ��
		RenderInstance*		pRenderInstance;	//��Ⱦʵ��ָ��
	};
	//--------------------------------------------------------------------------------------------------------------
	typedef Stack< RenderUnit >		RenderUnitStack;
	//--------------------------------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------------------------------
	//������Ⱦ��Ԫ
	FKInline void SwapRenderUnit( RenderUnit* pUnitA, RenderUnit* pUnitB );
	//--------------------------------------------------------------------------------------------------------------

	//--------------------------------------------------------------------------------------------------------------
	//����Ⱦ����
	class FK_DLL RenderSubGroup
	{
	public:
		UINT				mnPriority;			//����Ⱦ�����ȼ�

		RenderUnit*			mpHeadRenderUnit;	//��ʼ��Ⱦ��Ԫ
		RenderUnit*			mpRearRenderUnit;	//��β��Ⱦ��Ԫ

		RenderUnit*			mpHeadSolidUnit;	//��ʼ��͸����Ⱦ��Ԫ
		RenderUnit*			mpRearSolidUnit;	//��β��͸����Ⱦ��Ԫ

		RenderUnit*			mpHeadTransUnit;	//��ʼ͸����Ⱦ��Ԫ
		RenderUnit*			mpRearTransUnit;	//��β͸����Ⱦ��Ԫ

	public:
		//��������Ⱦ��
		void SortRenderSubGroup( const Camera* pCamera );

	protected:
		//������ǰ͸����Ⱦ��Ԫ
		FKInline RenderUnit* _FindFirstTransUnit( RenderUnit* pStartUnit );

		//������ĩ��͸����Ⱦ��Ԫ
		FKInline RenderUnit* _FindLastSolidUnit( RenderUnit* pStartUnit );

		//����͸����Ⱦ��Ԫ
		FKInline void _SortSolidRenderUnit();

		//����͸����Ⱦ��Ԫ
		FKInline void _SortTransRenderUnit( const Camera* pCamera );
	};
	//--------------------------------------------------------------------------------------------------------------
	typedef Stack< RenderSubGroup >	RenderSubGroupStack;
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================