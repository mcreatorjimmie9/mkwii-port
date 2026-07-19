/* Function at 0x807CE3B0, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_807CE3B0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r4 = r3 + 0xe8; // 0x807CE3B8
    *(0x14 + r1) = r0; // stw @ 0x807CE3BC
    *(0xc + r1) = r31; // stw @ 0x807CE3C0
    r31 = r3;
    FUN_807CCF6C(r4); // bl 0x807CCF6C
    r3 = r31;
    FUN_807CB8AC(r3); // bl 0x807CB8AC
    r3 = r31;
    FUN_807CB7B0(r3, r3); // bl 0x807CB7B0
    r3 = r31;
    FUN_807CB5D8(r3, r3, r3); // bl 0x807CB5D8
    r0 = *(0x349 + r31); // lbz @ 0x807CE3E4
    r3 = *(0x340 + r31); // lwz @ 0x807CE3E8
    r4 = r3 + 1; // 0x807CE3F0
    *(0x340 + r31) = r4; // stw @ 0x807CE3F4
    if (==) goto 0x0x807ce40c;
    r3 = r31 + 0xb0; // 0x807CE3FC
    r4 = r31 + 0x2a8; // 0x807CE400
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    /* b 0x807ce44c */ // 0x807CE408
    /* lis r3, 0 */ // 0x807CE40C
    r0 = *(0 + r3); // lha @ 0x807CE410
    if (<=) goto 0x0x807ce44c;
    r4 = *(8 + r31); // lwz @ 0x807CE41C
    /* lis r3, 0 */ // 0x807CE420
    /* lis r5, 0 */ // 0x807CE424
    /* lfs f1, 0(r3) */ // 0x807CE428
    r3 = *(0x28 + r4); // lwz @ 0x807CE42C
    /* li r4, 1 */ // 0x807CE430
    /* lfs f2, 0(r5) */ // 0x807CE434
    /* li r5, 1 */ // 0x807CE438
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = r31 + 0xb0; // 0x807CE440
    r4 = r31 + 0x1a0; // 0x807CE444
    FUN_807CF1B4(r5, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807CE44C
    r31 = *(0xc + r1); // lwz @ 0x807CE450
    return;
}