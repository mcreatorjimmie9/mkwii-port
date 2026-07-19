/* Function at 0x806FF750, size=100 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806FF750(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 0 */ // 0x806FF758
    /* lis r5, 1 */ // 0x806FF75C
    *(0x34 + r1) = r0; // stw @ 0x806FF760
    /* lis r6, 0 */ // 0x806FF764
    r0 = r5 + -0x6c10; // 0x806FF768
    *(0x2c + r1) = r31; // stw @ 0x806FF76C
    r31 = r3 + 0x4d11; // 0x806FF770
    *(0x28 + r1) = r30; // stw @ 0x806FF774
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x806FF77C
    *(0x20 + r1) = r28; // stw @ 0x806FF780
    *(0x4204 + r3) = r4; // stw @ 0x806FF784
    *(0 + r4) = r7; // stb @ 0x806FF788
    *(0x420c + r3) = r7; // stb @ 0x806FF790
    r5 = *(0 + r6); // lwz @ 0x806FF794
    r3 = *(0x36 + r5); // lha @ 0x806FF798
    /* clrlwi r3, r3, 0x18 */ // 0x806FF79C
    r0 = r0 * r3; // 0x806FF7A0
    r3 = r5 + r0; // 0x806FF7A4
    r28 = r3 + 0x4e; // 0x806FF7A8
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
}