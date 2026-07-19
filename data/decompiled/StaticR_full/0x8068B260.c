/* Function at 0x8068B260, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8068B260(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8068B268
    *(0x14 + r1) = r0; // stw @ 0x8068B26C
    /* li r0, 0 */ // 0x8068B270
    r4 = r4 + 0; // 0x8068B274
    *(0xc + r1) = r31; // stw @ 0x8068B278
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x8068B280
    *(0xc + r3) = r0; // stb @ 0x8068B284
    *(0x10 + r3) = r0; // stw @ 0x8068B288
    r3 = r3 + 0x18; // 0x8068B28C
    FUN_806497A4(r3); // bl 0x806497A4
    /* lis r4, 0 */ // 0x8068B294
    r3 = r31;
    r4 = r4 + 0; // 0x8068B29C
    *(0 + r31) = r4; // stw @ 0x8068B2A0
    r0 = r4 + 0x18; // 0x8068B2A4
    *(0x18 + r31) = r0; // stw @ 0x8068B2A8
    r31 = *(0xc + r1); // lwz @ 0x8068B2AC
    r0 = *(0x14 + r1); // lwz @ 0x8068B2B0
    return;
}