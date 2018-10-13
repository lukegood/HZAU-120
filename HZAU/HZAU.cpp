#include "stdafx.h"
#include <GL/glut.h>
#include <stdio.h>
#include <Windows.h>

int i = 0;//控制色块颜色变化
int j = 0;//控制HZAU颜色变化
int k = 0;//控制文字颜色变化
float color1 = 1.0;//四周色块的颜色
float color2 = 0.0;
float color3 = 0.0;
float color4 = 0.0;//HZAU的颜色
float color5 = 1.0;
float color6 = 0.0;
float color7 = 0.0;//文字的颜色
float color8 = 0.0;
float color9 = 1.0;

float RecLeftBotx = -0.5;
float RecLeftBoty = -0.75;
float RecRightTopx = -0.45;
float RecRightTopy = -0.7;

float CloudLx = -0.5;
float CloudRx = -0.4;

void drawAround(void) {//绘制四周的色块
	glColor3f(color1, color2, color3);

	glBegin(GL_POLYGON);//上
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.8f);
	glVertex2f(-1.0f, 0.8f);
	glEnd();

	glBegin(GL_POLYGON);//左
	glVertex2f(-1.0f, 0.8f);
	glVertex2f(-0.9f, 0.8f);
	glVertex2f(-0.9f, -0.8f);
	glVertex2f(-1.0f, -0.8f);
	glEnd();

	glBegin(GL_POLYGON);//下
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.8f);
	glVertex2f(-1.0f, -0.8f);
	glEnd();

	glBegin(GL_POLYGON);//右
	glVertex2f(1.0f, 0.8f);
	glVertex2f(0.9f, 0.8f);
	glVertex2f(0.9f, -0.8f);
	glVertex2f(1.0f, -0.8f);
	glEnd();

	glFlush();//立即刷新
}

void drawHZAU(void) {
	glColor3f(color4, color5, color6);
	glBegin(GL_POLYGON);//绘制H
	glVertex2f(-0.7, 0.5);
	glVertex2f(-0.65, 0.5);
	glVertex2f(-0.65, -0.5);
	glVertex2f(-0.7, -0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.65, 0.05);
	glVertex2f(-0.55, 0.05);
	glVertex2f(-0.55, -0.05);
	glVertex2f(-0.65, -0.05);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.55, 0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.55, -0.5);
	glEnd();

	glBegin(GL_POLYGON);//绘制Z
	glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.45f);
	glVertex2f(-0.4f, 0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.4f, -0.5f);
	glVertex2f(-0.2f, -0.5f);
	glVertex2f(-0.2f, -0.45f);
	glVertex2f(-0.4f, -0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.45f);
	glVertex2f(-0.4f, -0.5f);
	glVertex2f(-0.4f, -0.45f);
	glEnd();

	glBegin(GL_POLYGON);//绘制A
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.45f);
	glVertex2f(-0.05f, -0.5f);
	glVertex2f(-0.1f, -0.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.45f);
	glVertex2f(0.05f, -0.5f);
	glVertex2f(0.1f, -0.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.045f, 0.05f);
	glVertex2f(-0.045f, -0.05f);
	glVertex2f(0.045f, -0.05f);
	glVertex2f(0.045f, 0.05f);
	glEnd();

	glBegin(GL_POLYGON);//绘制U
	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.25f, -0.5f);
	glVertex2f(0.2f, -0.5f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.25f, -0.45f);
	glVertex2f(0.25f, -0.5f);
	glVertex2f(0.35f, -0.5f);
	glVertex2f(0.35f, -0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.4f, 0.5f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, -0.5f);
	glVertex2f(0.4f, -0.5f);
	glEnd();
	
	glFlush();
}

void drawTree(void) {
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.64f, 0.48f);
	glVertex2f(0.5f, 0.1f);
	glVertex2f(0.78f, 0.1f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(0.57f, 0.1f);
	glVertex2f(0.45f, -0.2f);
	glVertex2f(0.83f, -0.2f);
	glVertex2f(0.71f, 0.1f);
	glEnd();
	glColor3f(1.0f, 0.5f, 0.14f);
	glBegin(GL_POLYGON);
	glVertex2f(0.62f, -0.2f);
	glVertex2f(0.66f, -0.2f);
	glVertex2f(0.66f, -0.8f);
	glVertex2f(0.62f, -0.8f);
	glEnd();
	glFlush();
}

void drawStar(void) {
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.82f, 0.78f);
	glVertex2f(-0.86f, 0.6f);
	glVertex2f(-0.82f, 0.3f);
	glVertex2f(-0.78f, 0.6f);
	glEnd();
	glFlush();
}

