#using <mscorlib.dll>

using namespace System;  //пространство имен System

void main(void)
{
	Console::WriteLine(
		"{0:C}, {1:D}, {2:E}, {3:F}, {4:G}, {5:N}, {6:X}",
		__box(100), // поле валюты (currency)
		__box(200), // десятичное число (decimal)
		__box(300), // экспонента (exponent)
		__box(400), // с фиксированной точкой (fixed point)
		__box(500), // общий (general)
		__box(600), // число (number)
		__box(700) // шестнадцатеричное (hexadecimal)
		);
}