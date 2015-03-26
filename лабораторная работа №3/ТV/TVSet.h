#pragma once

class CTVSet
{
public:
	CTVSet(void);
	~CTVSet(void);

	void TurnOn();
	void TurnOff();
	bool SelectChannel(int iNumberOfChannel);
	string Info();
	void Info(bool *bCurrentState, int* iNumberOfChannel); 
	int GetNumberOfChannel();
	bool m_bIsWorking; 
	int m_iNumberOfChannel; 
};
