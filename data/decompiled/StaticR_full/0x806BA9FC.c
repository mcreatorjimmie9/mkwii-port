/* Function at 0x806BA9FC, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806BA9FC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806BAA08
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806BAA14
    /* lis r4, 0 */ // 0x806BAA18
    r3 = r3 + 0; // 0x806BAA1C
    *(0 + r31) = r3; // stw @ 0x806BAA20
    /* lis r7, 0 */ // 0x806BAA24
    r4 = r4 + 0; // 0x806BAA28
    r6 = *(0 + r7); // lwzu @ 0x806BAA2C
    r3 = r31 + 0x58; // 0x806BAA30
    *(8 + r1) = r6; // stw @ 0x806BAA34
    r5 = *(4 + r7); // lwz @ 0x806BAA38
    r0 = *(8 + r7); // lwz @ 0x806BAA3C
    *(0xc + r1) = r5; // stw @ 0x806BAA40
    *(0x10 + r1) = r0; // stw @ 0x806BAA44
    *(0x44 + r31) = r4; // stw @ 0x806BAA48
    *(0x48 + r31) = r31; // stw @ 0x806BAA4C
    *(0x4c + r31) = r6; // stw @ 0x806BAA50
    *(0x50 + r31) = r5; // stw @ 0x806BAA54
    *(0x54 + r31) = r0; // stw @ 0x806BAA58
    FUN_8066880C(); // bl 0x8066880C
    r3 = r31 + 0x19c; // 0x806BAA60
    FUN_806A0418(r3); // bl 0x806A0418
    r3 = r31 + 0x32c; // 0x806BAA68
    FUN_806CA404(r3, r3); // bl 0x806CA404
    r3 = r31 + 0x4b8; // 0x806BAA70
    FUN_806C9C48(r3, r3, r3); // bl 0x806C9C48
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806BAA7C
    r0 = *(0x24 + r1); // lwz @ 0x806BAA80
    return;
}