/*!	@file
	@brief �A�E�g���C�����  �f�[�^�v�f

	@author Norio Nakatani
	@date	1998/06/23 �쐬
*/
/*
	Copyright (C) 1998-2001, Norio Nakatani

	This source code is designed for sakura editor.
	Please contact the copyright holder to use this code for other purpose.
*/

#include "StdAfx.h"
#include "CFuncInfo.h"

/*! CFuncInfo�N���X�\�z */
CFuncInfo::CFuncInfo(
	int		nFuncLineCRLF,	/*!< �֐��̂���s(CRLF�P��) */
	int		nFuncLineLAYOUT,/*!< �֐��̂���s(�܂�Ԃ��P��) */
//	int		nFuncLine,		/*!< �֐��̂���s */
	const char*	pszFuncName,	/*!< �֐��� */
	int		nInfo			/*!< �t����� */
) : m_nDepth(0)				/*!< �[�� */
{
	m_nFuncLineCRLF = nFuncLineCRLF;		/* �֐��̂���s(CRLF�P��) */
	m_nFuncLineLAYOUT = nFuncLineLAYOUT;	/* �֐��̂���s(�܂�Ԃ��P��) */
//	m_nFuncLine = nFuncLine;;
//	m_cmemFuncName = pszFuncName;
//	m_cmemFuncName.SetData( pszFuncName, lstrlen( pszFuncName ) );
	m_cmemFuncName.SetString( pszFuncName );

	m_nInfo = nInfo;
	return;
}




/* CFuncInfo�N���X���� */
CFuncInfo::~CFuncInfo()
{

}


/*[EOF]*/