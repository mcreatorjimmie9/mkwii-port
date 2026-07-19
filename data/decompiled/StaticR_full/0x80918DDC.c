/* Function at 0x80918DDC, size=324 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80918DDC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80918DE0
    /* lis r5, 0 */ // 0x80918DE4
    /* li r9, 4 */ // 0x80918DE8
    *(0xc + r1) = r31; // stw @ 0x80918DEC
    /* li r4, 0 */ // 0x80918DF8
    *(8 + r1) = r30; // stw @ 0x80918DFC
    /* li r7, 0 */ // 0x80918E00
    /* li r6, 0xa */ // 0x80918E04
    /* li r5, 0xa */ // 0x80918E08
    r0 = *(0xdc + r3); // lbz @ 0x80918E0C
    r11 = *(0xdd + r3); // lbz @ 0x80918E10
    /* clrlwi r8, r0, 0x18 */ // 0x80918E14
    if (>) goto 0x0x80918e38;
    /* clrlwi r8, r4, 0x18 */ // 0x80918E20
    r31 = r3 + r8; // 0x80918E24
    /* stbu r11, 0xde(r31) */ // 0x80918E28
    r8 = *(0xdd + r3); // lbz @ 0x80918E2C
    /* subf r0, r8, r0 */ // 0x80918E30
    /* b 0x80918e48 */ // 0x80918E34
    /* clrlwi r8, r4, 0x18 */ // 0x80918E38
    r31 = r3 + r8; // 0x80918E3C
    /* stbu r0, 0xde(r31) */ // 0x80918E40
    /* li r0, 0 */ // 0x80918E44
    /* clrlwi r8, r4, 0x18 */ // 0x80918E48
    if (<) goto 0x0x80918f04;
    r11 = *(0 + r31); // lbz @ 0x80918E54
    if (==) goto 0x0x80918eb4;
    r8 = r4 rlwinm 2; // rlwinm
    r31 = r3 + r8; // 0x80918E64
    r8 = *(0xb4 + r31); // lwz @ 0x80918E68
    if (!=) goto 0x0x80918eb4;
    /* li r30, 0 */ // 0x80918E74
    /* mtctr r6 */ // 0x80918E78
    /* clrlwi r11, r30, 0x18 */ // 0x80918E7C
    /* lbzx r8, r12, r11 */ // 0x80918E80
    /* extsb r8, r8 */ // 0x80918E84
    if (<) goto 0x0x80918ea8;
    r8 = r30 rlwinm 2; // rlwinm
    /* lwzx r8, r10, r8 */ // 0x80918E94
    *(0xb4 + r31) = r8; // stw @ 0x80918E98
    r8 = *(0xb0 + r3); // lbz @ 0x80918E9C
    /* stbx r8, r12, r11 */ // 0x80918EA0
    /* b 0x80918f04 */ // 0x80918EA4
    r30 = r30 + 1; // 0x80918EA8
    if (counter-- != 0) goto 0x0x80918e7c;
    /* b 0x80918f04 */ // 0x80918EB0
    if (!=) goto 0x0x80918f04;
    r8 = r4 rlwinm 2; // rlwinm
    r31 = r3 + r8; // 0x80918EC0
    r8 = *(0xb4 + r31); // lwz @ 0x80918EC4
    if (==) goto 0x0x80918f04;
    /* li r30, 0 */ // 0x80918ED0
    /* mtctr r5 */ // 0x80918ED4
    r8 = r30 rlwinm 2; // rlwinm
    r11 = *(0xb4 + r31); // lwz @ 0x80918EDC
    /* lwzx r8, r10, r8 */ // 0x80918EE0
    if (!=) goto 0x0x80918efc;
    /* clrlwi r8, r30, 0x18 */ // 0x80918EEC
    /* stbx r9, r12, r8 */ // 0x80918EF0
    *(0xb4 + r31) = r7; // stw @ 0x80918EF4
    /* b 0x80918f04 */ // 0x80918EF8
    r30 = r30 + 1; // 0x80918EFC
    if (counter-- != 0) goto 0x0x80918ed8;
    r4 = r4 + 1; // 0x80918F04
    if (<) goto 0x0x80918e10;
    r31 = *(0xc + r1); // lwz @ 0x80918F10
    r30 = *(8 + r1); // lwz @ 0x80918F14
    return;
}