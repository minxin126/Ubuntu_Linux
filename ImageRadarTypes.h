#pragma once
#define MAX_NUM_OF_POINT 4000
struct ImageRadar_Para_Cfar
{
	int windowSize;
	int guardSize;
	int changeBin;
	int rangeBinMin;
	int rangeBinMax;
	float dopK;
	float powerCri;

};
struct ImageRadar_Para_Doa
{
	float svPhaseStdCri;
	float azRatioCri;
	float elMaxHeight;
	float elMinHeight;
	float azMax;
	float azMin;
	float azUsedMax;
	float azUsedMin;
	float azStepBig;
	float azStepSml;
	int azBinUsedMin;
	int azBinUsedMax;
	float elMax;
	float elMin;
	float elUsedMax;
	float elUsedMin;
	float elStepBig;
	float elStepSml;
	int elBinUsedMin;
	int elBinUsedMax;

};
struct ImageRadar_Para_WaveForm
{
	float startFreq;
	float slope;
	float idleTime;
	float rampEndTime;
	float samplingFreq;
	float adcStartSamplingTime;
	float c;
	float bandWidth;
	float lamda;
	float chirpPeriod;
};
struct ImageRadar_Para_GenPointList
{
	float rangeBinRes;
	float rangeRes;
	float rangeMax;
	float velocityRes;
	float velocityMax;
	float velocityBinRes;
};
struct ImageRadar_Para_SigProc
{
	ImageRadar_Para_WaveForm para_waveform;
	ImageRadar_Para_Cfar para_cfar;
	ImageRadar_Para_Doa para_doa;
	ImageRadar_Para_GenPointList para_genPointList;
};

struct ImageRadar_PointCloud
{
	float x[MAX_NUM_OF_POINT];
	float y[MAX_NUM_OF_POINT];
	float z[MAX_NUM_OF_POINT];
	float v[MAX_NUM_OF_POINT];
	float power[MAX_NUM_OF_POINT];
	float az[MAX_NUM_OF_POINT];
	float el[MAX_NUM_OF_POINT];
	int num;
};