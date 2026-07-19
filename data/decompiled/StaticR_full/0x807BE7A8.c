/* Function at 0x807BE7A8, size=396 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_807BE7A8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x807BE7B4
    r28 = r3;
    r25 = r4;
    r5 = *(0x198 + r3); // lwz @ 0x807BE7C0
    r3 = *(0 + r5); // lwz @ 0x807BE7C4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BE7CC
    /* lis r27, 0 */ // 0x807BE7D0
    r4 = *(0 + r4); // lwz @ 0x807BE7D4
    r0 = r3 rlwinm 2; // rlwinm
    r26 = r3;
    r5 = *(0 + r27); // lwz @ 0x807BE7E0
    r3 = *(0xc + r4); // lwz @ 0x807BE7E4
    /* li r30, 0 */ // 0x807BE7E8
    r4 = *(0x14 + r5); // lwz @ 0x807BE7EC
    /* lwzx r3, r3, r0 */ // 0x807BE7F0
    r29 = *(0x20 + r3); // lbz @ 0x807BE7F4
    if (!=) goto 0x0x807be808;
    /* li r30, 2 */ // 0x807BE800
    /* b 0x807be91c */ // 0x807BE804
    if (!=) goto 0x0x807be818;
    /* li r30, 1 */ // 0x807BE810
    /* b 0x807be91c */ // 0x807BE814
    r3 = r5;
    /* li r4, 0x64 */ // 0x807BE81C
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    r31 = r3;
    r3 = *(0 + r27); // lwz @ 0x807BE828
    FUN_807BFFC0(r3, r4); // bl 0x807BFFC0
    if (==) goto 0x0x807be864;
    /* lis r4, 0 */ // 0x807BE838
    /* clrlwi r0, r26, 0x18 */ // 0x807BE83C
    r4 = *(0 + r4); // lwz @ 0x807BE840
    /* mulli r0, r0, 0x248 */ // 0x807BE844
    r4 = *(0x14 + r4); // lwz @ 0x807BE848
    r4 = r4 + r0; // 0x807BE84C
    r4 = *(0xc8 + r4); // lwz @ 0x807BE850
    r0 = r4 + -1; // 0x807BE854
    /* cntlzw r0, r0 */ // 0x807BE858
    /* srwi r0, r0, 5 */ // 0x807BE85C
    /* b 0x807be88c */ // 0x807BE860
    /* lis r4, 0 */ // 0x807BE864
    /* clrlwi r0, r26, 0x18 */ // 0x807BE868
    r4 = *(0 + r4); // lwz @ 0x807BE86C
    /* mulli r0, r0, 0x248 */ // 0x807BE870
    r4 = *(0x14 + r4); // lwz @ 0x807BE874
    r4 = r4 + r0; // 0x807BE878
    r4 = *(0x8c + r4); // lwz @ 0x807BE87C
    r0 = r4 + -1; // 0x807BE880
    /* cntlzw r0, r0 */ // 0x807BE884
    /* srwi r0, r0, 5 */ // 0x807BE888
    if (==) goto 0x0x807be89c;
    /* li r30, 0 */ // 0x807BE894
    /* b 0x807be91c */ // 0x807BE898
    if (==) goto 0x0x807be8b8;
    if (==) goto 0x0x807be8c0;
    if (==) goto 0x0x807be8f0;
    /* b 0x807be91c */ // 0x807BE8B4
    /* li r30, 0 */ // 0x807BE8B8
    /* b 0x807be91c */ // 0x807BE8BC
    r3 = r28;
    r4 = r29;
    FUN_807BE6A0(r3, r4); // bl 0x807BE6A0
    if (!=) goto 0x0x807be8dc;
    /* li r30, 0 */ // 0x807BE8D4
    /* b 0x807be91c */ // 0x807BE8D8
    if (>=) goto 0x0x807be8e8;
    /* li r3, 0 */ // 0x807BE8E4
    r30 = r3;
    /* b 0x807be91c */ // 0x807BE8EC
    r3 = r28;
    r4 = r29;
    FUN_807BE6A0(r3, r3, r4); // bl 0x807BE6A0
    if (!=) goto 0x0x807be90c;
    /* li r30, 0 */ // 0x807BE904
    /* b 0x807be91c */ // 0x807BE908
    if (>=) goto 0x0x807be918;
    /* li r3, 0 */ // 0x807BE914
    r30 = r3;
    r3 = r30;
    r0 = *(0x34 + r1); // lwz @ 0x807BE924
    return;
}