
#include <stdio.h>
#include <stdlib.h>

// uint8 PwmGenerator (uint8 DutyCycle);
// uint8 LedFlasher (uint8 OnofInterval);
// uint8 ControlFan (uint8 Temp);
// uint8 SawtoothGenerator ();
int u8FindLast (int au32Array_count, int* au32Array, int u32ItemToFind);
int* vidPrintReverseInclusive (int u8LowerNumber, int u8UpprNumber, int* result_size);
int* pu8PrintReverseExclusive (int u8LowerNumber, int u8UpprNumber, int* result_size);
unsigned int u32ClearBit (unsigned int u32Number, unsigned int u8BitNumber);
int u32FindLongestConsecutiveOccurance (int as32Array_count, int* as32Array, int u32Number);
int s32FindMostOccuring (int as32Array_count, int* as32Array);
int u8IsPowerOfThree (unsigned int u32Number);
int vidPrintMaxZeros (unsigned char u8Number);
unsigned char u8RightCircularShift (unsigned int u32InputNumber, int u8NumberOfShifts, unsigned int *pu32Output);
unsigned int u8CalculateHeatingTime (unsigned int u8WaterTempature);
void swap_int (int* number1, int* number2);
void vidReverseArray(int as32ArraySize, int* as32Array);
int checkEvenOrOdd (unsigned int u32InputNumber);
int u8CountOnes(unsigned int u32InputNumber);
int* isPower (int arr_count, int* arr, int* result_count);
int maximum_XOR (int a, int b);
int fourthBit (int number);
int arraySum ( int numbers_count, int* numbers);
int addNumbers2 (float a, float b);
char* lastLetters (char* word);
long calculateAmount (int prices_count, int* prices);
void fizzBuzz (int n);
int minNum (int samDaily, int kellyDaily, int difference);
int superPower (int z);
int* getOneBits (int n, int* result_count);
int changeAds (int base10);
char** twins ( int a_count, char** a, int b_count, char** b, int* result_count);
char* newPassword (char* a, char* b);
int perfectTeam (char* skills);
char* dnaComplement (char* s);
int closedPaths (int number);
int maxMoves (char* s, char* t);
int goodSegment (int badNumbers_count, int* badNumbers, int lower, int upper);
int maxIndex (int s, int badIndex);
// uint8 Dec2SevenSeg (uint8 DecimalNum);
// uint8 BattaryVoltageMonitor (uint8 BattaryVoltage);
// uint32 FallingEdgeCounter (uint8 PinReading);