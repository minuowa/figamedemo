#pragma once


class GTimer
{
	FiDeclareSingleton(GTimer);
public:
    GTimer(void);
    ~GTimer(void);

    DWORD GetAccuTime();

    DWORD GetFrameTimems();	    //两次获取当前时间的间隔

	float GetFrameTimeSec();

	void Update();
private:

	DWORD mAccuTime;

	DWORD mFrameTime;

    DWORD mLastTime;		    //上一次时间
};

#define TIMER GTimer::GetSingleton()