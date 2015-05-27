#using <mscorlib.dll>

using namespace System;  //пространство имен System

//class сборщика мусора
__gc class InputWrapper
{
public:
	int getInt(String *pprompt)  //Строка
	{
		Console::Write(pprompt);
		String *pbuf = Console::ReadLine();
		return Convert::ToInt32(pbuf); 
	}
	double getDouble(String *pprompt)
	{
		Console::Write(pprompt);
		String *pbuf = Console::ReadLine();
		return Convert::ToDouble(pbuf);
	}
	Decimal getDecimal(String *pprompt)
	{
		Console::Write(pprompt);
		String *pbuf = Console::ReadLine();
		return Convert::ToDecimal(pbuf);
	}
	String *getString(String *pprompt)
	{
		Console::Write(pprompt);
		String *pbuf = Console::ReadLine();
		return pbuf;
	}
};

void main(void)
{
	InputWrapper *piw = new InputWrapper;
	int numTemp = piw->getInt("How many temp's? ");
	for (int i=0; i<numTemp; i++)
	{
		int fahr = piw->getInt("Temp. (Fahrenheit): ");
		int celsius = (fahr - 32) * 5 / 9;  //Цельсия
		Console::WriteLine("Fahrenheit = {0}", fahr.ToString());
		Console::WriteLine("Celsius = {0}", __box(celsius));
	}
}