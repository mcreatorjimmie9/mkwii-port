/* Function at 0x8068787C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8068787C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80687888
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80687894
    r3 = r31 + 0x44; // 0x80687898
    r4 = r4 + 0; // 0x8068789C
    *(0 + r31) = r4; // stw @ 0x806878A0
    FUN_806A0418(r4, r3, r4); // bl 0x806A0418
    r3 = r31 + 0x1b8; // 0x806878A8
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    r3 = r31 + 0x32c; // 0x806878B0
    FUN_80668134(r3, r3); // bl 0x80668134
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806878BC
    r0 = *(0x14 + r1); // lwz @ 0x806878C0
    return;
}