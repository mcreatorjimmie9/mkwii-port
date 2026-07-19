/* Function at 0x80902570, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80902570(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80902584
    r29 = r5;
    /* li r5, 1 */ // 0x8090258C
    r0 = *(0x168 + r3); // lwz @ 0x80902590
    r6 = *(0x160 + r3); // lwz @ 0x80902594
    /* slwi r0, r0, 4 */ // 0x80902598
    /* lwzx r0, r6, r0 */ // 0x8090259C
    if (==) goto 0x0x809025b4;
    if (==) goto 0x0x809025b4;
    /* li r5, 0 */ // 0x809025B0
    if (==) goto 0x0x80902614;
    if (==) goto 0x0x80902614;
    r30 = *(0xb0 + r3); // lbz @ 0x809025C4
    r3 = r4;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x809025D0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x809025D8
    r5 = r30;
    /* clrlwi r4, r31, 0x18 */ // 0x809025E0
    FUN_80909F30(r4, r5); // bl 0x80909F30
    /* lis r4, 0 */ // 0x809025E8
    /* lis r3, 0 */ // 0x809025EC
    r5 = *(0 + r4); // lwz @ 0x809025F0
    r0 = r31 rlwinm 2; // rlwinm
    /* lfs f1, 0(r3) */ // 0x809025F8
    /* li r4, 0x29 */ // 0x809025FC
    r3 = *(0xc + r5); // lwz @ 0x80902600
    /* li r5, 1 */ // 0x80902604
    /* lwzx r3, r3, r0 */ // 0x80902608
    r3 = *(0x48 + r3); // lwz @ 0x8090260C
    FUN_805B1660(r4, r5); // bl 0x805B1660
    r31 = *(0x1c + r1); // lwz @ 0x80902614
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x8090261C
    r29 = *(0x14 + r1); // lwz @ 0x80902620
    r0 = *(0x24 + r1); // lwz @ 0x80902624
    return;
}