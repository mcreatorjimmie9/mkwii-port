/* Function at 0x8079BD70, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_8079BD70(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8079BD7C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r0 = *(0x9c + r3); // lhz @ 0x8079BD94
    if (!=) goto 0x0x8079bdfc;
    /* lis r3, 0 */ // 0x8079BDA0
    r3 = *(0 + r3); // lwz @ 0x8079BDA4
    r0 = *(0x10 + r3); // lwz @ 0x8079BDA8
    if (!=) goto 0x0x8079bdfc;
    r0 = *(0x40 + r3); // lwz @ 0x8079BDB4
    if (!=) goto 0x0x8079bddc;
    /* lis r3, 0 */ // 0x8079BDC0
    r3 = *(0 + r3); // lwz @ 0x8079BDC4
    r0 = *(0x14 + r3); // lbz @ 0x8079BDC8
    if (==) goto 0x0x8079bdfc;
    /* li r3, 0x80 */ // 0x8079BDD4
    /* b 0x8079be14 */ // 0x8079BDD8
    /* lis r3, 0 */ // 0x8079BDDC
    /* li r4, 4 */ // 0x8079BDE0
    r3 = *(0 + r3); // lwz @ 0x8079BDE4
    FUN_807A50CC(r3, r3, r4); // bl 0x807A50CC
    if (!=) goto 0x0x8079bdfc;
    /* li r3, 0x80 */ // 0x8079BDF4
    /* b 0x8079be14 */ // 0x8079BDF8
    r3 = r27;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    r7 = r31;
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x8079BE18
    return;
}