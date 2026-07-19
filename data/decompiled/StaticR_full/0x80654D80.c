/* Function at 0x80654D80, size=84 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80654D80(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0xd8 + r1) = r30; // stw @ 0x80654D94
    r30 = r3;
    *(0x174 + r3) = r4; // stw @ 0x80654D9C
    FUN_80654ECC(r3); // bl 0x80654ECC
    *(8 + r1) = r31; // stw @ 0x80654DA8
    r3 = r30;
    /* li r4, 0x13f1 */ // 0x80654DB4
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x80654DBC
    r31 = *(0xdc + r1); // lwz @ 0x80654DC0
    r30 = *(0xd8 + r1); // lwz @ 0x80654DC4
    return;
}