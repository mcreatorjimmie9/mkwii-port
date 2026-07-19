/* Function at 0x806039A8, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806039A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x806039B4
    *(0xc + r1) = r31; // stw @ 0x806039B8
    r31 = r3;
    if (<) goto 0x0x80603a50;
    r4 = *(0x18 + r3); // lbz @ 0x806039C4
    r0 = r4 + -1; // 0x806039C8
    /* clrlwi r0, r0, 0x18 */ // 0x806039CC
    if (>) goto 0x0x80603a08;
    /* extsb r0, r4 */ // 0x806039D8
    /* li r4, 5 */ // 0x806039DC
    *(0x10 + r3) = r4; // stw @ 0x806039E4
    if (!=) goto 0x0x806039f8;
    /* lis r4, 0 */ // 0x806039EC
    /* lfs f0, 0(r4) */ // 0x806039F0
    /* b 0x80603a00 */ // 0x806039F4
    /* lis r4, 0 */ // 0x806039F8
    /* lfs f0, 0(r4) */ // 0x806039FC
    /* stfs f0, 0x1c(r3) */ // 0x80603A00
    /* b 0x80603a30 */ // 0x80603A04
    /* extsb r0, r4 */ // 0x80603A08
    *(0x10 + r3) = r0; // stw @ 0x80603A0C
    if (!=) goto 0x0x80603a24;
    /* lis r4, 0 */ // 0x80603A18
    /* lfs f0, 0(r4) */ // 0x80603A1C
    /* b 0x80603a2c */ // 0x80603A20
    /* lis r4, 0 */ // 0x80603A24
    /* lfs f0, 0(r4) */ // 0x80603A28
    /* stfs f0, 0x1c(r3) */ // 0x80603A2C
    r3 = r31;
    FUN_80603C9C(r4, r3); // bl 0x80603C9C
    r3 = *(0 + r31); // lwz @ 0x80603A38
    r3 = *(4 + r3); // lwz @ 0x80603A3C
    r0 = *(8 + r3); // lwz @ 0x80603A40
    r0 = r0 | 0x40; // 0x80603A44
    *(8 + r3) = r0; // stw @ 0x80603A48
    /* b 0x80603a58 */ // 0x80603A4C
    /* li r0, 0 */ // 0x80603A50
    *(0x10 + r3) = r0; // stw @ 0x80603A54
    r0 = *(0x14 + r1); // lwz @ 0x80603A58
    r31 = *(0xc + r1); // lwz @ 0x80603A5C
    return;
}