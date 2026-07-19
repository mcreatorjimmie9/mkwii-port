/* Function at 0x805CC7B8, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805CC7B8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805CC7C4
    r28 = r3;
    r29 = r4;
    r0 = *(0x106 + r3); // lbz @ 0x805CC7D0
    if (!=) goto 0x0x805cc8e4;
    /* lis r3, 0 */ // 0x805CC7DC
    /* li r4, 4 */ // 0x805CC7E0
    r3 = *(0 + r3); // lwz @ 0x805CC7E4
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cc8e4;
    /* lis r27, 0 */ // 0x805CC7F4
    /* mulli r30, r29, 0x18 */ // 0x805CC7F8
    r3 = *(0 + r27); // lwz @ 0x805CC7FC
    r4 = r3 + r30; // 0x805CC800
    r0 = *(0x3c4 + r4); // lbz @ 0x805CC804
    if (==) goto 0x0x805cc8e4;
    /* lis r4, 0 */ // 0x805CC810
    r4 = *(0 + r4); // lwz @ 0x805CC814
    r0 = *(0x24 + r4); // lbz @ 0x805CC818
    if (>=) goto 0x0x805cc8e4;
    r5 = *(4 + r28); // lwz @ 0x805CC824
    /* lis r4, 0 */ // 0x805CC828
    /* lis r6, 0 */ // 0x805CC82C
    r7 = *(0 + r4); // lwz @ 0x805CC830
    r5 = *(0xc + r5); // lwz @ 0x805CC834
    r0 = r29 rlwinm 2; // rlwinm
    r9 = *(0 + r6); // lwz @ 0x805CC83C
    r4 = r29;
    /* lwzx r31, r5, r0 */ // 0x805CC844
    /* li r5, 0 */ // 0x805CC848
    /* li r6, 1 */ // 0x805CC84C
    /* li r8, 1 */ // 0x805CC850
    FUN_808F9C40(r4, r5, r6, r8); // bl 0x808F9C40
    r0 = *(0 + r27); // lwz @ 0x805CC858
    r3 = r0 + r30; // 0x805CC85C
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC860
    if (!=) goto 0x0x805cc884;
    /* lis r3, 0 */ // 0x805CC86C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x805CC874
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    r3 = *(4 + r28); // lwz @ 0x805CC884
    r0 = *(0x22 + r31); // lhz @ 0x805CC888
    r3 = *(0x3c + r3); // lwz @ 0x805CC88C
    r3 = *(4 + r3); // lwz @ 0x805CC890
    r3 = *(0x1ce + r3); // lha @ 0x805CC894
    /* add. r0, r3, r0 */ // 0x805CC898
    if (>=) goto 0x0x805cc8a4;
    /* li r0, 0 */ // 0x805CC8A0
    *(0x22 + r31) = r0; // sth @ 0x805CC8A4
    /* lis r3, 0 */ // 0x805CC8A8
    r0 = *(0 + r3); // lwz @ 0x805CC8AC
    r3 = r0 + r30; // 0x805CC8B0
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC8B4
    if (!=) goto 0x0x805cc8e4;
    r3 = *(4 + r28); // lwz @ 0x805CC8C0
    r0 = *(0x22 + r31); // lhz @ 0x805CC8C4
    r3 = *(0x3c + r3); // lwz @ 0x805CC8C8
    r3 = *(4 + r3); // lwz @ 0x805CC8CC
    r3 = *(0x1cc + r3); // lha @ 0x805CC8D0
    /* add. r0, r3, r0 */ // 0x805CC8D4
    if (>=) goto 0x0x805cc8e0;
    /* li r0, 0 */ // 0x805CC8DC
    *(0x22 + r31) = r0; // sth @ 0x805CC8E0
    r0 = *(0x24 + r1); // lwz @ 0x805CC8E8
    return;
}