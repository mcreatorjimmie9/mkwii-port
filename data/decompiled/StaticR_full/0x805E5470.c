/* Function at 0x805E5470, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805E5470(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805E5478
    r5 = r5 + 0; // 0x805E5480
    /* li r0, -1 */ // 0x805E5484
    *(0xc + r1) = r31; // stw @ 0x805E5488
    /* li r31, 0 */ // 0x805E548C
    *(8 + r1) = r30; // stw @ 0x805E5490
    r30 = r3;
    *(0x1c + r3) = r4; // stw @ 0x805E5498
    /* li r4, 0x10 */ // 0x805E549C
    *(0 + r3) = r5; // stw @ 0x805E54A0
    *(0x20 + r3) = r31; // stw @ 0x805E54A4
    *(0x24 + r3) = r31; // stw @ 0x805E54A8
    *(0x28 + r3) = r31; // stw @ 0x805E54AC
    *(0x2c + r3) = r31; // stw @ 0x805E54B0
    *(0x30 + r3) = r31; // stw @ 0x805E54B4
    *(0x34 + r3) = r0; // stw @ 0x805E54B8
    *(0x38 + r3) = r31; // sth @ 0x805E54BC
    r3 = r3 + 4; // 0x805E54C0
    FUN_805E3430(r3); // bl 0x805E3430
}