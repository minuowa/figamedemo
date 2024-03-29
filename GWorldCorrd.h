#pragma once
#include "GRenderObject.h"


class GWorldCorrd:public GRenderObject
{
	DeclareEditorType(GWorldCorrd);
private:
	LPDIRECT3DVERTEXBUFFER9 mVBLines;
	LPDIRECT3DVERTEXBUFFER9 mVBCoord;

	LPDIRECT3DINDEXBUFFER9 mIBLines;
	LPDIRECT3DINDEXBUFFER9 mIBCoord;

public:
	GWorldCorrd(void);
	virtual void onCallBack(const CXDelegate& delgate);
	virtual bool Create();
	virtual bool Render();
	bool recreate();
	WORD mLineCount;
	float mWidth;
	void operator=(GWorldCorrd cd);
public:
	~GWorldCorrd(void);
};
