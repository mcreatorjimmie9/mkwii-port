/* Function at 0x808C7C54, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808C7C54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808C7C64
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C7C6C
    r30 = r3;
    if (==) goto 0x0x808c7cb8;
    /* li r4, -1 */ // 0x808C7C78
    r3 = r3 + 0x32c; // 0x808C7C7C
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30 + 0x1b8; // 0x808C7C84
    /* li r4, -1 */ // 0x808C7C88
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x808C7C90
    /* li r4, -1 */ // 0x808C7C94
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x808C7CA0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808c7cb8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C7CBC
    r30 = *(8 + r1); // lwz @ 0x808C7CC0
    r0 = *(0x14 + r1); // lwz @ 0x808C7CC4
    return;
}