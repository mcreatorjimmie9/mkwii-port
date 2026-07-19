/* Function at 0x8068DA70, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8068DA70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8068DA78
    *(0x14 + r1) = r0; // stw @ 0x8068DA7C
    /* li r0, 0 */ // 0x8068DA80
    r4 = r4 + 0; // 0x8068DA84
    *(0xc + r1) = r31; // stw @ 0x8068DA88
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x8068DA90
    *(0xc + r3) = r0; // stb @ 0x8068DA94
    *(0x10 + r3) = r0; // stw @ 0x8068DA98
    r3 = r3 + 0x18; // 0x8068DA9C
    FUN_806497A4(r3); // bl 0x806497A4
    /* lis r4, 0 */ // 0x8068DAA4
    r3 = r31;
    r4 = r4 + 0; // 0x8068DAAC
    *(0 + r31) = r4; // stw @ 0x8068DAB0
    r0 = r4 + 0x18; // 0x8068DAB4
    *(0x18 + r31) = r0; // stw @ 0x8068DAB8
    r31 = *(0xc + r1); // lwz @ 0x8068DABC
    r0 = *(0x14 + r1); // lwz @ 0x8068DAC0
    return;
}