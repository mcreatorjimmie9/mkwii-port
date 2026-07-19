/* Function at 0x8082EC74, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8082EC74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8082EC84
    r31 = r31 + 0; // 0x8082EC88
    *(8 + r1) = r30; // stw @ 0x8082EC8C
    r30 = r3;
    r0 = *(0x78 + r3); // lwz @ 0x8082EC94
    r0 = r0 | 0x404; // 0x8082EC98
    *(0x78 + r3) = r0; // stw @ 0x8082EC9C
    r5 = *(0xc + r4); // lwz @ 0x8082ECA0
    r0 = *(0xc + r5); // lhz @ 0x8082ECA4
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8082ECA8
    if (==) goto 0x0x8082ece0;
    /* lfs f1, 0xb4(r31) */ // 0x8082ECB0
    /* li r5, 0 */ // 0x8082ECB4
    /* lfs f2, 0xb8(r31) */ // 0x8082ECB8
    /* li r6, 1 */ // 0x8082ECBC
    /* lfs f3, 0xbc(r31) */ // 0x8082ECC0
    FUN_8083C744(r5, r6); // bl 0x8083C744
    /* lfs f1, 0(r31) */ // 0x8082ECC8
    r3 = r30;
    /* li r4, 0x100 */ // 0x8082ECD0
    FUN_8082DFAC(r3, r4); // bl 0x8082DFAC
    /* li r3, 1 */ // 0x8082ECD8
    /* b 0x8082ecfc */ // 0x8082ECDC
    /* lfs f1, 0xb4(r31) */ // 0x8082ECE0
    /* li r5, 0 */ // 0x8082ECE4
    /* lfs f2, 0xb8(r31) */ // 0x8082ECE8
    /* li r6, 0 */ // 0x8082ECEC
    /* lfs f3, 0xbc(r31) */ // 0x8082ECF0
    FUN_8083C744(r5, r6); // bl 0x8083C744
    /* li r3, 0 */ // 0x8082ECF8
    r0 = *(0x14 + r1); // lwz @ 0x8082ECFC
    r31 = *(0xc + r1); // lwz @ 0x8082ED00
    r30 = *(8 + r1); // lwz @ 0x8082ED04
    return;
}