/* Function at 0x8083BE5C, size=244 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083BE5C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083BE68
    r31 = r4;
    /* li r4, 0 */ // 0x8083BE70
    r7 = *(0x7c + r3); // lwz @ 0x8083BE74
    /* rlwinm. r0, r7, 0, 0x19, 0x19 */ // 0x8083BE78
    if (!=) goto 0x0x8083be90;
    r0 = *(0x78 + r3); // lwz @ 0x8083BE80
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8083BE84
    if (==) goto 0x0x8083be90;
    /* li r4, 1 */ // 0x8083BE8C
    if (==) goto 0x0x8083beb4;
    r4 = *(0x78 + r3); // lwz @ 0x8083BE98
    /* rlwinm. r0, r4, 0, 0x18, 0x19 */ // 0x8083BE9C
    if (!=) goto 0x0x8083beb4;
    /* rlwinm. r0, r4, 0, 0x1d, 0x1d */ // 0x8083BEA4
    if (!=) goto 0x0x8083beb4;
    /* rlwinm. r0, r4, 0, 0x1c, 0x1c */ // 0x8083BEAC
    if (==) goto 0x0x8083bebc;
    /* li r3, 0 */ // 0x8083BEB4
    /* b 0x8083bf3c */ // 0x8083BEB8
    /* clrlwi. r0, r7, 0x1f */ // 0x8083BEBC
    if (!=) goto 0x0x8083bee0;
    FUN_8082D604(r3); // bl 0x8082D604
    r0 = r3 ^ r31; // 0x8083BEC8
    r4 = r0 >> 1; // srawi
    r0 = r0 & r3; // 0x8083BED0
    /* subf r0, r0, r4 */ // 0x8083BED4
    /* srwi r6, r0, 0x1f */ // 0x8083BED8
    /* b 0x8083bf38 */ // 0x8083BEDC
    r0 = *(0x6c + r3); // lbz @ 0x8083BEE0
    /* lis r4, 0 */ // 0x8083BEE4
    r5 = *(0 + r4); // lwz @ 0x8083BEE8
    /* li r6, 0 */ // 0x8083BEEC
    /* slwi r0, r0, 2 */ // 0x8083BEF0
    /* li r4, 0 */ // 0x8083BEF4
    r5 = r5 + r0; // 0x8083BEF8
    r5 = *(0x10 + r5); // lwz @ 0x8083BEFC
    r0 = *(0x6dc + r5); // lwz @ 0x8083BF00
    if (<=) goto 0x0x8083bf24;
    if (==) goto 0x0x8083bf20;
    r0 = *(0x6e0 + r5); // lwz @ 0x8083BF14
    if (!=) goto 0x0x8083bf24;
    /* li r4, 1 */ // 0x8083BF20
    if (!=) goto 0x0x8083bf38;
    /* rlwinm. r0, r7, 0, 0x1d, 0x1d */ // 0x8083BF2C
    if (!=) goto 0x0x8083bf38;
    /* li r6, 1 */ // 0x8083BF34
    r3 = r6;
    r0 = *(0x14 + r1); // lwz @ 0x8083BF3C
    r31 = *(0xc + r1); // lwz @ 0x8083BF40
    return;
}