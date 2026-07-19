/* Function at 0x807D4E1C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D4E1C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D4E28
    r31 = r3;
    FUN_807BB110(); // bl 0x807BB110
    /* lis r3, 0 */ // 0x807D4E34
    /* li r4, 0 */ // 0x807D4E38
    r3 = *(0 + r3); // lwz @ 0x807D4E3C
    FUN_807BFD88(r3, r4); // bl 0x807BFD88
    *(0xc4 + r31) = r3; // stw @ 0x807D4E44
    r31 = *(0xc + r1); // lwz @ 0x807D4E48
    r0 = *(0x14 + r1); // lwz @ 0x807D4E4C
    return;
}