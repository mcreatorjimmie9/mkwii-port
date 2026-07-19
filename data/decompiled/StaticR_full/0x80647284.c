/* Function at 0x80647284, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80647284(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80647290
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x80647298
    if (==) goto 0x0x806472b4;
    r3 = *(0x14 + r3); // lwz @ 0x806472A4
    FUN_808E14C0(); // bl 0x808E14C0
    r3 = *(0x18 + r31); // lwz @ 0x806472AC
    FUN_808E3D10(); // bl 0x808E3D10
    r3 = *(0x1c + r31); // lwz @ 0x806472B4
    if (==) goto 0x0x806472c4;
    FUN_808E028C(); // bl 0x808E028C
    r0 = *(0x14 + r1); // lwz @ 0x806472C4
    r31 = *(0xc + r1); // lwz @ 0x806472C8
    return;
}