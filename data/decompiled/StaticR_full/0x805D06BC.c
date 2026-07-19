/* Function at 0x805D06BC, size=132 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805D06BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    *(0x8c + r1) = r31; // stw @ 0x805D06C8
    r31 = r3;
    r0 = *(0x14 + r3); // lwz @ 0x805D06D0
    if (==) goto 0x0x805d0768;
    r0 = *(0x1c + r3); // lwz @ 0x805D06DC
    *(0x18 + r3) = r4; // stw @ 0x805D06E0
    if (!=) goto 0x0x805d06f4;
    r3 = *(0x20 + r3); // lwz @ 0x805D06EC
    FUN_805BA86C(); // bl 0x805BA86C
    r0 = *(0x18 + r31); // lwz @ 0x805D06F4
    /* li r3, 1 */ // 0x805D06F8
    /* lis r4, 0 */ // 0x805D06FC
    *(0x1c + r31) = r3; // stw @ 0x805D0700
    /* lis r5, 0 */ // 0x805D0704
    /* slwi r0, r0, 2 */ // 0x805D0708
    r4 = r4 + 0; // 0x805D070C
    r5 = r5 + 0; // 0x805D0714
    /* lwzx r6, r4, r0 */ // 0x805D0718
    r5 = r5 + 0x12c; // 0x805D071C
    /* li r4, 0x80 */ // 0x805D0720
    /* crclr cr1eq */ // 0x805D0724
    FUN_805E3430(r5, r5, r4); // bl 0x805E3430
    r3 = *(0x20 + r31); // lwz @ 0x805D072C
    r5 = *(0x14 + r31); // lwz @ 0x805D0734
    FUN_805BA798(r4); // bl 0x805BA798
    r3 = *(0x20 + r31); // lwz @ 0x805D073C
}