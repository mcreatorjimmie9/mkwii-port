/* Function at 0x805B59B4, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805B59B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805B59BC
    /* mulli r0, r4, 0x18 */ // 0x805B59C0
    r3 = r3 + r0; // 0x805B59C4
    r3 = r3 + 8; // 0x805B59C8
    FUN_805E3430(r3); // bl 0x805E3430
}