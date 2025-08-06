#pragma once

class ColorARGB
{
public:
	/// <summary>
	/// Creates default transparent black color.
	/// </summary>
	ColorARGB();

	/// <summary>
	/// Creates color obj with given ARGB values.
	/// </summary>
	ColorARGB(int alpha, int red, int green, int blue);

	/// <summary>
	/// Retrieves the specified ARGB component value from the ColorARGB object.
	/// </summary>
	/// <param name="value">
	/// (char) A character indicating which component to retrieve:
	/// 'A' or 'a' for alpha, 'R' or 'r' for red, 'G' or 'g' for green, 'B' or 'b' for blue.
	/// </param>
	/// <returns>
	/// The integer value of the requested ARGB component.
	/// Returns 0 if the input is invalid and logs an error to std::cerr.
	/// </returns>
	int getValue(char value) const;

	// For argb value access when displaying
	friend class AsciiHandler;	

private:
	int _alpha;
	int _red;
	int _green;
	int _blue;
};
