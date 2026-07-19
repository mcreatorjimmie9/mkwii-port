/* Function at 0x80792868, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80792868(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8079287C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80792884
    r29 = r3;
    r3 = r3 + 0x88; // 0x8079288C
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x807928a4;
    /* li r3, 0 */ // 0x8079289C
    /* b 0x807928c0 */ // 0x807928A0
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x807928B0
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    /* cntlzw r0, r3 */ // 0x807928B8
    /* srwi r3, r0, 5 */ // 0x807928BC
    r0 = *(0x24 + r1); // lwz @ 0x807928C0
    r31 = *(0x1c + r1); // lwz @ 0x807928C4
    r30 = *(0x18 + r1); // lwz @ 0x807928C8
    r29 = *(0x14 + r1); // lwz @ 0x807928CC
}