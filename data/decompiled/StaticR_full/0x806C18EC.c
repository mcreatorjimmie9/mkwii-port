/* Function at 0x806C18EC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806C18EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C18F8
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806C1904
    r3 = r31 + 0x44; // 0x806C1908
    r4 = r4 + 0; // 0x806C190C
    *(0 + r31) = r4; // stw @ 0x806C1910
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x54; // 0x806C1918
    FUN_80677558(r3, r4, r3); // bl 0x80677558
    r3 = r31 + 0x1c8; // 0x806C1920
    FUN_8064EE0C(r3, r3); // bl 0x8064EE0C
    r3 = r31 + 0x344; // 0x806C1928
    FUN_8064ED04(r3, r3, r3); // bl 0x8064ED04
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806C1934
    r0 = *(0x14 + r1); // lwz @ 0x806C1938
    return;
}