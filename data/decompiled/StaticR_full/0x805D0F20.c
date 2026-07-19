/* Function at 0x805D0F20, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_805D0F20(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805D0F2C
    r26 = r3;
    /* li r27, 0 */ // 0x805D0F34
    /* li r31, 0 */ // 0x805D0F38
    /* clrlwi r0, r27, 0x18 */ // 0x805D0F3C
    /* mulli r3, r0, 0x18 */ // 0x805D0F40
    r28 = r26 + r3; // 0x805D0F44
    /* mulli r0, r0, 0x1c */ // 0x805D0F48
    r30 = *(0x5b0 + r28); // lwz @ 0x805D0F4C
    r3 = r26 + r0; // 0x805D0F50
    r29 = r3 + 8; // 0x805D0F54
    r3 = r29;
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (==) goto 0x0x805d0f70;
    r3 = r29;
    FUN_805BA6B4(r3, r3); // bl 0x805BA6B4
    if (==) goto 0x0x805d0f8c;
    r12 = *(0 + r30); // lwz @ 0x805D0F78
    r3 = r30;
    r12 = *(0x1c + r12); // lwz @ 0x805D0F80
    /* mtctr r12 */ // 0x805D0F84
    /* bctrl  */ // 0x805D0F88
    r0 = *(0x5b8 + r28); // lwz @ 0x805D0F8C
    if (==) goto 0x0x805d0fa4;
    *(0x5b0 + r28) = r31; // stw @ 0x805D0F98
    *(0x5b4 + r28) = r31; // stw @ 0x805D0F9C
    *(0x5b8 + r28) = r31; // stw @ 0x805D0FA0
    r27 = r27 + 1; // 0x805D0FA4
    if (<) goto 0x0x805d0f3c;
    r3 = *(0x610 + r26); // lwz @ 0x805D0FB0
    r12 = *(0 + r3); // lwz @ 0x805D0FB4
    r12 = *(0x1c + r12); // lwz @ 0x805D0FB8
    /* mtctr r12 */ // 0x805D0FBC
    /* bctrl  */ // 0x805D0FC0
    /* li r0, 0 */ // 0x805D0FC4
    *(0x610 + r26) = r0; // stw @ 0x805D0FC8
    r0 = *(0x24 + r1); // lwz @ 0x805D0FD0
    return;
}