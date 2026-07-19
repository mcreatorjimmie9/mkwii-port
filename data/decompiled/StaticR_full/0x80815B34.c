/* Function at 0x80815B34, size=104 bytes */
/* Stack frame: 0 bytes */

void FUN_80815B34(int r3, int r4, int r5)
{
    r0 = *(0x434 + r3); // lwz @ 0x80815B34
    if (!=) goto 0x0x80815b48;
    /* li r3, 0 */ // 0x80815B40
    return;
    r4 = *(0x1c + r3); // lwz @ 0x80815B48
    /* slwi r0, r0, 2 */ // 0x80815B4C
    /* lwzx r5, r4, r0 */ // 0x80815B50
    /* b 0x80815b74 */ // 0x80815B54
    r0 = *(0x434 + r3); // lwz @ 0x80815B58
    r4 = *(0x1c + r3); // lwz @ 0x80815B5C
    /* slwi r0, r0, 2 */ // 0x80815B60
    /* lwzx r4, r4, r0 */ // 0x80815B64
    r0 = *(0xc + r4); // lwz @ 0x80815B68
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80815B6C
    if (!=) goto 0x0x80815b94;
    r4 = *(0x434 + r3); // lwz @ 0x80815B74
    r0 = *(0x438 + r3); // lwz @ 0x80815B78
    r4 = r4 + 1; // 0x80815B7C
    *(0x434 + r3) = r4; // stw @ 0x80815B80
    if (<) goto 0x0x80815b58;
    /* li r0, 0x100 */ // 0x80815B8C
    *(0x434 + r3) = r0; // stw @ 0x80815B90
    r3 = *(0x10 + r5); // lwz @ 0x80815B94
    return;
}