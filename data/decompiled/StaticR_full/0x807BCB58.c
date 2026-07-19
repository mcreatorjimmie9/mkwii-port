/* Function at 0x807BCB58, size=276 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807BCB58(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807BCB6C
    r29 = r3;
    r3 = *(0x158 + r3); // lwz @ 0x807BCB74
    r12 = *(0x34 + r3); // lwz @ 0x807BCB78
    r12 = *(0x1c + r12); // lwz @ 0x807BCB7C
    /* mtctr r12 */ // 0x807BCB80
    /* bctrl  */ // 0x807BCB84
    r0 = *(0x163 + r29); // lbz @ 0x807BCB88
    if (==) goto 0x0x807bcc50;
    r3 = *(0x144 + r29); // lwz @ 0x807BCB94
    r12 = *(0x34 + r3); // lwz @ 0x807BCB98
    r12 = *(0x34 + r12); // lwz @ 0x807BCB9C
    /* mtctr r12 */ // 0x807BCBA0
    /* bctrl  */ // 0x807BCBA4
    /* li r31, 0 */ // 0x807BCBA8
    FUN_807C00FC(); // bl 0x807C00FC
    if (!=) goto 0x0x807bcbc4;
    FUN_807C0164(); // bl 0x807C0164
    if (==) goto 0x0x807bcbc8;
    /* li r31, 1 */ // 0x807BCBC4
    /* li r31, 0 */ // 0x807BCBCC
    if (==) goto 0x0x807bcc04;
    r3 = *(0x140 + r29); // lwz @ 0x807BCBD4
    r3 = *(0 + r3); // lwz @ 0x807BCBD8
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BCBE0
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807BCBE8
    r3 = *(0xc + r3); // lwz @ 0x807BCBEC
    /* lwzx r3, r3, r0 */ // 0x807BCBF0
    r0 = *(0x38 + r3); // lwz @ 0x807BCBF4
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x807BCBF8
    if (==) goto 0x0x807bcc04;
    /* li r31, 1 */ // 0x807BCC00
    /* li r30, 1 */ // 0x807BCC04
    FUN_807C018C(); // bl 0x807C018C
    if (!=) goto 0x0x807bcc24;
    FUN_807C0144(); // bl 0x807C0144
    if (!=) goto 0x0x807bcc24;
    /* li r30, 0 */ // 0x807BCC20
    if (!=) goto 0x0x807bcc34;
    if (==) goto 0x0x807bcc44;
    r3 = r29;
    r4 = r29 + 0x114; // 0x807BCC38
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807bcc50 */ // 0x807BCC40
    r3 = r29;
    r4 = r29 + 0xe8; // 0x807BCC48
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807BCC50
    r31 = *(0x1c + r1); // lwz @ 0x807BCC54
    r30 = *(0x18 + r1); // lwz @ 0x807BCC58
    r29 = *(0x14 + r1); // lwz @ 0x807BCC5C
    return;
}