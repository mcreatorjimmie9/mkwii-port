/* Function at 0x806B2E00, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806B2E00(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x806B2E10
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806B2E1C
    r3 = r30 + 0x4c; // 0x806B2E20
    r4 = r4 + 0; // 0x806B2E24
    *(0 + r30) = r4; // stw @ 0x806B2E28
    FUN_80669F74(r4, r3, r4); // bl 0x80669F74
    /* lis r3, 0 */ // 0x806B2E30
    r10 = *(0 + r3); // lwzu @ 0x806B2E34
    /* lis r8, 0 */ // 0x806B2E38
    /* lis r4, 0 */ // 0x806B2E3C
    r9 = *(4 + r3); // lwz @ 0x806B2E40
    /* lis r5, 0 */ // 0x806B2E44
    r0 = *(8 + r3); // lwz @ 0x806B2E48
    r8 = r8 + 0; // 0x806B2E4C
    *(8 + r1) = r10; // stw @ 0x806B2E50
    r3 = r30 + 0x294; // 0x806B2E54
    r4 = r4 + 0; // 0x806B2E58
    r5 = r5 + 0; // 0x806B2E5C
    *(0xc + r1) = r9; // stw @ 0x806B2E60
    /* li r6, 0x254 */ // 0x806B2E64
    /* li r7, 2 */ // 0x806B2E68
    *(0x10 + r1) = r0; // stw @ 0x806B2E6C
    *(0x280 + r30) = r8; // stw @ 0x806B2E70
    *(0x284 + r30) = r30; // stw @ 0x806B2E74
    *(0x288 + r30) = r10; // stw @ 0x806B2E78
    *(0x28c + r30) = r9; // stw @ 0x806B2E7C
    *(0x290 + r30) = r0; // stw @ 0x806B2E80
    FUN_805E3430(); // bl 0x805E3430
}