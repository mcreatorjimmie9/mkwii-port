/* Function at 0x805F40EC, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805F40EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F40FC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F4104
    r30 = r3;
    if (==) goto 0x0x805f4148;
    /* li r0, 0 */ // 0x805F4110
    *(0x20 + r3) = r0; // stw @ 0x805F4114
    if (==) goto 0x0x805f4138;
    /* lis r4, 0 */ // 0x805F411C
    r4 = r4 + 0; // 0x805F4120
    *(0 + r3) = r4; // stw @ 0x805F4124
    FUN_805F4CDC(r4, r4); // bl 0x805F4CDC
    r3 = r30;
    /* li r4, 0 */ // 0x805F4130
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805f4148;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F414C
    r30 = *(8 + r1); // lwz @ 0x805F4150
    r0 = *(0x14 + r1); // lwz @ 0x805F4154
    return;
}