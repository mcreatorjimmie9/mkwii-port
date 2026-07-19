/* Function at 0x80815A64, size=104 bytes */
/* Stack frame: 0 bytes */

void FUN_80815A64(int r3, int r4, int r5)
{
    r0 = *(0x42c + r3); // lwz @ 0x80815A64
    if (!=) goto 0x0x80815a78;
    /* li r3, 0 */ // 0x80815A70
    return;
    r4 = *(0x1c + r3); // lwz @ 0x80815A78
    /* slwi r0, r0, 2 */ // 0x80815A7C
    /* lwzx r5, r4, r0 */ // 0x80815A80
    /* b 0x80815aa4 */ // 0x80815A84
    r0 = *(0x42c + r3); // lwz @ 0x80815A88
    r4 = *(0x1c + r3); // lwz @ 0x80815A8C
    /* slwi r0, r0, 2 */ // 0x80815A90
    /* lwzx r4, r4, r0 */ // 0x80815A94
    r0 = *(0xc + r4); // lwz @ 0x80815A98
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80815A9C
    if (!=) goto 0x0x80815ac4;
    r4 = *(0x42c + r3); // lwz @ 0x80815AA4
    r0 = *(0x438 + r3); // lwz @ 0x80815AA8
    r4 = r4 + 1; // 0x80815AAC
    *(0x42c + r3) = r4; // stw @ 0x80815AB0
    if (<) goto 0x0x80815a88;
    /* li r0, 0x100 */ // 0x80815ABC
    *(0x42c + r3) = r0; // stw @ 0x80815AC0
    r3 = *(0x10 + r5); // lwz @ 0x80815AC4
    return;
}