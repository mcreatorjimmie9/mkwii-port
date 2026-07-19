/* Function at 0x80603EC0, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80603EC0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80603ECC
    r31 = r3;
    FUN_8061DC28(); // bl 0x8061DC28
    r4 = r31 + 0x3c; // 0x80603ED8
    FUN_80629FC4(r4); // bl 0x80629FC4
    r0 = *(0x14 + r1); // lwz @ 0x80603EE0
    r31 = *(0xc + r1); // lwz @ 0x80603EE4
    return;
}