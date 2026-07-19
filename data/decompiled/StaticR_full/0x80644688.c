/* Function at 0x80644688, size=88 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80644688(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80644690
    *(0x44 + r1) = r0; // stw @ 0x80644694
    r5 = r5 + 0; // 0x8064469C
    *(0x3c + r1) = r31; // stw @ 0x806446A0
    r31 = r3;
    FUN_805EF7B0(r4, r5); // bl 0x805EF7B0
    /* lis r3, 0 */ // 0x806446AC
    r0 = *(0x14 + r31); // lbz @ 0x806446B0
    r3 = *(0 + r3); // lwz @ 0x806446B4
    /* slwi r0, r0, 2 */ // 0x806446BC
    r3 = *(0x68 + r3); // lwz @ 0x806446C0
    /* lwzx r3, r3, r0 */ // 0x806446C4
    FUN_80738B44(r4); // bl 0x80738B44
    r0 = *(0x44 + r1); // lwz @ 0x806446CC
    r31 = *(0x3c + r1); // lwz @ 0x806446D0
    return;
}