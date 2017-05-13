


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
//#include <random>
#include <time.h>
#include <float.h>
//#include "ap_cint.h"
//#include "mat.h"
//#include "minst.h"


//#define eta 1
//#define eta2 1
//#define eta3 1
#define eta 0.002f
#define eta2 0.001f
#define eta3 0.025f
#define renewonece 0.02f

//s2��c3���������ӱ���ȫ���ӣ�ͬʱ�����Գ��ԣ���������

//C1�����:����32X32ͼ��,6�������6��ƫ��,����(5X5+1)X6����,�þ������ȫ����
//������ͼ��Ϊ28X28
/*int table[6][16]={{1,0,0,0,1,1,1,0,0,1,1,1,1,0,1,1},
				  {1,1,0,0,0,1,1,1,0,0,1,1,1,1,0,1},
				  {1,1,1,0,0,0,1,1,1,0,0,1,0,1,1,1},
				  {0,1,1,1,0,0,1,1,1,1,0,0,1,0,1,1},
				  {0,0,1,1,1,0,0,1,1,1,1,0,1,1,0,1},
				  {0,0,0,1,1,1,0,0,1,1,1,1,0,1,1,1}};*/
typedef struct c1_layer
{
	//float d0[32][32];
	float mapData[6][5][5];//����ģ�����ݣ���6�������
	float dmapData[6][5][5];//����ģ�����ݣ���6�������
	//float **map_2;
	//float dmapData[6][5][5];//�������ģ������ݵľֲ��ݶ�
	float bias[6];//ƫ��,һ������ͼ����һ��ƫ�ò���
	float dbias[6];//ƫ��,һ������ͼ����һ��ƫ�ò���
	float v[6][28][28];//���뼤���������ֵ
	float y[6][28][28];//���������Ԫ�����
	float d[6][28][28];//����ľֲ��ݶ�,��ֵ
	//float d_c[6][28][28];
	//float ef[6][28][28];
}c1_layer;

//S2ƽ���ػ���:����ʹ����һ��C1�ļ���������c1_layer.d
//�ػ����ص���ͼ����Сһ�����Ϊ14X14

typedef struct s2_layer
{
	//float input_img[6][28][28];
	//float weig[6];//6��Ȩ�أ�ͬһ����ͼʹ��ͬһȨ��
	//float dweig[6];//6��Ȩ�أ�ͬһ����ͼʹ��ͬһȨ��
	//float bias[6];//6��ƫ�ã�ͬһ����ͼʹ��ͬһƫ��
	//float dbias[6];//6��ƫ�ã�ͬһ����ͼʹ��ͬһƫ��
	float v[6][14][14];//���뼤���������ֵ
	float y[6][14][14];//���������Ԫ�����
	float d[6][14][14];//����ľֲ��ݶ�,��ֵ
	//float d_c[6][14][14];
	//float ef[6][14][14];
	//float db[16];
}s2_layer;

//C3�����:��ȫ���Ӿ���㣬ʹ��table��Ϊ1��Ϊ��һ�����ӣ�����
//(5x5x3+1)x6 + (5x5x4 + 1) x 3 + (5x5x4 +1)x6 + (5x5x6+1)x1 = 1516��ѵ������
//����ʹ����һ���S2����������s2_layer.d
//������ͼ��Ϊ10X10

typedef struct c3_layer
{
	//float input_img[6][14][14];
	//int table[6][16];
	float mapData[16][6][5][5];//����ģ�����ݣ���(3*6+4*6+4*3+6*1)�������,�����Ϊ��,����ȡ�����
	float dmapData[16][6][5][5];//�������ģ������ݵľֲ��ݶ�
	float bias[16];//16��ƫ�ã�ͬһ����ͼʹ��ͬһƫ��
	float dbias[16];//16��ƫ�ã�ͬһ����ͼʹ��ͬһƫ��
	float v[16][10][10];//���뼤���������ֵ
	float y[16][10][10];//���������Ԫ�����
	float d[16][10][10];//����ľֲ��ݶ�,��ֵ
	//float d_c[16][10][10];
	//float ef[16][10][10];
}c3_layer;

