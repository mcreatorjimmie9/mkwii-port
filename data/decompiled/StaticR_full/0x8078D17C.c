/* Function at 0x8078D17C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078D17C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8078D188
    r31 = r3;
    r0 = *(0x100 + r3); // lbz @ 0x8078D190
    if (==) goto 0x0x8078d1a0;
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 0 */ // 0x8078D1A0
    *(0x100 + r31) = r0; // stb @ 0x8078D1A4
    r31 = *(0xc + r1); // lwz @ 0x8078D1A8
    r0 = *(0x14 + r1); // lwz @ 0x8078D1AC
    return;
}