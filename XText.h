#pragma once


enum OBJTYPE
{
    otEye, otWorld, otBillBoard, otUI
};


enum nFontSize
{
    fs8, fs9, fs10, fs11, fs12, fs14, fs16, fs18, fs20, fs22, fs24, fs26, fs28, fs36, fs48, fs72,
    //�����Сö��{8,9,10,11,12,14,16,18,20,22,24,26,28,36,48,72};
};
class CXText
{
    private:
        ID3DXFont *mFonts[16];
        ID3DXFont *mCurrentFont;

        ID3DXFont *mDefaultFont;
        nFontSize	LnowFontSize;
    public:
        LPD3DXSPRITE mFontSprite;
        CXText( void );
        ~CXText( void );
		bool Init();

        void SetCurrentFontSize( nFontSize fs );

        int DrawTextDefault( char* sText, D3DVECTOR pos );
        //2D��ʹ��,������ԭ��Ϊ��Ļ���Ͻ�

        int DrawTextInRect( char* sText, RECT *r, DWORD Color, OBJTYPE ot, TextPos tp );

        //3D��ʹ�ã�������ϵΪ���屾������ϵ
        int DrawTextByPosColOt( char* sText, D3DVECTOR Pos, DWORD Color, OBJTYPE ot, bool Center ); //center��ʾ�Ƿ������ʾ��Pos.x,Pos.yΪ��������

        void DrawPic(
            LPDIRECT3DTEXTURE9 Pic,
            D3DVECTOR Pos,
            bool IsCenter,  //�Ƿ���PosΪ���Ļ�������
            OBJTYPE ot,
            bool bAlphaBlend,//�Ƿ��뵱ǰ�������
            D3DCOLOR dwColor //�����ڸ�ɫ
        );
        //2D3D����ʹ��
};

//extern CXText gText;