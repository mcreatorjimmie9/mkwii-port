/* Function at 0x80603374, size=308 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80603374(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80603380
    r31 = r3;
    FUN_8061DC70(); // bl 0x8061DC70
    r4 = *(0 + r31); // lwz @ 0x8060338C
    r5 = *(0x3a + r3); // lbz @ 0x80603390
    r3 = *(4 + r4); // lwz @ 0x80603394
    r0 = *(8 + r3); // lwz @ 0x80603398
    /* andi. r0, r0, 0x461 */ // 0x8060339C
    if (!=) goto 0x0x806033c8;
    /* li r0, 0 */ // 0x806033A8
    if (<=) goto 0x0x806033b4;
    /* li r0, 1 */ // 0x806033B0
    if (==) goto 0x0x806033c8;
    /* li r0, 0xe */ // 0x806033BC
    *(0x18 + r31) = r5; // stb @ 0x806033C0
    *(0x1a + r31) = r0; // sth @ 0x806033C4
    r3 = *(0 + r31); // lwz @ 0x806033C8
    r4 = *(4 + r3); // lwz @ 0x806033CC
    r5 = *(0x1c + r4); // lwz @ 0x806033D0
    if (==) goto 0x0x80603448;
    r0 = *(0x1a + r31); // lha @ 0x806033DC
    if (<=) goto 0x0x80603448;
    if (>) goto 0x0x80603448;
    r3 = *(4 + r3); // lwz @ 0x806033F0
    r3 = *(8 + r3); // lwz @ 0x806033F4
    /* rlwinm. r0, r3, 0, 1, 1 */ // 0x806033F8
    if (!=) goto 0x0x8060340c;
    r0 = *(0x74 + r4); // lwz @ 0x80603400
    if (<) goto 0x0x80603448;
    /* andi. r0, r3, 0x461 */ // 0x8060340C
    if (!=) goto 0x0x80603448;
    if (<) goto 0x0x80603428;
    r0 = *(8 + r4); // lwz @ 0x8060341C
    r0 = r0 | 0x20; // 0x80603420
    *(8 + r4) = r0; // stw @ 0x80603424
    r3 = *(0 + r31); // lwz @ 0x80603428
    r3 = *(4 + r3); // lwz @ 0x8060342C
    r0 = *(4 + r3); // lwz @ 0x80603430
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80603434
    if (==) goto 0x0x80603464;
    /* li r0, 1 */ // 0x8060343C
    *(0x3a + r31) = r0; // stb @ 0x80603440
    /* b 0x80603464 */ // 0x80603444
    r3 = *(0x1a + r31); // lha @ 0x80603448
    r0 = r3 + -1; // 0x8060344C
    *(0x1a + r31) = r0; // sth @ 0x80603450
    /* extsh. r0, r0 */ // 0x80603454
    if (>=) goto 0x0x80603464;
    /* li r0, 0 */ // 0x8060345C
    *(0x1a + r31) = r0; // sth @ 0x80603460
    r3 = *(0 + r31); // lwz @ 0x80603464
    r3 = *(4 + r3); // lwz @ 0x80603468
    r0 = *(4 + r3); // lwz @ 0x8060346C
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x80603470
    if (==) goto 0x0x80603494;
    r3 = r31;
    FUN_8061E0C8(r3); // bl 0x8061E0C8
    r0 = *(0x2c + r3); // lwz @ 0x80603480
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80603484
    if (!=) goto 0x0x80603494;
    /* li r0, 0 */ // 0x8060348C
    *(0x3a + r31) = r0; // stb @ 0x80603490
    r0 = *(0x14 + r1); // lwz @ 0x80603494
    r31 = *(0xc + r1); // lwz @ 0x80603498
    return;
}