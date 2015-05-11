#include "memControl.h"

Matrix::Matrix( int h,int w ):height(h),width(w)
{
	// ��ά�������ռ�
	data=new double *[height];
	for(int i=0;i<height;i++)
		data[i]=new double[width];
}

Matrix::Matrix():height(0),width(0)
{
	data=NULL;
}

Matrix::~Matrix()
{
	// �ͷ������ڴ�
	for(int i=0;i<height;i++)
		delete []data[i];
	delete []data;
}

