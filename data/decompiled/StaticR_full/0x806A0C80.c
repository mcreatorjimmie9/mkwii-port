/* Function at 0x806A0C80, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806A0C80(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806A0C94
    r31 = r31 + 0; // 0x806A0C98
    *(0x18 + r1) = r30; // stw @ 0x806A0C9C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806A0CA4
    r29 = r3;
    if (==) goto 0x0x806a0cf8;
    r12 = *(0 + r30); // lwz @ 0x806A0CB0
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x806A0CB8
    /* mtctr r12 */ // 0x806A0CBC
    /* bctrl  */ // 0x806A0CC0
    /* b 0x806a0cdc */ // 0x806A0CC4
    if (!=) goto 0x0x806a0cd8;
    /* li r0, 1 */ // 0x806A0CD0
    /* b 0x806a0ce8 */ // 0x806A0CD4
    r3 = *(0 + r3); // lwz @ 0x806A0CD8
    if (!=) goto 0x0x806a0cc8;
    /* li r0, 0 */ // 0x806A0CE4
    if (==) goto 0x0x806a0cf8;
    r31 = r30;
    /* b 0x806a0cfc */ // 0x806A0CF4
    /* li r31, 0 */ // 0x806A0CF8
    if (==) goto 0x0x806a0d54;
    r3 = r30;
    /* li r4, 0x4c */ // 0x806A0D08
    FUN_80665420(r3, r4); // bl 0x80665420
    if (!=) goto 0x0x806a0d30;
    r3 = *(4 + r29); // lwz @ 0x806A0D18
    r4 = r31;
    r3 = r3 + 0xa8; // 0x806A0D20
    FUN_80666A54(r4, r3); // bl 0x80666A54
    FUN_8065634C(r4, r3); // bl 0x8065634C
    /* b 0x806a0d54 */ // 0x806A0D2C
    r12 = *(0 + r31); // lwz @ 0x806A0D30
    /* lis r4, 0 */ // 0x806A0D34
    r4 = r4 + 0; // 0x806A0D38
    r3 = r31;
    r12 = *(0x7c + r12); // lwz @ 0x806A0D40
    r4 = r4 + 2; // 0x806A0D44
    /* li r5, 0 */ // 0x806A0D48
    /* mtctr r12 */ // 0x806A0D4C
    /* bctrl  */ // 0x806A0D50
    r0 = *(0x24 + r1); // lwz @ 0x806A0D54
    r31 = *(0x1c + r1); // lwz @ 0x806A0D58
    r30 = *(0x18 + r1); // lwz @ 0x806A0D5C
    r29 = *(0x14 + r1); // lwz @ 0x806A0D60
    return;
}