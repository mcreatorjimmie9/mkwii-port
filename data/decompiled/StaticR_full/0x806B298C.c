/* Function at 0x806B298C, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806B298C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806B2998
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806B29A4
    r3 = r31 + 0x4c; // 0x806B29A8
    r4 = r4 + 0; // 0x806B29AC
    *(0 + r31) = r4; // stw @ 0x806B29B0
    FUN_80669F74(r4, r3, r4); // bl 0x80669F74
    /* lis r3, 0 */ // 0x806B29B8
    r10 = *(0 + r3); // lwzu @ 0x806B29BC
    /* lis r8, 0 */ // 0x806B29C0
    /* lis r4, 0 */ // 0x806B29C4
    r9 = *(4 + r3); // lwz @ 0x806B29C8
    /* lis r5, 0 */ // 0x806B29CC
    r0 = *(8 + r3); // lwz @ 0x806B29D0
    r8 = r8 + 0; // 0x806B29D4
    *(8 + r1) = r10; // stw @ 0x806B29D8
    r3 = r31 + 0x294; // 0x806B29DC
    r4 = r4 + 0; // 0x806B29E0
    r5 = r5 + 0; // 0x806B29E4
    *(0xc + r1) = r9; // stw @ 0x806B29E8
    /* li r6, 0x254 */ // 0x806B29EC
    /* li r7, 2 */ // 0x806B29F0
    *(0x10 + r1) = r0; // stw @ 0x806B29F4
    *(0x280 + r31) = r8; // stw @ 0x806B29F8
    *(0x284 + r31) = r31; // stw @ 0x806B29FC
    *(0x288 + r31) = r10; // stw @ 0x806B2A00
    *(0x28c + r31) = r9; // stw @ 0x806B2A04
    *(0x290 + r31) = r0; // stw @ 0x806B2A08
    FUN_805E3430(); // bl 0x805E3430
}