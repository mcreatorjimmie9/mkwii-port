/* Function at 0x806189C0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806189C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806189D4
    r30 = r3;
    FUN_8061969C(); // bl 0x8061969C
    r3 = r30;
    FUN_80618A14(r3); // bl 0x80618A14
    r3 = *(0x64 + r30); // lwz @ 0x806189E8
    FUN_8061ADEC(r3); // bl 0x8061ADEC
    r3 = r30;
    r4 = r31;
    FUN_80618D10(r3, r4); // bl 0x80618D10
    r0 = *(0x14 + r1); // lwz @ 0x806189FC
    r31 = *(0xc + r1); // lwz @ 0x80618A00
    r30 = *(8 + r1); // lwz @ 0x80618A04
    return;
}