/* Function at 0x8073ADEC, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8073ADEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8073ADF4
    *(0x14 + r1) = r0; // stw @ 0x8073ADF8
    *(0xc + r1) = r31; // stw @ 0x8073ADFC
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x8073AE04
    r0 = *(0x10 + r4); // lbz @ 0x8073AE08
    if (!=) goto 0x0x8073ae9c;
    r0 = *(4 + r3); // lbz @ 0x8073AE14
    if (==) goto 0x0x8073ae24;
    /* b 0x8073ae9c */ // 0x8073AE20
    r3 = *(0x244 + r3); // lwz @ 0x8073AE24
    if (==) goto 0x0x8073ae9c;
    r3 = r3 + 0x74; // 0x8073AE30
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073ae48;
    /* li r3, 0 */ // 0x8073AE40
    /* b 0x8073ae4c */ // 0x8073AE44
    r3 = *(0xc + r3); // lwz @ 0x8073AE48
}