/* Function at 0x80621DD8, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80621DD8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80621DE4
    r31 = r3;
    FUN_80621E10(); // bl 0x80621E10
    /* li r0, -1 */ // 0x80621DF0
    *(0x90 + r31) = r0; // stw @ 0x80621DF4
    *(0x94 + r31) = r0; // sth @ 0x80621DF8
    r31 = *(0xc + r1); // lwz @ 0x80621DFC
    r0 = *(0x14 + r1); // lwz @ 0x80621E00
    return;
}