/* Function at 0x806EA380, size=364 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r20 */

void FUN_806EA380(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r20 */
    /* lis r3, 0 */ // 0x806EA388
    /* stmw r20, 0x30(r1) */ // 0x806EA38C
    /* lis r30, 0 */ // 0x806EA390
    /* lhzu r20, 0(r3) */ // 0x806EA398
    /* lhzu r31, 0(r30) */ // 0x806EA39C
    r21 = *(2 + r3); // lhz @ 0x806EA3A0
    r22 = *(4 + r3); // lhz @ 0x806EA3A4
    r23 = *(6 + r3); // lhz @ 0x806EA3A8
    r24 = *(8 + r3); // lhz @ 0x806EA3AC
    r25 = *(0xa + r3); // lhz @ 0x806EA3B0
    r26 = *(0xc + r3); // lhz @ 0x806EA3B4
    r27 = *(0xe + r3); // lhz @ 0x806EA3B8
    r28 = *(0x10 + r3); // lhz @ 0x806EA3BC
    r29 = *(0x12 + r3); // lhz @ 0x806EA3C0
    r12 = *(2 + r30); // lhz @ 0x806EA3C4
    r11 = *(4 + r30); // lhz @ 0x806EA3C8
    r10 = *(6 + r30); // lhz @ 0x806EA3CC
    r9 = *(8 + r30); // lhz @ 0x806EA3D0
    r8 = *(0xa + r30); // lhz @ 0x806EA3D4
    r7 = *(0xc + r30); // lhz @ 0x806EA3D8
    r6 = *(0xe + r30); // lhz @ 0x806EA3DC
    r3 = *(0x10 + r30); // lhz @ 0x806EA3E0
    r0 = *(0x12 + r30); // lhz @ 0x806EA3E4
    *(0x1c + r1) = r20; // sth @ 0x806EA3E8
    *(0x1e + r1) = r21; // sth @ 0x806EA3EC
    *(0x20 + r1) = r22; // sth @ 0x806EA3F0
    *(0x22 + r1) = r23; // sth @ 0x806EA3F4
    *(0x24 + r1) = r24; // sth @ 0x806EA3F8
    *(0x26 + r1) = r25; // sth @ 0x806EA3FC
    *(0x28 + r1) = r26; // sth @ 0x806EA400
    *(0x2a + r1) = r27; // sth @ 0x806EA404
    *(0x2c + r1) = r28; // sth @ 0x806EA408
    *(0x2e + r1) = r29; // sth @ 0x806EA40C
    *(8 + r1) = r31; // sth @ 0x806EA410
    *(0xa + r1) = r12; // sth @ 0x806EA414
    *(0xc + r1) = r11; // sth @ 0x806EA418
    *(0xe + r1) = r10; // sth @ 0x806EA41C
    *(0x10 + r1) = r9; // sth @ 0x806EA420
    *(0x12 + r1) = r8; // sth @ 0x806EA424
    *(0x14 + r1) = r7; // sth @ 0x806EA428
    *(0x16 + r1) = r6; // sth @ 0x806EA42C
    *(0x18 + r1) = r3; // sth @ 0x806EA430
    *(0x1a + r1) = r0; // sth @ 0x806EA434
    if (!=) goto 0x0x806ea440;
    r0 = *(0 + r5); // lhz @ 0x806EA440
    /* li r3, 5 */ // 0x806EA444
    if (<) goto 0x0x806ea464;
    r0 = *(2 + r5); // lhz @ 0x806EA450
    if (>=) goto 0x0x806ea464;
    /* li r3, 0 */ // 0x806EA45C
    /* b 0x806ea4e0 */ // 0x806EA460
    r0 = *(4 + r5); // lhz @ 0x806EA464
    if (<) goto 0x0x806ea484;
    r0 = *(6 + r5); // lhz @ 0x806EA470
    if (>=) goto 0x0x806ea484;
    /* li r3, 1 */ // 0x806EA47C
    /* b 0x806ea4e0 */ // 0x806EA480
    r0 = *(8 + r5); // lhz @ 0x806EA484
    if (<) goto 0x0x806ea4a4;
    r0 = *(0xa + r5); // lhz @ 0x806EA490
    if (>=) goto 0x0x806ea4a4;
    /* li r3, 2 */ // 0x806EA49C
    /* b 0x806ea4e0 */ // 0x806EA4A0
    r0 = *(0xc + r5); // lhz @ 0x806EA4A4
    if (<) goto 0x0x806ea4c4;
    r0 = *(0xe + r5); // lhz @ 0x806EA4B0
    if (>=) goto 0x0x806ea4c4;
    /* li r3, 3 */ // 0x806EA4BC
    /* b 0x806ea4e0 */ // 0x806EA4C0
    r0 = *(0x10 + r5); // lhz @ 0x806EA4C4
    if (<) goto 0x0x806ea4e0;
    r0 = *(0x12 + r5); // lhz @ 0x806EA4D0
    if (>=) goto 0x0x806ea4e0;
    /* li r3, 4 */ // 0x806EA4DC
    return;
}