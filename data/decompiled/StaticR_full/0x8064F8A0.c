/* Function at 0x8064F8A0, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8064F8A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8064F8AC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8064F8B8
    r3 = r31 + 0x44; // 0x8064F8BC
    r4 = r4 + 0; // 0x8064F8C0
    *(0 + r31) = r4; // stw @ 0x8064F8C4
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* lis r7, 0 */ // 0x8064F8CC
    r6 = *(0 + r7); // lwzu @ 0x8064F8D0
    /* lis r4, 0 */ // 0x8064F8D4
    *(8 + r1) = r6; // stw @ 0x8064F8D8
    r5 = *(4 + r7); // lwz @ 0x8064F8DC
    r4 = r4 + 0; // 0x8064F8E0
    r0 = *(8 + r7); // lwz @ 0x8064F8E4
    r3 = r31 + 0x74; // 0x8064F8E8
    *(0xc + r1) = r5; // stw @ 0x8064F8EC
    *(0x10 + r1) = r0; // stw @ 0x8064F8F0
    *(0x5c + r31) = r4; // stw @ 0x8064F8F4
    *(0x60 + r31) = r31; // stw @ 0x8064F8F8
    *(0x64 + r31) = r6; // stw @ 0x8064F8FC
    *(0x68 + r31) = r5; // stw @ 0x8064F900
    *(0x6c + r31) = r0; // stw @ 0x8064F904
    FUN_805ABCB4(); // bl 0x805ABCB4
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x8064F910
    r0 = *(0x24 + r1); // lwz @ 0x8064F914
    return;
}