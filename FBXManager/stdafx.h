// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>

#ifdef _DEBUG
#include "conio.h"
#undef FBXSDK_printf
#define FBXSDK_printf _cprintf
#endif // DEBUG
// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
