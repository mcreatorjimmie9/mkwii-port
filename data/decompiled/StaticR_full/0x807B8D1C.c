/* Function at 0x807B8D1C, size=32 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B8D1C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807B8D28
    r31 = r3;
    r4 = *(0x38 + r3); // lwz @ 0x807B8D30
    r3 = *(0 + r4); // lwz @ 0x807B8D34
    FUN_8061DA88(); // bl 0x8061DA88
}