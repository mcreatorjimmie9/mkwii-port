/* Function at 0x80815B9C, size=292 bytes */
/* Stack frame: 0 bytes */

void FUN_80815B9C(int r3, int r4)
{
    /* li r0, -1 */ // 0x80815B9C
    *(0x428 + r3) = r0; // stw @ 0x80815BA0
    /* b 0x80815bc4 */ // 0x80815BA4
    r0 = *(0x428 + r3); // lwz @ 0x80815BA8
    r4 = *(0x1c + r3); // lwz @ 0x80815BAC
    /* slwi r0, r0, 2 */ // 0x80815BB0
    /* lwzx r4, r4, r0 */ // 0x80815BB4
    r0 = *(0xc + r4); // lwz @ 0x80815BB8
    /* clrlwi. r0, r0, 0x1f */ // 0x80815BBC
    if (!=) goto 0x0x80815be4;
    r4 = *(0x428 + r3); // lwz @ 0x80815BC4
    r0 = *(0x438 + r3); // lwz @ 0x80815BC8
    r4 = r4 + 1; // 0x80815BCC
    *(0x428 + r3) = r4; // stw @ 0x80815BD0
    if (<) goto 0x0x80815ba8;
    /* li r0, 0x100 */ // 0x80815BDC
    *(0x428 + r3) = r0; // stw @ 0x80815BE0
    /* li r0, -1 */ // 0x80815BE4
    *(0x42c + r3) = r0; // stw @ 0x80815BE8
    /* b 0x80815c0c */ // 0x80815BEC
    r0 = *(0x42c + r3); // lwz @ 0x80815BF0
    r4 = *(0x1c + r3); // lwz @ 0x80815BF4
    /* slwi r0, r0, 2 */ // 0x80815BF8
    /* lwzx r4, r4, r0 */ // 0x80815BFC
    r0 = *(0xc + r4); // lwz @ 0x80815C00
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80815C04
    if (!=) goto 0x0x80815c2c;
    r4 = *(0x42c + r3); // lwz @ 0x80815C0C
    r0 = *(0x438 + r3); // lwz @ 0x80815C10
    r4 = r4 + 1; // 0x80815C14
    *(0x42c + r3) = r4; // stw @ 0x80815C18
    if (<) goto 0x0x80815bf0;
    /* li r0, 0x100 */ // 0x80815C24
    *(0x42c + r3) = r0; // stw @ 0x80815C28
    /* li r0, -1 */ // 0x80815C2C
    *(0x430 + r3) = r0; // stw @ 0x80815C30
    /* b 0x80815c54 */ // 0x80815C34
    r0 = *(0x430 + r3); // lwz @ 0x80815C38
    r4 = *(0x1c + r3); // lwz @ 0x80815C3C
    /* slwi r0, r0, 2 */ // 0x80815C40
    /* lwzx r4, r4, r0 */ // 0x80815C44
    r0 = *(0xc + r4); // lwz @ 0x80815C48
    /* rlwinm. r0, r0, 0, 0x1c, 0x1d */ // 0x80815C4C
    if (!=) goto 0x0x80815c74;
    r4 = *(0x430 + r3); // lwz @ 0x80815C54
    r0 = *(0x438 + r3); // lwz @ 0x80815C58
    r4 = r4 + 1; // 0x80815C5C
    *(0x430 + r3) = r4; // stw @ 0x80815C60
    if (<) goto 0x0x80815c38;
    /* li r0, 0x100 */ // 0x80815C6C
    *(0x430 + r3) = r0; // stw @ 0x80815C70
    /* li r0, -1 */ // 0x80815C74
    *(0x434 + r3) = r0; // stw @ 0x80815C78
    /* b 0x80815c9c */ // 0x80815C7C
    r0 = *(0x434 + r3); // lwz @ 0x80815C80
    r4 = *(0x1c + r3); // lwz @ 0x80815C84
    /* slwi r0, r0, 2 */ // 0x80815C88
    /* lwzx r4, r4, r0 */ // 0x80815C8C
    r0 = *(0xc + r4); // lwz @ 0x80815C90
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80815C94
    /* bnelr  */ // 0x80815C98
    r4 = *(0x434 + r3); // lwz @ 0x80815C9C
    r0 = *(0x438 + r3); // lwz @ 0x80815CA0
    r4 = r4 + 1; // 0x80815CA4
    *(0x434 + r3) = r4; // stw @ 0x80815CA8
    if (<) goto 0x0x80815c80;
    /* li r0, 0x100 */ // 0x80815CB4
    *(0x434 + r3) = r0; // stw @ 0x80815CB8
    return;
}