//S4ƽ���ػ���:����ʹ����һ��C3�ļ���������c3_layer.d
//�ػ����ص���ͼ����Сһ�����Ϊ5X5

typedef struct s4_layer
{
	//float input_img[16][10][10];
	//float weig[16];//16��Ȩ�أ�ͬһ����ͼʹ��ͬһȨ��
	//float dweig[16];//16��Ȩ�أ�ͬһ����ͼʹ��ͬһȨ��
	//float bias[16];//16��ƫ�ã�ͬһ����ͼʹ��ͬһƫ��
	//float dbias[16];//16��ƫ�ã�ͬһ����ͼʹ��ͬһƫ��
	float v[16][5][5];//���뼤���������ֵ
	float y[16][5][5];//���������Ԫ�����
	float d[16][5][5];//����ľֲ��ݶ�,��ֵ
	//float d_c[16][5][5];
	//float ef[16][5][5];
	//float db[16];
}s4_layer;

//C5�����:ȫ���Ӿ���㣬����(5x5x16+1)x120 = 48120������
//����ʹ����һ���S2����������s4_layer.d
//������Ϊ1ά����120λ����

typedef struct c5_layer
{
	//float input_img[16][5][5];
	float mapData[30][16][5][5];//����ģ�����ݣ���16*120�������
	float dmapData[30][16][5][5];
	float bias[30];//120��ƫ�ã�ͬһ���ʹ��ͬһƫ��
	float dbias[30];
	float v[30];//���뼤���������ֵ
	float y[30];//���������Ԫ�����
	float d[30];//����ľֲ��ݶ�,��ֵ
	//float d_c[120];
	//float ef[120];
}c5_layer;

//F6����һάȫ����������,���7X12�������ͼ��84λһά����
//�ò��ѵ����������������(120 + 1)x84=10164
//����ʹ����һ���S2����������C5_layer.d

/*typedef struct F6_layer
{
	//float input[120];
	float weig[120][84];//Ȩ��120X84��Ȩ��
	float bias[84];//84��ƫ�ã�ͬһ���ʹ��ͬһƫ��
	float v[84];//���뼤���������ֵ
	float y[84];//���������Ԫ�����
	float d[84];//����ľֲ��ݶ�,��ֵ
	//float db[84];//����ľֲ��ݶ�,��ֵ
}F6_layer;*/

typedef struct RBF_layer
{
	//float input[84];
	//float wei[84][10];//Ȩ��
	float wei[30][10];//Ȩ��
	float dwei[30][10];//Ȩ��
	float bias[10];
	float dbias[10];
	float v[10];//���뼤���������ֵ
	float y[10];//���������Ԫ�����

	float d[10];//����ľֲ��ݶ�,��ֵ
	//float d_c[10];
	//float ef[10];
	//float jtemp;
}RBF_layer;


//LeNet-5 CNN�ṹ
/*typedef struct cnn_network{

	c1_layer* C1;
	s2_layer* S2;
	c3_layer* C3;
	s4_layer* S4;
	c5_layer* C5;
	//F6_layer* F6;
	RBF_layer* output;

	float input_img[32][32];//��׼32λ����ͼ��
	//float bit[10];
	float acvau[10];//ʵ�ʽ��
	float eO[10];
	float eF[10]; // ѵ�����
	float* L; // ˲ʱ�������
}CNN;*/

/*typedef struct train_opts{
	int numepochs; // ѵ���ĵ�������
	float alpha; // ѧϰ����
}CNNOpts;*/


