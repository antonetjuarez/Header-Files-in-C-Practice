#include "StringInstrument.h"

void StringInstrument::SetNumOfStrings(int num) {
	numStrings = num;
}

void StringInstrument::SetNumOfFrets(int num) {
	numFrets = num;

}

void StringInstrument::SetIsBowed(int num) {
	isBowed = num;

}

int StringInstrument::GetNumOfStrings() const {
	return numStrings;


}

int StringInstrument::GetNumOfFrets() const {
	return numFrets;
}

bool StringInstrument::GetIsBowed() const {
	return isBowed;
}