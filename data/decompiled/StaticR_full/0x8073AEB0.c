/* Function at 0x8073AEB0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8073AEB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073AEBC
    r31 = r3;
    r4 = *(0x244 + r3); // lwz @ 0x8073AEC4
    if (==) goto 0x0x8073af40;
    r3 = r4 + 0x74; // 0x8073AED0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073aee8;
    /* li r3, 0 */ // 0x8073AEE0
    /* b 0x8073aeec */ // 0x8073AEE4
    r3 = *(0xc + r3); // lwz @ 0x8073AEE8
}