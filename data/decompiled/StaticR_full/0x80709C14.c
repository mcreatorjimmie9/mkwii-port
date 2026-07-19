/* Function at 0x80709C14, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80709C14(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80709C20
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80709C2C
    r3 = r31 + 0x44; // 0x80709C30
    r4 = r4 + 0; // 0x80709C34
    *(0 + r31) = r4; // stw @ 0x80709C38
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x68; // 0x80709C40
    FUN_806C9C48(r3, r4, r3); // bl 0x806C9C48
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80709C4C
    r0 = *(0x14 + r1); // lwz @ 0x80709C50
    return;
}