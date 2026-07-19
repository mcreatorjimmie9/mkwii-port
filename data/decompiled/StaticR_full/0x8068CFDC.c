/* Function at 0x8068CFDC, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8068CFDC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8068CFE4
    *(0x14 + r1) = r0; // stw @ 0x8068CFE8
    /* li r0, 0 */ // 0x8068CFEC
    r4 = r4 + 0; // 0x8068CFF0
    *(0xc + r1) = r31; // stw @ 0x8068CFF4
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x8068CFFC
    *(0xc + r3) = r0; // stb @ 0x8068D000
    *(0x10 + r3) = r0; // stw @ 0x8068D004
    r3 = r3 + 0x18; // 0x8068D008
    FUN_806497A4(r3); // bl 0x806497A4
    /* lis r4, 0 */ // 0x8068D010
    r3 = r31;
    r4 = r4 + 0; // 0x8068D018
    *(0 + r31) = r4; // stw @ 0x8068D01C
    r0 = r4 + 0x18; // 0x8068D020
    *(0x18 + r31) = r0; // stw @ 0x8068D024
    r31 = *(0xc + r1); // lwz @ 0x8068D028
    r0 = *(0x14 + r1); // lwz @ 0x8068D02C
    return;
}