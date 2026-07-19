/* Function at 0x807AA858, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807AA858(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807AA860
    *(0xc + r1) = r31; // stw @ 0x807AA868
    *(8 + r1) = r30; // stw @ 0x807AA86C
    r31 = *(0 + r4); // lwz @ 0x807AA870
    if (==) goto 0x0x807aa8f4;
    /* li r0, 0 */ // 0x807AA87C
    *(0 + r4) = r0; // stw @ 0x807AA880
    if (==) goto 0x0x807aa8f4;
    if (==) goto 0x0x807aa8ec;
    /* lis r3, 0 */ // 0x807AA88C
    r3 = r3 + 0; // 0x807AA890
    *(0 + r31) = r3; // stw @ 0x807AA894
    r30 = *(0 + r4); // lwz @ 0x807AA898
    if (==) goto 0x0x807aa8e0;
    *(0 + r4) = r0; // stw @ 0x807AA8A4
    if (==) goto 0x0x807aa8e0;
    if (==) goto 0x0x807aa8d8;
    *(0 + r30) = r3; // stw @ 0x807AA8B0
    r3 = *(0 + r4); // lwz @ 0x807AA8B4
    if (==) goto 0x0x807aa8cc;
    *(0 + r4) = r0; // stw @ 0x807AA8C0
    /* li r4, 1 */ // 0x807AA8C4
    FUN_807AA90C(r4); // bl 0x807AA90C
    r3 = r30;
    /* li r4, 0 */ // 0x807AA8D0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807AA8E4
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x807AA8F4
    r31 = *(0xc + r1); // lwz @ 0x807AA8F8
    r30 = *(8 + r1); // lwz @ 0x807AA8FC
    return;
}