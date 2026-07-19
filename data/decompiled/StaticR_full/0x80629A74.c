/* Function at 0x80629A74, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80629A74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80629A84
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80629A8C
    r30 = r3;
    if (==) goto 0x0x80629ae8;
    r0 = *(4 + r3); // lwz @ 0x80629A98
    /* lis r4, 0 */ // 0x80629A9C
    r4 = r4 + 0; // 0x80629AA0
    *(0 + r3) = r4; // stw @ 0x80629AA4
    if (==) goto 0x0x80629ac8;
    r3 = r0;
    /* li r4, 1 */ // 0x80629AB4
    r12 = *(0 + r3); // lwz @ 0x80629AB8
    r12 = *(8 + r12); // lwz @ 0x80629ABC
    /* mtctr r12 */ // 0x80629AC0
    /* bctrl  */ // 0x80629AC4
    r3 = *(8 + r30); // lwz @ 0x80629AC8
    if (==) goto 0x0x80629ad8;
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x80629ae8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80629AEC
    r30 = *(8 + r1); // lwz @ 0x80629AF0
    r0 = *(0x14 + r1); // lwz @ 0x80629AF4
    return;
}