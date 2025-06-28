#pragma once

namespace GC
{
	using bitField = bool;

	namespace flags
	{
		constexpr bitField pendingKill = 1 << 0;
		/* unused bits
		constexpr bitField bit2 = 1 << 1;
		constexpr bitField bit3 = 1 << 2;
		constexpr bitField bit4 = 1 << 3;
		constexpr bitField bit5 = 1 << 4;
		constexpr bitField bit6 = 1 << 5;
		constexpr bitField bit7 = 1 << 6;
		constexpr bitField bit8 = 1 << 7;
		*/
	}
}