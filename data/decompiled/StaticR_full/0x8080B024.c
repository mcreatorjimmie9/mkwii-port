/* Function at 0x8080B024, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8080B024(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8080B030
    r31 = r3;
    FUN_8080F34C(); // bl 0x8080F34C
    r4 = *(8 + r31); // lwz @ 0x8080B03C
    /* lis r3, 0 */ // 0x8080B040
    /* lis r5, 0 */ // 0x8080B044
    /* lfs f1, 0(r3) */ // 0x8080B048
    r3 = *(0x28 + r4); // lwz @ 0x8080B04C
    /* li r4, 0 */ // 0x8080B050
    /* lfs f2, 0(r5) */ // 0x8080B054
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = *(0x10 + r31); // lwz @ 0x8080B05C
    FUN_805EEF04(r4); // bl 0x805EEF04
    r0 = *(0x14 + r1); // lwz @ 0x8080B064
    r31 = *(0xc + r1); // lwz @ 0x8080B068
    return;
}