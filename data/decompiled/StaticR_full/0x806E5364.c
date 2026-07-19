/* Function at 0x806E5364, size=236 bytes */
/* Stack frame: 0 bytes */

void FUN_806E5364(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* li r0, 0xc */ // 0x806E5364
    /* li r4, 0 */ // 0x806E5368
    /* lis r7, 0 */ // 0x806E536C
    /* li r8, 1 */ // 0x806E5370
    /* mtctr r0 */ // 0x806E5374
    r10 = *(0 + r7); // lwz @ 0x806E5378
    /* clrlwi r0, r4, 0x18 */ // 0x806E537C
    r0 = r8 << r0; // slw
    r5 = *(0x291c + r10); // lwz @ 0x806E5384
    /* mulli r5, r5, 0x58 */ // 0x806E5388
    r6 = r10 + r5; // 0x806E538C
    r5 = *(0x48 + r6); // lwz @ 0x806E5390
    /* and. r5, r0, r5 */ // 0x806E5394
    if (==) goto 0x0x806e5444;
    r5 = *(0x59 + r6); // lbz @ 0x806E539C
    if (==) goto 0x0x806e5444;
    r6 = r4 rlwinm 5; // rlwinm
    r9 = r4 rlwinm 2; // rlwinm
    r5 = r10 + r6; // 0x806E53B0
    r5 = *(0x27a0 + r5); // lwz @ 0x806E53B4
    /* mulli r5, r5, 0x30 */ // 0x806E53B8
    r5 = r10 + r5; // 0x806E53BC
    r5 = r5 + r9; // 0x806E53C0
    r5 = *(0x150 + r5); // lwz @ 0x806E53C4
    r10 = *(4 + r5); // lwz @ 0x806E53C8
    r5 = *(8 + r10); // lwz @ 0x806E53CC
    if (==) goto 0x0x806e540c;
    r10 = *(0 + r10); // lwz @ 0x806E53D8
    r5 = *(4 + r10); // lwz @ 0x806E53DC
    if (==) goto 0x0x806e53f4;
    r5 = *(4 + r3); // lwz @ 0x806E53E8
    r5 = r5 | r0; // 0x806E53EC
    *(4 + r3) = r5; // stw @ 0x806E53F0
    r5 = *(0x17 + r10); // lbz @ 0x806E53F4
    if (==) goto 0x0x806e540c;
    r5 = *(0xc + r3); // lwz @ 0x806E5400
    r5 = r5 | r0; // 0x806E5404
    *(0xc + r3) = r5; // stw @ 0x806E5408
    r5 = *(0 + r7); // lwz @ 0x806E540C
    r6 = r5 + r6; // 0x806E5410
    r5 = r9 + r5; // 0x806E5414
    r6 = *(0x27a8 + r6); // lwz @ 0x806E5418
    /* mulli r6, r6, 0x30 */ // 0x806E541C
    r5 = r6 + r5; // 0x806E5420
    r5 = *(0x150 + r5); // lwz @ 0x806E5424
    r5 = *(0xc + r5); // lwz @ 0x806E5428
    r5 = *(8 + r5); // lwz @ 0x806E542C
    if (==) goto 0x0x806e5444;
    r5 = *(8 + r3); // lwz @ 0x806E5438
    r0 = r5 | r0; // 0x806E543C
    *(8 + r3) = r0; // stw @ 0x806E5440
    r4 = r4 + 1; // 0x806E5444
    if (counter-- != 0) goto 0x0x806e5378;
    return;
}