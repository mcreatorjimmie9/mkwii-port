/* Function at 0x805FE3D4, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805FE3D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0x4011 */ // 0x805FE3DC
    r5 = r3 + -0x5000; // 0x805FE3E4
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805FE3F0
    *(0x14 + r1) = r29; // stw @ 0x805FE3F4
    *(0x10 + r1) = r28; // stw @ 0x805FE3F8
    r28 = r6;
    r0 = *(0 + r6); // lwz @ 0x805FE400
    /* and. r0, r0, r5 */ // 0x805FE404
    if (==) goto 0x0x805fe41c;
    r3 = r28;
    r4 = r5;
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fe420 */ // 0x805FE418
    /* li r3, 0 */ // 0x805FE41C
    if (==) goto 0x0x805fe498;
    /* lis r4, 0 */ // 0x805FE428
    /* lis r3, -0x3fef */ // 0x805FE42C
    r5 = *(0 + r4); // lwz @ 0x805FE430
    r4 = r3 + -0x7000; // 0x805FE434
    r0 = *(0 + r28); // lwz @ 0x805FE438
    r3 = *(4 + r5); // lhz @ 0x805FE43C
    /* and. r0, r0, r4 */ // 0x805FE440
    /* clrlwi r30, r3, 0x1b */ // 0x805FE444
    r29 = r3 rlwinm 0x1b; // rlwinm
    if (==) goto 0x0x805fe45c;
    r3 = r28;
    FUN_80842FAC(r3); // bl 0x80842FAC
    /* b 0x805fe460 */ // 0x805FE458
    /* li r3, 0 */ // 0x805FE45C
    if (==) goto 0x0x805fe490;
    *(0x74 + r31) = r30; // stw @ 0x805FE468
    /* lis r3, 0 */ // 0x805FE46C
    *(0x78 + r31) = r29; // stw @ 0x805FE470
    r3 = *(0 + r3); // lwz @ 0x805FE474
    r0 = *(4 + r3); // lhz @ 0x805FE478
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x805FE47C
    if (==) goto 0x0x805fe490;
    r0 = *(0 + r31); // lwz @ 0x805FE484
    r0 = r0 | 0x200; // 0x805FE488
    *(0 + r31) = r0; // stw @ 0x805FE48C
    /* li r3, 1 */ // 0x805FE490
    /* b 0x805fe49c */ // 0x805FE494
    /* li r3, 0 */ // 0x805FE498
    r0 = *(0x24 + r1); // lwz @ 0x805FE49C
    r31 = *(0x1c + r1); // lwz @ 0x805FE4A0
    r30 = *(0x18 + r1); // lwz @ 0x805FE4A4
    r29 = *(0x14 + r1); // lwz @ 0x805FE4A8
    r28 = *(0x10 + r1); // lwz @ 0x805FE4AC
    return;
}