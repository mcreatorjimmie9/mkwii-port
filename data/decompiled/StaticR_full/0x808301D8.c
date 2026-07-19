/* Function at 0x808301D8, size=88 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808301D8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x808301E0
    /* li r7, 0x10b */ // 0x808301E4
    *(0x44 + r1) = r0; // stw @ 0x808301E8
    r6 = r6 + 0; // 0x808301EC
    /* li r8, 0 */ // 0x808301F0
    *(0x3c + r1) = r31; // stw @ 0x808301F4
    *(0x38 + r1) = r30; // stw @ 0x808301F8
    /* lis r30, 0 */ // 0x808301FC
    r4 = r30 + 0; // 0x80830200
    *(0x34 + r1) = r29; // stw @ 0x80830204
    r29 = r3;
    r5 = r4 + 5; // 0x8083020C
    FUN_8082AFF0(r4, r5); // bl 0x8082AFF0
    r5 = *(0x9c + r29); // lwz @ 0x80830214
    r4 = r30 + 0; // 0x80830218
    r0 = *(0xc + r5); // lwz @ 0x80830220
    r4 = r4 + 0xd; // 0x80830224
    *(0x24 + r1) = r0; // stw @ 0x80830228
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}