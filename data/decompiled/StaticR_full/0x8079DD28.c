/* Function at 0x8079DD28, size=116 bytes */
/* Stack frame: 0 bytes */

int FUN_8079DD28(int r3, int r4)
{
    r0 = *(0x40 + r3); // lwz @ 0x8079DD28
    if (==) goto 0x0x8079dd3c;
    if (!=) goto 0x0x8079dd94;
    r0 = *(0x28 + r3); // lbz @ 0x8079DD3C
    /* mtctr r0 */ // 0x8079DD40
    if (<=) goto 0x0x8079dd78;
    r4 = *(0x18 + r3); // lwz @ 0x8079DD4C
    r4 = *(0xdc + r4); // lwz @ 0x8079DD50
    r4 = *(0 + r4); // lwz @ 0x8079DD54
    r4 = *(4 + r4); // lwz @ 0x8079DD58
    r0 = *(8 + r4); // lwz @ 0x8079DD5C
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x8079DD60
    if (==) goto 0x0x8079dd70;
    /* li r0, 1 */ // 0x8079DD68
    /* b 0x8079dd7c */ // 0x8079DD6C
    r3 = r3 + 4; // 0x8079DD70
    if (counter-- != 0) goto 0x0x8079dd4c;
    /* li r0, 0 */ // 0x8079DD78
    if (==) goto 0x0x8079dd8c;
    /* li r3, 1 */ // 0x8079DD84
    return;
    /* li r3, 0 */ // 0x8079DD8C
    return;
    /* li r3, 0 */ // 0x8079DD94
    return;
}