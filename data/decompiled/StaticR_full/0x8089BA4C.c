/* Function at 0x8089BA4C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BA4C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089BA58
    r31 = r3;
    FUN_808A0090(); // bl 0x808A0090
    /* lis r3, 0 */ // 0x8089BA64
    /* li r0, 2 */ // 0x8089BA68
    r3 = r3 + 0; // 0x8089BA6C
    *(0 + r31) = r3; // stw @ 0x8089BA70
    r3 = r31;
    *(4 + r31) = r0; // stw @ 0x8089BA78
    r31 = *(0xc + r1); // lwz @ 0x8089BA7C
    r0 = *(0x14 + r1); // lwz @ 0x8089BA80
    return;
}