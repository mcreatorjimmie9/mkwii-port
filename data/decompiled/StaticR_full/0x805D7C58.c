/* Function at 0x805D7C58, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D7C58(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805D7C6C
    r30 = r3;
    r3 = r5;
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x805D7C7C
    if (<) goto 0x0x805d7d2c;
    /* mulli r4, r0, 0x64 */ // 0x805D7C84
    /* li r0, 5 */ // 0x805D7C88
    /* li r3, 0 */ // 0x805D7C8C
    r5 = r30 + r4; // 0x805D7C90
    /* mtctr r0 */ // 0x805D7C94
    r0 = *(0xa + r31); // lbz @ 0x805D7C98
    if (!=) goto 0x0x805d7cac;
    /* li r0, 0 */ // 0x805D7CA4
    /* b 0x805d7d14 */ // 0x805D7CA8
    r0 = *(0xe76 + r5); // lbz @ 0x805D7CAC
    if (!=) goto 0x0x805d7cc0;
    /* li r0, 1 */ // 0x805D7CB8
    /* b 0x805d7d14 */ // 0x805D7CBC
    r0 = *(0xe70 + r5); // lhz @ 0x805D7CC0
    r4 = *(4 + r31); // lhz @ 0x805D7CC4
    if (>=) goto 0x0x805d7cd8;
    /* li r0, 1 */ // 0x805D7CD0
    /* b 0x805d7d14 */ // 0x805D7CD4
    if (!=) goto 0x0x805d7d10;
    r0 = *(0xe72 + r5); // lbz @ 0x805D7CDC
    r4 = *(6 + r31); // lbz @ 0x805D7CE0
    if (>=) goto 0x0x805d7cf4;
    /* li r0, 1 */ // 0x805D7CEC
    /* b 0x805d7d14 */ // 0x805D7CF0
    if (!=) goto 0x0x805d7d10;
    r4 = *(8 + r31); // lhz @ 0x805D7CF8
    r0 = *(0xe74 + r5); // lhz @ 0x805D7CFC
    if (>=) goto 0x0x805d7d10;
    /* li r0, 1 */ // 0x805D7D08
    /* b 0x805d7d14 */ // 0x805D7D0C
    /* li r0, 0 */ // 0x805D7D10
    if (==) goto 0x0x805d7d20;
    /* b 0x805d7d30 */ // 0x805D7D1C
    r5 = r5 + 0xc80; // 0x805D7D20
    r3 = r3 + 1; // 0x805D7D24
    if (counter-- != 0) goto 0x0x805d7c98;
    /* li r3, -1 */ // 0x805D7D2C
    r0 = *(0x14 + r1); // lwz @ 0x805D7D30
    r31 = *(0xc + r1); // lwz @ 0x805D7D34
    r30 = *(8 + r1); // lwz @ 0x805D7D38
    return;
}