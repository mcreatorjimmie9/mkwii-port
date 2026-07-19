/* Function at 0x806034A8, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806034A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806034BC
    r4 = *(0 + r3); // lwz @ 0x806034C0
    r3 = *(4 + r4); // lwz @ 0x806034C4
    r0 = *(0x1c + r3); // lwz @ 0x806034C8
    if (!=) goto 0x0x80603574;
    r0 = *(0x74 + r3); // lwz @ 0x806034D4
    if (>=) goto 0x0x806034f0;
    r3 = *(4 + r4); // lwz @ 0x806034E0
    r0 = *(8 + r3); // lwz @ 0x806034E4
    /* rlwinm. r0, r0, 0, 1, 1 */ // 0x806034E8
    if (==) goto 0x0x80603574;
    r3 = r31;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x806034F8
    /* lfs f0, 0(r3) */ // 0x806034FC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80603500
    if (<=) goto 0x0x80603574;
    r3 = *(0 + r31); // lwz @ 0x80603508
    r4 = *(4 + r3); // lwz @ 0x8060350C
    r0 = *(8 + r4); // lwz @ 0x80603510
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x80603514
    if (!=) goto 0x0x80603574;
    r0 = *(4 + r4); // lwz @ 0x8060351C
    /* li r30, 0 */ // 0x80603520
    r3 = *(4 + r3); // lwz @ 0x80603524
    /* rlwinm. r0, r0, 0, 1, 1 */ // 0x80603528
    r0 = *(0x74 + r3); // lwz @ 0x8060352C
    if (==) goto 0x0x80603548;
    r0 = *(0xc + r4); // lwz @ 0x80603534
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x80603538
    if (==) goto 0x0x80603564;
    /* li r30, 4 */ // 0x80603540
    /* b 0x80603564 */ // 0x80603544
    if (!=) goto 0x0x80603558;
    /* li r30, 2 */ // 0x80603550
    /* b 0x80603564 */ // 0x80603554
    if (!=) goto 0x0x80603564;
    /* li r30, 1 */ // 0x80603560
    r3 = r31;
    FUN_8061E01C(r3); // bl 0x8061E01C
    r4 = r30;
    FUN_808F4CC0(r3, r4); // bl 0x808F4CC0
    r0 = *(0x14 + r1); // lwz @ 0x80603574
    r31 = *(0xc + r1); // lwz @ 0x80603578
    r30 = *(8 + r1); // lwz @ 0x8060357C
    return;
}