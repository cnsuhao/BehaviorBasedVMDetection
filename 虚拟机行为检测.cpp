/*
1坐标极端
2鼠标消失
3坐标突变
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

	int z = 0;//坐标极端次数计算
	int delta = 0;//两坐标的直线距离
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
			MessageBox(NULL, L"检测到虚拟机", L"", MB_OK);
		}

		Sleep(20);
	}
}