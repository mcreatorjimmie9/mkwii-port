/* Function at 0x80869E38, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80869E38(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x80869E40
    /* li r3, 0xc */ // 0x80869E44
    *(0x24 + r1) = r0; // stw @ 0x80869E48
    /* li r0, 0 */ // 0x80869E4C
    /* stmw r27, 0xc(r1) */ // 0x80869E50
    /* li r29, 0 */ // 0x80869E54
    /* li r31, 3 */ // 0x80869E58
    r27 = *(0 + r4); // lwz @ 0x80869E5C
    *(4 + r27) = r3; // sth @ 0x80869E60
    r28 = r27;
    *(8 + r27) = r0; // stw @ 0x80869E68
    *(0xc + r27) = r0; // stw @ 0x80869E6C
    /* b 0x80869eac */ // 0x80869E70
    r30 = *(0x44 + r28); // lwz @ 0x80869E74
    *(0 + r30) = r31; // stw @ 0x80869E78
    r3 = *(4 + r30); // lwz @ 0x80869E7C
    r4 = *(8 + r30); // lwz @ 0x80869E80
    FUN_805ECA18(); // bl 0x805ECA18
    r12 = *(0x20 + r30); // lwz @ 0x80869E88
    r3 = r30 + 0x20; // 0x80869E8C
    r4 = r30;
    /* li r5, 0x271a */ // 0x80869E94
    r12 = *(0x118 + r12); // lwz @ 0x80869E98
    /* mtctr r12 */ // 0x80869E9C
    /* bctrl  */ // 0x80869EA0
    r28 = r28 + 4; // 0x80869EA4
    r29 = r29 + 1; // 0x80869EA8
    r0 = *(0 + r27); // lwz @ 0x80869EAC
    if (<) goto 0x0x80869e74;
    /* li r0, 0 */ // 0x80869EB8
    *(0x10 + r27) = r0; // stw @ 0x80869EBC
    *(0x14 + r27) = r0; // stw @ 0x80869EC0
    *(0x18 + r27) = r0; // stw @ 0x80869EC4
    *(0x1c + r27) = r0; // stw @ 0x80869EC8
    *(0x20 + r27) = r0; // stw @ 0x80869ECC
    *(0x24 + r27) = r0; // stw @ 0x80869ED0
    *(0x28 + r27) = r0; // stw @ 0x80869ED4
    *(0x2c + r27) = r0; // stw @ 0x80869ED8
    *(0x30 + r27) = r0; // stw @ 0x80869EDC
    *(0x34 + r27) = r0; // stw @ 0x80869EE0
    *(0x38 + r27) = r0; // stw @ 0x80869EE4
    *(0x3c + r27) = r0; // stw @ 0x80869EE8
    r0 = *(0x24 + r1); // lwz @ 0x80869EF0
    return;
}