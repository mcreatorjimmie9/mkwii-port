/* Function at 0x806A8064, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A8064(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806A8070
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806A807C
    /* lis r4, 0 */ // 0x806A8080
    r3 = r3 + 0; // 0x806A8084
    *(0 + r31) = r3; // stw @ 0x806A8088
    /* lis r7, 0 */ // 0x806A808C
    r4 = r4 + 0; // 0x806A8090
    r6 = *(0 + r7); // lwzu @ 0x806A8094
    r3 = r31 + 0x5c; // 0x806A8098
    *(8 + r1) = r6; // stw @ 0x806A809C
    r5 = *(4 + r7); // lwz @ 0x806A80A0
    r0 = *(8 + r7); // lwz @ 0x806A80A4
    *(0xc + r1) = r5; // stw @ 0x806A80A8
    *(0x10 + r1) = r0; // stw @ 0x806A80AC
    *(0x44 + r31) = r4; // stw @ 0x806A80B0
    *(0x48 + r31) = r31; // stw @ 0x806A80B4
    *(0x4c + r31) = r6; // stw @ 0x806A80B8
    *(0x50 + r31) = r5; // stw @ 0x806A80BC
    *(0x54 + r31) = r0; // stw @ 0x806A80C0
    FUN_80668134(); // bl 0x80668134
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806A80CC
    r0 = *(0x24 + r1); // lwz @ 0x806A80D0
    return;
}