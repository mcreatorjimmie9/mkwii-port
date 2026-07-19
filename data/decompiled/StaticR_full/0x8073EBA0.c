/* Function at 0x8073EBA0, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8073EBA0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073EBAC
    r31 = r3;
    r3 = *(0x118 + r3); // lwz @ 0x8073EBB4
    FUN_8061E63C(); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x8073EBBC
    /* lfs f0, 0(r3) */ // 0x8073EBC0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8073EBC4
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8073EBC8
    /* mfcr r3 */ // 0x8073EBCC
    r0 = *(0x6b + r31); // lbz @ 0x8073EBD0
    r3 = r3 rlwinm 3; // rlwinm
    if (==) goto 0x0x8073ec3c;
    r0 = *(0x6c + r31); // lbz @ 0x8073EBE0
    if (!=) goto 0x0x8073ec3c;
    if (==) goto 0x0x8073ec3c;
    r0 = *(0x129 + r31); // lbz @ 0x8073EBF4
    if (==) goto 0x0x8073ec3c;
    r0 = *(0xb0 + r31); // lbz @ 0x8073EC00
    if (==) goto 0x0x8073ec28;
    /* lis r3, 0 */ // 0x8073EC0C
    r4 = r31 + 0x6f4; // 0x8073EC10
    r3 = r3 + 0; // 0x8073EC14
    r5 = r31 + 0x72c; // 0x8073EC18
    r3 = r3 + 0x18c2; // 0x8073EC1C
    FUN_8074581C(r3, r4, r3, r5, r3); // bl 0x8074581C
    /* b 0x8073ec3c */ // 0x8073EC24
    /* lis r3, 0 */ // 0x8073EC28
    r4 = r31 + 0x6f4; // 0x8073EC2C
    r3 = r3 + 0; // 0x8073EC30
    r3 = r3 + 0x18ce; // 0x8073EC34
    FUN_80745740(r3, r4, r3, r3); // bl 0x80745740
    r0 = *(0x14 + r1); // lwz @ 0x8073EC3C
    r31 = *(0xc + r1); // lwz @ 0x8073EC40
    return;
}