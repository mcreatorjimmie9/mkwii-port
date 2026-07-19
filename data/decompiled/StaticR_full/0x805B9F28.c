/* Function at 0x805B9F28, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B9F28(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9F34
    r31 = r3;
    FUN_805BA274(); // bl 0x805BA274
    /* lis r3, 0 */ // 0x805B9F40
    r0 = *(8 + r31); // lhz @ 0x805B9F44
    r4 = *(0 + r3); // lwz @ 0x805B9F48
    /* lis r3, 0 */ // 0x805B9F4C
    r0 = *(0x5c + r4); // lwz @ 0x805B9F54
    r3 = r3 + 0; // 0x805B9F58
    /* slwi r0, r0, 2 */ // 0x805B9F5C
    /* lwzx r4, r3, r0 */ // 0x805B9F60
    if (<=) goto 0x0x805b9f84;
    r3 = *(0x18 + r31); // lwz @ 0x805B9F68
    /* li r0, 0 */ // 0x805B9F6C
    /* li r5, 0x80 */ // 0x805B9F70
    *(4 + r3) = r0; // stw @ 0x805B9F74
    r3 = *(0x10 + r31); // lwz @ 0x805B9F78
    r3 = *(4 + r3); // lwz @ 0x805B9F7C
    FUN_805E3430(r5); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x805B9F84
    r31 = *(0xc + r1); // lwz @ 0x805B9F88
    return;
}