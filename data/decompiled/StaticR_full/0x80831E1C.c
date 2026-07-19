/* Function at 0x80831E1C, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80831E1C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x80831E24
    *(0x1c + r1) = r31; // stw @ 0x80831E2C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80831E34
    r30 = r4;
    /* li r4, 0 */ // 0x80831E3C
    FUN_808289B4(r4); // bl 0x808289B4
    if (!=) goto 0x0x80831ee8;
    r6 = *(0x7c + r31); // lwz @ 0x80831E4C
    /* li r4, 0 */ // 0x80831E50
    /* li r5, 0 */ // 0x80831E54
    /* rlwinm. r0, r6, 0, 0x1a, 0x1a */ // 0x80831E58
    if (==) goto 0x0x80831e88;
    /* clrlwi. r0, r6, 0x1f */ // 0x80831E60
    /* li r3, 0 */ // 0x80831E64
    if (==) goto 0x0x80831e78;
    r0 = *(0x78 + r31); // lwz @ 0x80831E6C
    /* rlwinm. r0, r0, 0, 2, 4 */ // 0x80831E70
    if (==) goto 0x0x80831e7c;
    /* li r3, 1 */ // 0x80831E78
    if (==) goto 0x0x80831e88;
    /* li r5, 1 */ // 0x80831E84
    if (==) goto 0x0x80831e9c;
    /* andi. r0, r6, 0x12 */ // 0x80831E90
    if (!=) goto 0x0x80831e9c;
    /* li r4, 1 */ // 0x80831E98
    if (==) goto 0x0x80831ee8;
    r0 = *(0x78 + r31); // lwz @ 0x80831EA4
    /* rlwinm. r0, r0, 0, 8, 0xa */ // 0x80831EA8
    if (==) goto 0x0x80831eb8;
    /* li r3, 0 */ // 0x80831EB0
    /* b 0x80831f44 */ // 0x80831EB4
    r0 = *(0x78 + r31); // lwz @ 0x80831EB8
    /* lis r5, 0 */ // 0x80831EBC
    /* li r3, 1 */ // 0x80831EC0
    r0 = r0 | 0x80; // 0x80831EC4
    *(0x78 + r31) = r0; // stw @ 0x80831EC8
    r4 = *(0 + r5); // lwzu @ 0x80831ECC
    r0 = *(4 + r5); // lwz @ 0x80831ED0
    *(0x16c + r31) = r0; // stw @ 0x80831ED4
    *(0x168 + r31) = r4; // stw @ 0x80831ED8
    r0 = *(8 + r5); // lwz @ 0x80831EDC
    *(0x170 + r31) = r0; // stw @ 0x80831EE0
    /* b 0x80831f44 */ // 0x80831EE4
    r0 = *(0x78 + r31); // lwz @ 0x80831EE8
    /* rlwinm. r0, r0, 0, 0x18, 0x19 */ // 0x80831EEC
    if (==) goto 0x0x80831efc;
    /* li r3, 0 */ // 0x80831EF4
    /* b 0x80831f44 */ // 0x80831EF8
    /* lis r5, 0 */ // 0x80831EFC
    r4 = *(0 + r5); // lwzu @ 0x80831F00
    *(8 + r1) = r4; // stw @ 0x80831F04
    r3 = *(4 + r5); // lwz @ 0x80831F08
    r0 = *(8 + r5); // lwz @ 0x80831F0C
    *(0xc + r1) = r3; // stw @ 0x80831F10
    *(0x10 + r1) = r0; // stw @ 0x80831F14
    if (!=) goto 0x0x80831f28;
    *(0x168 + r31) = r4; // stw @ 0x80831F1C
    *(0x16c + r31) = r3; // stw @ 0x80831F20
    *(0x170 + r31) = r0; // stw @ 0x80831F24
    r4 = *(0x74 + r31); // lwz @ 0x80831F28
    /* li r3, 1 */ // 0x80831F2C
    r0 = *(0x78 + r31); // lwz @ 0x80831F30
    r4 = r4 | 2; // 0x80831F34
    *(0x74 + r31) = r4; // stw @ 0x80831F38
    r0 = r0 | 0x80; // 0x80831F3C
    *(0x78 + r31) = r0; // stw @ 0x80831F40
    r0 = *(0x24 + r1); // lwz @ 0x80831F44
    r31 = *(0x1c + r1); // lwz @ 0x80831F48
    r30 = *(0x18 + r1); // lwz @ 0x80831F4C
    return;
}