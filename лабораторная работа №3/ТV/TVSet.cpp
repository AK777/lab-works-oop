#include "stdafx.h"
#include "TVSet.h"
#include <sstream>

CTVSet::CTVSet(void)
{
	m_bIsWorking = false;
	m_iNumberOfChannel = 0;
}

CTVSet::~CTVSet(void)
{
}

int CTVSet::GetNumberOfChannel()
{
	if (!m_bIsWorking)
	{
		return 0;
	}

	return m_iNumberOfChannel;
}

void CTVSet::TurnOn()
{
	m_bIsWorking = true;

	if (m_iNumberOfChannel == 0)
	{
		m_iNumberOfChannel = 1;
	}
}

void CTVSet::TurnOff()
{
	m_bIsWorking = false;
}

bool CTVSet::SelectChannel(int iNumberOfChannel)
{
	if (m_bIsWorking)
	{
		if(iNumberOfChannel > 0 && iNumberOfChannel <= 99)
		{
			m_iNumberOfChannel = iNumberOfChannel;
			return true;
		}

		return false;
	}

	return true;
}

string CTVSet::Info()
{
	string strInfo = "Текущее состояние телевизора - ";
	m_bIsWorking ? strInfo += "включен" : strInfo += "выключен";

	if (m_bIsWorking)
	{
		std::stringstream ss;
		ss << m_iNumberOfChannel;
		string str;
		ss >> str;

		strInfo	+= ";\nНомер канала: " + str;
	}
	return strInfo + "\n";
}
