/* Function at 0x807B833C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B833C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B8350
    r30 = r3;
    FUN_807C0164(); // bl 0x807C0164
    if (!=) goto 0x0x807b838c;
    r3 = r30;
    r4 = r31;
    FUN_807B7184(r3, r4); // bl 0x807B7184
    r3 = *(0x1a0 + r30); // lwz @ 0x807B8370
    /* li r0, 0 */ // 0x807B8374
    *(0x4c + r3) = r0; // stw @ 0x807B8378
    *(0x54 + r3) = r0; // stw @ 0x807B837C
    r3 = *(0x19c + r30); // lwz @ 0x807B8380
    *(0x4c + r3) = r0; // stw @ 0x807B8384
    *(0x54 + r3) = r0; // stw @ 0x807B8388
    r0 = *(0x14 + r1); // lwz @ 0x807B838C
    r31 = *(0xc + r1); // lwz @ 0x807B8390
    r30 = *(8 + r1); // lwz @ 0x807B8394
    return;
}