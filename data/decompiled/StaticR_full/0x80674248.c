/* Function at 0x80674248, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80674248(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80674254
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x8067425C
    if (!=) goto 0x0x806742ac;
    FUN_806742C0(); // bl 0x806742C0
    r0 = *(0xbe8 + r31); // lwz @ 0x8067426C
    if (!=) goto 0x0x806742ac;
    /* lis r3, 0 */ // 0x80674278
    r3 = *(0 + r3); // lwz @ 0x8067427C
    r3 = *(0 + r3); // lwz @ 0x80674280
    r3 = *(0x380 + r3); // lwz @ 0x80674284
    r0 = *(8 + r3); // lwz @ 0x80674288
    if (<) goto 0x0x8067429c;
    if (<=) goto 0x0x806742ac;
    /* lfs f1, 0xbec(r31) */ // 0x8067429C
    r3 = r31;
    /* li r4, 0 */ // 0x806742A4
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806742AC
    r31 = *(0xc + r1); // lwz @ 0x806742B0
    return;
}