void drawCloud(void) {
	glColor3f(0.57f, 0.88f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(CloudLx, 0.7f);
	glVertex2f(CloudLx + 0.05, 0.75f);
	glVertex2f(CloudLx + 0.1, 0.75f);
	glVertex2f(CloudLx + 0.15, 0.7f);
	glVertex2f(CloudLx + 0.1, 0.65f);
	glVertex2f(CloudLx + 0.05, 0.65f);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(CloudLx, 0.7f);
	glVertex2f(CloudLx + 0.15, 0.75f);
	glVertex2f(CloudLx + 0.2, 0.75f);
	glVertex2f(CloudLx + 0.25, 0.7f);
	glVertex2f(CloudLx + 0.2, 0.65f);
	glVertex2f(CloudLx + 0.15, 0.65f);
	glEnd();
	glFlush();
}

void drawRectangle(void) {
	glColor3f(color1, color2, color3);
	//glBegin(GL_POLYGON);
	glRectf(RecLeftBotx, RecLeftBoty, RecRightTopx, RecRightTopy);
	glFlush();
}

void selectFont(int size, int charset, const char* face) { //用于设置字体的函数
	HFONT hFont = CreateFontA(size, 0, 0, 0, FW_MEDIUM, 0, 0, 0,
		charset, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, face);
	HFONT hOldFont = (HFONT)SelectObject(wglGetCurrentDC(), hFont);
	DeleteObject(hOldFont);
}void CreateCharacter(const char* str) {//显示文字
	int len = 0, i;//指示字符数组是否到头
	wchar_t* wstring;//用于保存转换字节后的String
	HDC hDC = wglGetCurrentDC();//wglUseFontBitmapsW函数需要用到的参数，必须通过这种方法生成
	GLuint list = glGenLists(1);//定义一个保存一个字符的显示列表	//len = 0;
	for (i = 0; str[i] != '\0'; ++i)//计算一共有多少个字符，如果是汉字则每两个字节算一个字符
	{
		if (IsDBCSLeadByte(str[i]))//
			++i;
		++len;
	}
	// 由于英文、汉字所占字节不同，所以统一转换为占用相同的字节数
	wstring = (wchar_t*)malloc((len + 1) * sizeof(wchar_t));
	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str, -1, wstring, len);
	wstring[len] = L'\0';
	// 逐个输出字符
	for (i = 0; i<len; ++i)
	{
		wglUseFontBitmapsW(hDC, wstring[i], 1, list);// 把每个字符的绘制命令都装到对应的显示列表中
		glCallList(list);//调用显示列表
	}
	// 回收所有临时资源
	free(wstring);
	glDeleteLists(list, 1);
}void showString(void) {
	selectFont(25, GB2312_CHARSET, "微软雅黑");
	glColor3f(color7, color8, color9);
	glRasterPos2f(0.6f, 0.6f);
	CreateCharacter("热烈庆祝");	glRasterPos2f(0.45f, 0.5f);	CreateCharacter("华中农业大学建校120周年");	glFlush();}
void TimerColor1(int value)
{
	i = i + 0.1;
	color1 = color1 - i;
	color2 = color2 + i + 0.12;
	color3 = color3 + i + 0.21;
	if (color1 <= 0.0) {
		color1 = 1.0;
	}
	if (color2 >= 1.0) {
		color2 = 0.0;
	}
	if (color3 >= 1.0) {
		color3 = 0.0;
	}
	if (i >= 1) {
		i = 0;
	}
	glutPostRedisplay(); //刷新画面
	glutTimerFunc(1000, TimerColor1, 1);
}

void TimerColor2(int value)
{
	j = j + 0.1;
	color5 = color5 - j;
	color4 = color4 + j + 0.12;
	color6 = color6 + j + 0.21;
	if (color5 <= 0.0) {
		color5 = 1.0;
	}
	if (color4 >= 1.0) {
		color4 = 0.0;
	}
	if (color6 >= 1.0) {
		color6 = 0.0;
	}
	if (j >= 1) {
		j = 0;
	}
	glutPostRedisplay(); //刷新画面
	glutTimerFunc(500, TimerColor2, 1);
}

void TimerColor3(int value)
{
	k = k + 0.1;
	color9 = color9 - k;
	color8 = color8 + k + 0.12;
	color7 = color7 + k + 0.21;
	if (color9 <= 0.0) {
		color9 = 1.0;
	}
	if (color8 >= 1.0) {
		color8 = 0.0;
	}
	if (color7 >= 1.0) {
		color7 = 0.0;
	}
	if (k >= 1) {
		k = 0;
	}
	glutPostRedisplay(); //刷新画面
	glutTimerFunc(500, TimerColor3, 1);
}

void TimerMove1(int value) {
	RecLeftBotx = RecLeftBotx + 0.05;
	RecRightTopx = RecRightTopx + 0.05;
	if (RecRightTopx >= 0.75) {
		RecLeftBotx = -0.5;
		RecRightTopx = -0.45;
	}
	glutTimerFunc(700, TimerMove1, 1);
}

void TimerMove2(int value) {
	CloudLx = CloudLx + 0.05;
	if (CloudLx + 0.15 >= 0.5) {
		CloudLx = -0.5;
	}
	glutTimerFunc(700, TimerMove2, 1);
}

void myDisplay(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);//设置清空背景色为黑色
	glClear(GL_COLOR_BUFFER_BIT);//清空背景为黑色
	drawAround();
	drawHZAU();
	drawRectangle();
	showString();
	drawTree();
	drawStar();
	drawCloud();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); 
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1000, 500);
	glutCreateWindow("缤纷HZAU120周年"); // 设置窗口标题
	glutDisplayFunc(&myDisplay);
	glutTimerFunc(1000, TimerColor1, 1);
	glutTimerFunc(500, TimerColor2, 1);
	glutTimerFunc(700, TimerColor3, 1);
	glutTimerFunc(400, TimerMove1, 1);
	glutTimerFunc(400, TimerMove2, 1);
	glutMainLoop();
	return 0;
}