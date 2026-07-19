/* Function at 0x805CD8CC, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805CD8CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805CD8D4
    /* li r7, 0 */ // 0x805CD8D8
    *(0x14 + r1) = r0; // stw @ 0x805CD8DC
    *(0xc + r1) = r31; // stw @ 0x805CD8E0
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805CD8E8
    r4 = *(0 + r4); // lwz @ 0x805CD8EC
    r0 = *(0xb74 + r4); // lwz @ 0x805CD8F0
    if (!=) goto 0x0x805cd904;
    /* li r3, 0 */ // 0x805CD8FC
    /* b 0x805cd99c */ // 0x805CD900
    r5 = *(4 + r3); // lwz @ 0x805CD904
    /* lis r3, 5 */ // 0x805CD908
    r4 = r3 + -0x6c20; // 0x805CD90C
    r6 = *(0x14 + r5); // lwz @ 0x805CD910
    /* li r3, 0 */ // 0x805CD914
    r0 = *(8 + r6); // lhz @ 0x805CD918
    r5 = *(0xa + r6); // lbz @ 0x805CD91C
    /* mulli r0, r0, 0x3c */ // 0x805CD920
    r6 = *(0xc + r6); // lhz @ 0x805CD924
    r0 = r5 + r0; // 0x805CD928
    /* mulli r0, r0, 0x3e8 */ // 0x805CD92C
    r0 = r6 + r0; // 0x805CD930
    r5 = r0 >> 0x1f; // srawi
    /* subfc r0, r0, r4 */ // 0x805CD938
    /* subfe r0, r5, r3 */ // 0x805CD93C
    /* subfe r0, r4, r4 */ // 0x805CD940
    /* neg. r0, r0 */ // 0x805CD944
    if (==) goto 0x0x805cd998;
    /* li r30, 0 */ // 0x805CD94C
    r3 = r31 + r30; // 0x805CD950
    r0 = *(0x108 + r3); // lbz @ 0x805CD954
    if (==) goto 0x0x805cd988;
    r3 = *(4 + r31); // lwz @ 0x805CD960
    r0 = r0 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CD968
    /* lwzx r3, r3, r0 */ // 0x805CD96C
    r0 = *(0x38 + r3); // lwz @ 0x805CD970
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CD974
    if (!=) goto 0x0x805cd988;
    /* li r4, 4 */ // 0x805CD97C
    /* li r5, 1 */ // 0x805CD980
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r30 = r30 + 1; // 0x805CD988
    if (<) goto 0x0x805cd950;
    /* li r7, 1 */ // 0x805CD994
    r3 = r7;
    r0 = *(0x14 + r1); // lwz @ 0x805CD99C
    r31 = *(0xc + r1); // lwz @ 0x805CD9A0
    r30 = *(8 + r1); // lwz @ 0x805CD9A4
    return;
}