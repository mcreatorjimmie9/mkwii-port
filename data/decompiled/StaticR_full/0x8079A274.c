/* Function at 0x8079A274, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8079A274(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8079A284
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8079A28C
    r30 = r3;
    if (==) goto 0x0x8079a2e8;
    if (==) goto 0x0x8079a2d8;
    if (==) goto 0x0x8079a2d8;
    /* li r4, 0 */ // 0x8079A2A0
    r3 = r3 + 0x94; // 0x8079A2A4
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x8079a2d8;
    /* lis r4, 0 */ // 0x8079A2B4
    r3 = r30 + 0x80; // 0x8079A2B8
    r4 = r4 + 0; // 0x8079A2BC
    /* li r5, 4 */ // 0x8079A2C0
    /* li r6, 4 */ // 0x8079A2C4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8079A2D0
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8079a2e8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8079A2EC
    r30 = *(8 + r1); // lwz @ 0x8079A2F0
    r0 = *(0x14 + r1); // lwz @ 0x8079A2F4
}