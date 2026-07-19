/* Function at 0x80647D44, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80647D44(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80647D50
    r31 = r3;
    FUN_80633FD4(); // bl 0x80633FD4
    /* lis r3, 0 */ // 0x80647D5C
    /* li r0, 1 */ // 0x80647D60
    r3 = r3 + 0; // 0x80647D64
    *(0 + r31) = r3; // stw @ 0x80647D68
    r3 = r31;
    *(0x4c + r31) = r0; // stw @ 0x80647D70
    r31 = *(0xc + r1); // lwz @ 0x80647D74
    r0 = *(0x14 + r1); // lwz @ 0x80647D78
    return;
}