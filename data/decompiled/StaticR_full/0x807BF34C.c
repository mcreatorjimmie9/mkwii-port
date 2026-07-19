/* Function at 0x807BF34C, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807BF34C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807BF358
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x807BF360
    r3 = *(0 + r4); // lwz @ 0x807BF364
    r3 = *(0x10 + r3); // lwz @ 0x807BF368
    r3 = *(0x144 + r3); // lwz @ 0x807BF36C
    r12 = *(0x34 + r3); // lwz @ 0x807BF370
    r12 = *(0x44 + r12); // lwz @ 0x807BF374
    /* mtctr r12 */ // 0x807BF378
    /* bctrl  */ // 0x807BF37C
    r4 = *(4 + r31); // lwz @ 0x807BF380
    r4 = *(0 + r4); // lwz @ 0x807BF384
    r4 = *(0 + r4); // lwz @ 0x807BF388
    r4 = *(4 + r4); // lwz @ 0x807BF38C
    r5 = *(4 + r4); // lwz @ 0x807BF390
    /* rlwinm. r0, r5, 0, 8, 8 */ // 0x807BF394
    if (==) goto 0x0x807bf3b8;
    /* rlwinm. r0, r5, 0, 1, 1 */ // 0x807BF39C
    if (!=) goto 0x0x807bf3b8;
    r0 = *(8 + r4); // lwz @ 0x807BF3A4
    /* clrlwi. r0, r0, 0x1f */ // 0x807BF3A8
    if (!=) goto 0x0x807bf3b8;
    /* li r0, 1 */ // 0x807BF3B0
    /* b 0x807bf3bc */ // 0x807BF3B4
    /* li r0, 0 */ // 0x807BF3B8
    if (==) goto 0x0x807bf3e4;
    r12 = *(0 + r3); // lwz @ 0x807BF3C4
    r12 = *(0x24 + r12); // lwz @ 0x807BF3C8
    /* mtctr r12 */ // 0x807BF3CC
    /* bctrl  */ // 0x807BF3D0
    if (==) goto 0x0x807bf3e4;
    /* li r0, 1 */ // 0x807BF3DC
    /* b 0x807bf3e8 */ // 0x807BF3E0
    /* li r0, 0 */ // 0x807BF3E4
    if (==) goto 0x0x807bf430;
    /* lis r6, 0 */ // 0x807BF3F0
    r5 = *(0 + r6); // lwzu @ 0x807BF3F4
    r7 = *(4 + r31); // lwz @ 0x807BF3F8
    /* lis r3, 0 */ // 0x807BF3FC
    r0 = *(4 + r6); // lwz @ 0x807BF400
    /* li r4, 2 */ // 0x807BF404
    *(8 + r1) = r5; // stw @ 0x807BF408
    r31 = *(4 + r7); // lwz @ 0x807BF40C
    *(0xc + r1) = r0; // stw @ 0x807BF410
    r3 = *(0 + r3); // lwz @ 0x807BF414
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* slwi r0, r3, 2 */ // 0x807BF41C
    /* lwzx r4, r4, r0 */ // 0x807BF424
    r3 = r31;
    FUN_805AE794(r4, r3); // bl 0x805AE794
    r0 = *(0x24 + r1); // lwz @ 0x807BF430
    r31 = *(0x1c + r1); // lwz @ 0x807BF434
    return;
}