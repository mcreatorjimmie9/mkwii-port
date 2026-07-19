/* Function at 0x806D52E8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806D52E8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806D52F4
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806D5300
    r3 = r31 + 0x44; // 0x806D5304
    r4 = r4 + 0; // 0x806D5308
    *(0 + r31) = r4; // stw @ 0x806D530C
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* lis r4, 0 */ // 0x806D5314
    /* lis r5, 0 */ // 0x806D5318
    r3 = r31 + 0x64; // 0x806D531C
    /* li r6, 0x68 */ // 0x806D5320
    r4 = r4 + 0; // 0x806D5324
    r5 = r5 + 0; // 0x806D5328
    /* li r7, 0xa */ // 0x806D532C
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}