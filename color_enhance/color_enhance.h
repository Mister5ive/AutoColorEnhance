#ifdef COLOR_ENHANCE_DLL_EXPORTS
#define COLOR_ENHANCE_API __declspec(dllexport)
#else
#define COLOR_ENHANCE_API __declspec(dllimport)
#endif
#include<iostream>

extern "C"
{
	typedef enum color_enhance_return_code{
		CE_SUCCESS = 0,//color_enhance�ɹ�
		IN_ERROR = -1,//����ָ��Ϊ��
		INP_ERROR = -2,//����������� or ������ȷ
		OUT_ERROR = -3,//���ָ��Ϊ��
	}CER_code;

}

/*
��������@��ɫ��ǿ
����@pYuvSrc ָ��YUVͼ���ָ��
	 width�� heightΪ����YUVͼ��Ŀ�͸�
	 pYuvDst ָ����ɫ��ǿ���YUVָ�룬ʹ��ǰ������ڴ�ռ䡣

����ֵ@
     CE_SUCCESS = 0,//color_enhance�ɹ�
	 IN_ERROR = -1,//����ָ��Ϊ��
	 INP_ERROR = -2,//����������� or ������ȷ
	 OUT_ERROR = -3,//���ָ��Ϊ��
*/
extern "C"
COLOR_ENHANCE_API  int color_enhance(const unsigned char* pYuvSrc, int width, int height, unsigned char* &pYuvDst);

