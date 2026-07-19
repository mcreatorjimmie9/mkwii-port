/* Function at 0x806048A0, size=360 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 7 function(s) */

int FUN_806048A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* stmw r25, 0x24(r1) */ // 0x806048AC
    r30 = r3;
    r31 = r4;
    r26 = r5;
    /* li r25, 0 */ // 0x806048BC
    r0 = *(0x11 + r3); // lbz @ 0x806048C0
    if (==) goto 0x0x8060494c;
    /* lis r3, 0 */ // 0x806048CC
    r4 = r30;
    r3 = r3 + 0; // 0x806048D4
    /* li r25, 0 */ // 0x806048D8
    r28 = r3 + 0x24; // 0x806048DC
    r3 = r28;
    FUN_805EB784(r4, r3, r3); // bl 0x805EB784
    if (==) goto 0x0x8060493c;
    r0 = *(0x10 + r30); // lbz @ 0x806048F0
    if (==) goto 0x0x80604910;
    r0 = *(4 + r31); // lwz @ 0x806048FC
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80604900
    if (!=) goto 0x0x80604910;
    /* li r0, 1 */ // 0x80604908
    *(0x24 + r31) = r0; // stw @ 0x8060490C
    r3 = r31;
    r4 = r28;
    r5 = r30;
    /* li r6, 0 */ // 0x8060491C
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r30); // lwz @ 0x80604924
    if (==) goto 0x0x80604938;
    r3 = r31;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r25, 1 */ // 0x80604938
    if (==) goto 0x0x8060494c;
    /* li r0, 1 */ // 0x80604944
    *(0 + r26) = r0; // stb @ 0x80604948
    if (!=) goto 0x0x80604a44;
    /* lis r3, 0 */ // 0x80604954
    r4 = r30;
    r3 = r3 + 0; // 0x8060495C
    /* li r25, 0 */ // 0x80604960
    r28 = r3 + 0x2e; // 0x80604964
    r3 = r28;
    FUN_805EB784(r4, r3, r3); // bl 0x805EB784
    if (==) goto 0x0x806049c4;
    r0 = *(0x10 + r30); // lbz @ 0x80604978
    if (==) goto 0x0x80604998;
    r0 = *(4 + r31); // lwz @ 0x80604984
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x80604988
    if (!=) goto 0x0x80604998;
    /* li r0, 1 */ // 0x80604990
    *(0x24 + r31) = r0; // stw @ 0x80604994
    r3 = r31;
    r4 = r28;
    r5 = r30;
    /* li r6, 0 */ // 0x806049A4
    FUN_805EBE08(r3, r4, r5, r6); // bl 0x805EBE08
    r4 = *(0xc + r30); // lwz @ 0x806049AC
    if (==) goto 0x0x806049c0;
    r3 = r31;
    FUN_805EEFD4(r3); // bl 0x805EEFD4
    /* li r25, 1 */ // 0x806049C0
    if (==) goto 0x0x80604a44;
    /* lis r28, 0 */ // 0x806049CC
    /* li r26, 0 */ // 0x806049D0
    r28 = r28 + 0; // 0x806049D4
    /* li r29, 0 */ // 0x806049D8
    r0 = r26 rlwinm 2; // rlwinm
    r3 = r30;
    /* lwzx r27, r28, r0 */ // 0x806049E4
    r4 = r27;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x80604a2c;
    r0 = *(0 + r30); // lwz @ 0x806049F8
    r3 = r31;
    *(0x10 + r1) = r0; // stw @ 0x80604A00
    r6 = r27;
}