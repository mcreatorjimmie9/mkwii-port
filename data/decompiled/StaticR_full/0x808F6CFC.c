/* Function at 0x808F6CFC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808F6CFC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F6D08
    r31 = r3;
    FUN_808F8DD8(); // bl 0x808F8DD8
    /* lis r3, 0 */ // 0x808F6D14
    /* li r0, 0 */ // 0x808F6D18
    r3 = r3 + 0; // 0x808F6D1C
    *(0 + r31) = r3; // stw @ 0x808F6D20
    r3 = r31;
    *(0x2c + r31) = r0; // stw @ 0x808F6D28
    r31 = *(0xc + r1); // lwz @ 0x808F6D2C
    r0 = *(0x14 + r1); // lwz @ 0x808F6D30
    return;
}