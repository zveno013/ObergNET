#using <mscorlib.dll>

using namespace System;  //������������ ���� System

void main(void)
{
	Console::WriteLine(
		"{0:C}, {1:D}, {2:E}, {3:F}, {4:G}, {5:N}, {6:X}",
		__box(100), // ���� ������ (currency)
		__box(200), // ���������� ����� (decimal)
		__box(300), // ���������� (exponent)
		__box(400), // � ������������� ������ (fixed point)
		__box(500), // ����� (general)
		__box(600), // ����� (number)
		__box(700) // ����������������� (hexadecimal)
		);
}