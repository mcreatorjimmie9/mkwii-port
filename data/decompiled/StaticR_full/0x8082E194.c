/* Function at 0x8082E194, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082E194(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8082E1A0
    r31 = r3;
    r3 = *(0x134 + r3); // lwz @ 0x8082E1A8
    FUN_80842ECC(); // bl 0x80842ECC
    r0 = *(0x78 + r31); // lwz @ 0x8082E1B0
    r0 = r0 | 0x10; // 0x8082E1B4
    *(0x78 + r31) = r0; // stw @ 0x8082E1B8
    r31 = *(0xc + r1); // lwz @ 0x8082E1BC
    r0 = *(0x14 + r1); // lwz @ 0x8082E1C0
    return;
}