//void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],float acvau[10],float eF[10],int renew,float *JL);
void CNNs(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float input_img[32][32],unsigned int right);
//C1��������򴫲�
void C1_conv(c1_layer* C1,float inputimg[32][32]);
//S2�ػ������򴫲�
void S2_pool(c1_layer* C1,s2_layer* S2);
//C3��������򴫲�
void C3_conv(s2_layer* S2,c3_layer* C3);
//S4�ػ������򴫲�
void S4_pool(c3_layer* C3,s4_layer* S4);
//C5��������򴫲�
void C5_conv(s4_layer* S4,c5_layer* C5);
//F6��������򴫲�
//void f6_layer(c5_layer* C5,F6_layer* F6);
//F6�ķ��������ݶȦ����
//void DF6_layer(F6_layer* F6,RBF_layer* output);
//void DF6_layer(c5_layer* C5,RBF_layer* output);
//C5�ķ��������ݶȦ����
//void DC5_layer(c5_layer* C5,F6_layer* F6);
void DC5_layer(c5_layer* C5,RBF_layer* output);
//void DC5_c(c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//S4�ķ��������ݶȦ����
void DS4_layer(s4_layer* S4,c5_layer* C5);
//void DS4_c(s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//C3�ķ��������ݶȦ����
void DC3_layer(c3_layer* C3,s4_layer* S4);
//void DC3_c(c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//S2�ķ��������ݶȦ����
void DS2_layer(s2_layer* S2,c3_layer* C3);
//void DS2_c(s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);
//C1�ķ��������ݶȦ����
void DC1_layer(c1_layer* C1,s2_layer* S2);
//void DC1_c(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float acvau[10],float eF[10]);

//void in_layer(c1_layer* C1);
//C1����˼�ƫ�ø���
void update_C1(c1_layer* C1,float inputimg[32][32]);
//S2Ȩ�ؼ�ƫ�ø���
void update_S2(c1_layer* C1,s2_layer* S2);
//C3����˼�ƫ�ø���
void update_C3(s2_layer* S2,c3_layer* C3);
//S4Ȩ�ؼ�ƫ�ø���
void update_S4(c3_layer* C3,s4_layer* S4);
//C5����˼�ƫ�ø���
void update_C5(s4_layer* S4,c5_layer* C5);
//F5Ȩ�ؼ�ƫ�ø���
//void update_F6(c5_layer* C5,F6_layer* F6);

//void O_layer(F6_layer* F6,RBF_layer* output);
void O_layer(c5_layer* C5,RBF_layer* output);
//void DO_layer(RBF_layer* output,float acvau[10],float eF[10]);
void DO_layer(RBF_layer* output,unsigned int right);
//void DO_c(RBF_layer* output,float acvau[10],float eF[10]);
//void update_OUT(F6_layer* F6,RBF_layer* output);
void update_OUT(c5_layer* C5,RBF_layer* output);

//void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output,float *JL);
void upadteall(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void startup(CNN *cn);

//void loaddate(CNN *cn);
//void savedate(CNN *cn);
void correct(unsigned int right);

float Sigma(float input,float bas);
float sig(float j);
//float Sigma_2(float input,float bas);
float Sigma_3(float input,float bas);
float Dsigma(float y);
float Dsigma_2(float y);
float Dsigma_3(float input,float bas);
//int reverseunsigned charMNIST(int i);
void read_mnist(char* filename_img,char *filename_label,c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void read_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,F6_layer* F6,RBF_layer* output);
void read_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//void save_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,F6_layer* F6,RBF_layer* output);
void save_date(c1_layer* C1,s2_layer* S2,c3_layer* C3,s4_layer* S4,c5_layer* C5,RBF_layer* output);
//float **conv_1(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
//float **conv_2(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
//float **conv_3(float **a,int a_rows,int a_cols,float **b,int b_rows,int b_cols);
void sigmatest(float input);
//void dateport(float input_img[32][32],float acvau[10]);
void dateport(unsigned int date,unsigned char signal,unsigned short *led,unsigned char *signal_out);
void datereadc1(float date,unsigned char* signal);
void datereads2(float date,unsigned char* signal);
void datereadc3(float date,unsigned char* signal);
void datereads4(float date,unsigned char* signal);
void datereadc5(float date,unsigned char* signal);
void datereado(float date,unsigned char* signal);
void datereadinput(unsigned int date,unsigned char* signal);
void datereadacv(float date,unsigned char* signal);
float datewritec1(unsigned char* signal);
float datewrites2(unsigned char* signal);
float datewritec3(unsigned char* signal);
float datewrites4(unsigned char* signal);
float datewritec5(unsigned char* signal);
float datewriteo(unsigned char* signal);
