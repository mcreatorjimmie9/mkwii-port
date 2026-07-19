/* Function at 0x807C3EA4, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807C3EA4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807C3EAC
    *(0xc + r1) = r31; // stw @ 0x807C3EB4
    *(8 + r1) = r30; // stw @ 0x807C3EB8
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x807C3EC0
    FUN_805C2BFC(); // bl 0x805C2BFC
    r0 = *(4 + r30); // lwz @ 0x807C3EC8
    r31 = r3;
    /* li r4, 0 */ // 0x807C3ED0
    /* mtctr r0 */ // 0x807C3ED4
    if (<=) goto 0x0x807c3f00;
    r3 = *(0xc + r30); // lwz @ 0x807C3EE0
    r0 = *(0x18 + r3); // lwz @ 0x807C3EE4
    if (!=) goto 0x0x807c3ef8;
    r4 = r3;
    /* b 0x807c3f00 */ // 0x807C3EF4
    r30 = r30 + 4; // 0x807C3EF8
    if (counter-- != 0) goto 0x0x807c3ee0;
    if (==) goto 0x0x807c3f40;
    r3 = *(4 + r4); // lwz @ 0x807C3F08
    r3 = *(0 + r3); // lwz @ 0x807C3F0C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C3F14
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807C3F1C
    /* clrlwi r4, r31, 0x18 */ // 0x807C3F20
    r3 = *(0xc + r3); // lwz @ 0x807C3F24
    /* lwzx r3, r3, r0 */ // 0x807C3F28
    r0 = *(0x26 + r3); // lbz @ 0x807C3F2C
    if (!=) goto 0x0x807c3f40;
    /* li r3, 1 */ // 0x807C3F38
    /* b 0x807c3f44 */ // 0x807C3F3C
    /* li r3, 0 */ // 0x807C3F40
    r0 = *(0x14 + r1); // lwz @ 0x807C3F44
    r31 = *(0xc + r1); // lwz @ 0x807C3F48
    r30 = *(8 + r1); // lwz @ 0x807C3F4C
    return;
}