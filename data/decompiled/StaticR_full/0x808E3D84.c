/* Function at 0x808E3D84, size=440 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_808E3D84(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808E3D90
    r30 = r3;
    FUN_808E3A78(); // bl 0x808E3A78
    /* li r31, 0 */ // 0x808E3D9C
    /* b 0x808e3e5c */ // 0x808E3DA0
    r0 = r31 rlwinm 4; // rlwinm
    r28 = r30 + r0; // 0x808E3DA8
    r0 = *(0x11 + r28); // lbz @ 0x808E3DAC
    if (==) goto 0x0x808e3e58;
    /* li r27, 0 */ // 0x808E3DB8
    /* b 0x808e3e48 */ // 0x808E3DBC
    /* clrlwi r3, r27, 0x18 */ // 0x808E3DC0
    r0 = *(8 + r28); // lwz @ 0x808E3DC4
    /* mulli r29, r3, 0x2c */ // 0x808E3DC8
    /* lwzx r12, r29, r0 */ // 0x808E3DCC
    r3 = r0 + r29; // 0x808E3DD0
    r12 = *(0x10 + r12); // lwz @ 0x808E3DD4
    /* mtctr r12 */ // 0x808E3DD8
    /* bctrl  */ // 0x808E3DDC
    r0 = *(8 + r28); // lwz @ 0x808E3DE0
    /* li r4, 0 */ // 0x808E3DE4
    /* lwzx r12, r29, r0 */ // 0x808E3DE8
    r3 = r0 + r29; // 0x808E3DEC
    r12 = *(0x14 + r12); // lwz @ 0x808E3DF0
    /* mtctr r12 */ // 0x808E3DF4
    /* bctrl  */ // 0x808E3DF8
    r0 = *(8 + r28); // lwz @ 0x808E3DFC
    r4 = r0 + r29; // 0x808E3E00
    r0 = *(0x24 + r4); // lhz @ 0x808E3E04
    r3 = r4 + 0x18; // 0x808E3E08
    r12 = *(0x18 + r4); // lwz @ 0x808E3E0C
    /* clrlwi r0, r0, 0x1f */ // 0x808E3E10
    /* cntlzw r0, r0 */ // 0x808E3E14
    r12 = *(0x14 + r12); // lwz @ 0x808E3E18
    /* srwi r4, r0, 5 */ // 0x808E3E1C
    /* mtctr r12 */ // 0x808E3E20
    /* bctrl  */ // 0x808E3E24
    r0 = *(8 + r28); // lwz @ 0x808E3E28
    /* li r4, 0 */ // 0x808E3E2C
    r3 = r0 + r29; // 0x808E3E30
    r12 = *(0x18 + r3); // lwzu @ 0x808E3E34
    r12 = *(0x18 + r12); // lwz @ 0x808E3E38
    /* mtctr r12 */ // 0x808E3E3C
    /* bctrl  */ // 0x808E3E40
    r27 = r27 + 1; // 0x808E3E44
    r0 = *(4 + r30); // lbz @ 0x808E3E48
    /* clrlwi r3, r27, 0x18 */ // 0x808E3E4C
    if (<) goto 0x0x808e3dc0;
    r31 = r31 + 1; // 0x808E3E58
    r0 = *(5 + r30); // lbz @ 0x808E3E5C
    /* clrlwi r3, r31, 0x18 */ // 0x808E3E60
    if (<) goto 0x0x808e3da4;
    /* li r31, 0 */ // 0x808E3E6C
    /* lis r29, 0 */ // 0x808E3E70
    /* b 0x808e3ee8 */ // 0x808E3E74
    r0 = r31 rlwinm 4; // rlwinm
    r28 = r30 + r0; // 0x808E3E7C
    r0 = *(0x11 + r28); // lbz @ 0x808E3E80
    if (==) goto 0x0x808e3ee4;
    r0 = *(0xc + r28); // lwz @ 0x808E3E8C
    if (<) goto 0x0x808e3ee4;
    /* mulli r0, r0, 0x2c */ // 0x808E3E98
    r3 = *(8 + r28); // lwz @ 0x808E3E9C
    /* li r4, 1 */ // 0x808E3EA0
    /* lwzux r12, r3, r0 */ // 0x808E3EA4
    r12 = *(0x14 + r12); // lwz @ 0x808E3EA8
    /* mtctr r12 */ // 0x808E3EAC
    /* bctrl  */ // 0x808E3EB0
    /* clrlwi r0, r31, 0x18 */ // 0x808E3EB4
    r4 = *(0xc + r28); // lwz @ 0x808E3EB8
    r3 = *(0 + r29); // lwz @ 0x808E3EBC
    /* mulli r0, r0, 0xc */ // 0x808E3EC0
    r5 = *(8 + r28); // lwz @ 0x808E3EC4
    r3 = *(0x14 + r3); // lwz @ 0x808E3EC8
    /* mulli r4, r4, 0x2c */ // 0x808E3ECC
    r3 = r3 + r0; // 0x808E3ED0
    r3 = *(0x18 + r3); // lwz @ 0x808E3ED4
    r4 = r5 + r4; // 0x808E3ED8
    r0 = *(8 + r4); // lwz @ 0x808E3EDC
    *(0x14 + r3) = r0; // stw @ 0x808E3EE0
    r31 = r31 + 1; // 0x808E3EE4
    r0 = *(5 + r30); // lbz @ 0x808E3EE8
    /* clrlwi r3, r31, 0x18 */ // 0x808E3EEC
    if (<) goto 0x0x808e3e78;
    r4 = *(0x50 + r30); // lhz @ 0x808E3EF8
    /* lis r3, -0x49f5 */ // 0x808E3EFC
    r0 = r3 + 0x60b7; // 0x808E3F00
    r4 = r4 + 1; // 0x808E3F04
    /* mulhw r0, r0, r4 */ // 0x808E3F08
    r0 = r0 + r4; // 0x808E3F0C
    r0 = r0 >> 9; // srawi
    /* srwi r3, r0, 0x1f */ // 0x808E3F14
    r0 = r0 + r3; // 0x808E3F18
    /* mulli r0, r0, 0x2d0 */ // 0x808E3F1C
    /* subf r0, r0, r4 */ // 0x808E3F20
    *(0x50 + r30) = r0; // sth @ 0x808E3F24
    r0 = *(0x24 + r1); // lwz @ 0x808E3F2C
    return;
}