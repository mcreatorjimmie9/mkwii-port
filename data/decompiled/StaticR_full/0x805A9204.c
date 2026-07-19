/* Function at 0x805A9204, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A9204(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = *(0x20 + r4); // lwz @ 0x805A920C
    r0 = r6 + -2; // 0x805A9214
    *(0xc + r1) = r31; // stw @ 0x805A9218
    /* cntlzw r0, r0 */ // 0x805A921C
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x805A9220
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x805A9228
    r30 = r3;
    if (==) goto 0x0x805a927c;
    r4 = *(0x14 + r4); // lwz @ 0x805A9234
    /* li r0, 2 */ // 0x805A9238
    *(0x14 + r3) = r4; // stw @ 0x805A923C
    /* li r4, 0 */ // 0x805A9240
    /* li r6, 0 */ // 0x805A9244
    *(0x20 + r3) = r0; // stw @ 0x805A9248
    FUN_805A9134(r4, r6); // bl 0x805A9134
    r3 = *(8 + r30); // lwz @ 0x805A9250
    r4 = r31;
    /* li r5, 4 */ // 0x805A9258
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* li r0, 0 */ // 0x805A9260
    /* li r4, 4 */ // 0x805A9264
    *(4 + r30) = r3; // stw @ 0x805A9268
    *(0x20 + r30) = r4; // stw @ 0x805A926C
    *(0x14 + r30) = r0; // stw @ 0x805A9270
    *(0x18 + r30) = r0; // stw @ 0x805A9274
    /* b 0x805a9284 */ // 0x805A9278
    /* li r0, 0 */ // 0x805A927C
}