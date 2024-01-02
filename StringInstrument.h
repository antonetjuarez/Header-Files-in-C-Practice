#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
public:
	void SetNumOfStrings(int num);
	void SetNumOfFrets(int num);
	void SetIsBowed(int num);

	int GetNumOfStrings() const;
	int GetNumOfFrets() const;
	bool GetIsBowed() const;

private:
	int numStrings, numFrets;
	bool isBowed;

};

#endif
