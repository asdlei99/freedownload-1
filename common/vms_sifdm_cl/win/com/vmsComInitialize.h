#pragma once
class vmsComInitialize
{
public:
	vmsComInitialize ()
	{
		m_hrInitializeResult = CoInitialize (nullptr);
	}

	virtual ~vmsComInitialize ()
	{
		if (SUCCEEDED (m_hrInitializeResult))
			CoUninitialize ();
	}

protected:
	HRESULT m_hrInitializeResult;
};