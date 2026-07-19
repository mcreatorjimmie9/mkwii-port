/* Function at 0x80802340, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80802340(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80802348
    /* lis r4, 0 */ // 0x8080234C
    *(0x14 + r1) = r0; // stw @ 0x80802350
    r5 = r5 + 0; // 0x80802354
    *(0xc + r1) = r31; // stw @ 0x80802358
    *(8 + r1) = r30; // stw @ 0x8080235C
    r30 = r3;
    r3 = r3 + 0x14; // 0x80802364
    r4 = *(0 + r4); // lwz @ 0x80802368
    r6 = r4 + 8; // 0x8080236C
    /* li r4, 1 */ // 0x80802370
    FUN_805EB3C4(r3, r6, r4); // bl 0x805EB3C4
    /* li r3, 0x4c */ // 0x80802378
    FUN_805E3430(r6, r4, r3); // bl 0x805E3430
}