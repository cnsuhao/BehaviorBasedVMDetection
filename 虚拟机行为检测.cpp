/*
1���꼫��
2�����ʧ
3����ͻ��
*/


#include <stdio.h>
#include <afx.h>
#include <math.h>

void main()
{

	POINT point;
	POINT Pb;
	Pb.x = 0;
	Pb.y = 0;

	int z = 0;//���꼫�˴�������
	int delta = 0;//�������ֱ�߾���
	int maxDelta = 0;
	while (1)
	{
		GetCursorPos(&point);
		//printf("x=%d,y=%d\n", point.x, point.y);

		delta = sqrt((double)(point.x - Pb.x)*(point.x - Pb.x) + (point.y - Pb.y)*(point.y - Pb.y));

		if (maxDelta < delta)
		{
			maxDelta = delta;
			printf("%d\r\n", maxDelta);
		}
		


		Pb = point;


		




		if (point.y<5)
		{
			z++;
		}
		else
		{
			z = 0;
		}

		if (z > 10)
		{
			MessageBox(NULL, L"��⵽�����", L"", MB_OK);
		}

		Sleep(20);
	}
}