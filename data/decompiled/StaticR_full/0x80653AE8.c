/* Function at 0x80653AE8, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80653AE8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80653AF8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80653B00
    r30 = r3;
    if (==) goto 0x0x80653b50;
    /* lis r5, 0 */ // 0x80653B0C
    /* lis r4, 0 */ // 0x80653B10
    r5 = r5 + 0; // 0x80653B14
    *(0 + r3) = r5; // stw @ 0x80653B18
    r3 = *(0x270 + r3); // lwz @ 0x80653B1C
    r4 = r4 + 0; // 0x80653B20
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    r3 = r30 + 0x1e4; // 0x80653B28
    /* li r4, -1 */ // 0x80653B2C
    FUN_806691A0(r4, r3, r4); // bl 0x806691A0
    r3 = r30;
    /* li r4, 0 */ // 0x80653B38
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
}