#pragma once
//这是一个带微调按钮的Edit控件
// CSpinEdit
#define SPIN_ID 3100

class CSpinEdit : public CEdit
{
	DECLARE_DYNAMIC(CSpinEdit)

public:
	CSpinEdit();
	virtual ~CSpinEdit();

	void SetRange(short lower, short upper);		//设置文本框中的数值范围
	void SetValue(int value);				//设置文本框中的数值
	int GetValue();							//获取文本框中的数值

protected:
	CSpinButtonCtrl m_spin;

	DECLARE_MESSAGE_MAP()
	virtual void PreSubclassWindow();
};


