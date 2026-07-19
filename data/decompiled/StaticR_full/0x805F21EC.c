/* Function at 0x805F21EC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805F21EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x805F21F4
    *(0x14 + r1) = r0; // stw @ 0x805F21F8
    r0 = *(0 + r4); // lwz @ 0x805F21FC
    /* clrlwi. r0, r0, 0x1f */ // 0x805F2200
    if (!=) goto 0x0x805f2224;
    r3 = *(0x34 + r3); // lwz @ 0x805F2208
    if (==) goto 0x0x805f2224;
    r12 = *(0x18 + r3); // lwz @ 0x805F2214
    r12 = *(0x14 + r12); // lwz @ 0x805F2218
    /* mtctr r12 */ // 0x805F221C
    /* bctrl  */ // 0x805F2220
    FUN_805E3430(); // bl 0x805E3430
}