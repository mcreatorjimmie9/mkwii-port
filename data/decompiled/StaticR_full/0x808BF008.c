/* Function at 0x808BF008, size=112 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808BF008(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 0 */ // 0x808BF010
    /* lis r4, 0 */ // 0x808BF014
    *(0x44 + r1) = r0; // stw @ 0x808BF018
    /* li r0, 1 */ // 0x808BF01C
    *(0x3c + r1) = r31; // stw @ 0x808BF020
    /* lis r31, 0 */ // 0x808BF024
    r31 = r31 + 0; // 0x808BF028
    *(0x38 + r1) = r30; // stw @ 0x808BF02C
    r30 = r3;
    *(0xda0 + r3) = r6; // stw @ 0x808BF034
    *(0x6bc + r3) = r0; // stw @ 0x808BF038
    *(0x6c0 + r3) = r0; // stw @ 0x808BF03C
    r4 = *(0 + r4); // lwz @ 0x808BF040
    r4 = *(0 + r4); // lwz @ 0x808BF044
    r0 = *(0 + r4); // lwz @ 0x808BF048
    if (!=) goto 0x0x808bf070;
    r5 = *(0x4c + r3); // lwz @ 0x808BF054
    r4 = *(0x3d8 + r3); // lwz @ 0x808BF058
    r5 = r5 + 1; // 0x808BF05C
    *(0x3dc + r3) = r6; // stb @ 0x808BF060
    r0 = r4 + 3; // 0x808BF064
    *(0x4c + r3) = r5; // stw @ 0x808BF068
    *(0x3d8 + r3) = r0; // stw @ 0x808BF06C
    /* li r3, 0x98 */ // 0x808BF070
    FUN_805E3430(r3); // bl 0x805E3430
}