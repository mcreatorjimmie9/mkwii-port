/* Function at 0x807BB448, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807BB448(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BB454
    r31 = r3;
    FUN_807B7144(); // bl 0x807B7144
    r3 = *(0x94 + r31); // lwz @ 0x807BB460
    FUN_807B65B4(); // bl 0x807B65B4
    r0 = *(0x14 + r1); // lwz @ 0x807BB468
    r31 = *(0xc + r1); // lwz @ 0x807BB46C
    return;
}