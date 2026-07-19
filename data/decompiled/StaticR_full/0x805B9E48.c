/* Function at 0x805B9E48, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805B9E48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B9E54
    r31 = r3;
    FUN_805BA274(); // bl 0x805BA274
    r0 = *(8 + r31); // lhz @ 0x805B9E60
    /* lis r4, 0 */ // 0x805B9E64
    r4 = r4 + 0; // 0x805B9E68
    if (<=) goto 0x0x805b9e90;
    r3 = *(0x18 + r31); // lwz @ 0x805B9E74
    /* li r0, 0 */ // 0x805B9E78
    /* li r5, 0x80 */ // 0x805B9E7C
    *(4 + r3) = r0; // stw @ 0x805B9E80
    r3 = *(0x10 + r31); // lwz @ 0x805B9E84
    r3 = *(4 + r3); // lwz @ 0x805B9E88
    FUN_805E3430(r5); // bl 0x805E3430
    r0 = *(8 + r31); // lhz @ 0x805B9E90
    if (<=) goto 0x0x805b9ea8;
    r3 = *(0x18 + r31); // lwz @ 0x805B9E9C
    /* li r0, 4 */ // 0x805B9EA0
    *(8 + r3) = r0; // stw @ 0x805B9EA4
    r0 = *(8 + r31); // lhz @ 0x805B9EA8
    if (<=) goto 0x0x805b9ec0;
    r3 = *(0x18 + r31); // lwz @ 0x805B9EB4
    /* li r0, 4 */ // 0x805B9EB8
    *(0xc + r3) = r0; // stw @ 0x805B9EBC
    r0 = *(0x14 + r1); // lwz @ 0x805B9EC0
    r31 = *(0xc + r1); // lwz @ 0x805B9EC4
    return;
}