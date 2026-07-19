/* Function at 0x8065D930, size=344 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8065D930(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8065D944
    *(0x34 + r1) = r29; // stw @ 0x8065D948
    /* lis r29, 0 */ // 0x8065D94C
    r29 = r29 + 0; // 0x8065D950
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x8065D958
    /* lis r7, 0 */ // 0x8065D95C
    r3 = r3 + 0; // 0x8065D960
    *(0 + r31) = r3; // stw @ 0x8065D964
    r3 = r29 + 0xe0; // 0x8065D968
    /* lis r4, 0 */ // 0x8065D96C
    r30 = *(0xe0 + r29); // lwz @ 0x8065D970
    r7 = r7 + 0; // 0x8065D974
    r12 = *(4 + r3); // lwz @ 0x8065D978
    r6 = r29 + 0xec; // 0x8065D97C
    r11 = *(8 + r3); // lwz @ 0x8065D980
    r5 = r29 + 0xf8; // 0x8065D984
    *(0x54 + r31) = r11; // stw @ 0x8065D988
    r4 = r4 + 0; // 0x8065D98C
    r3 = r31 + 0x80; // 0x8065D990
    *(0x44 + r31) = r7; // stw @ 0x8065D994
    *(0x48 + r31) = r31; // stw @ 0x8065D998
    *(0x4c + r31) = r30; // stw @ 0x8065D99C
    *(0x50 + r31) = r12; // stw @ 0x8065D9A0
    r10 = *(0xec + r29); // lwz @ 0x8065D9A4
    r9 = *(4 + r6); // lwz @ 0x8065D9A8
    r8 = *(8 + r6); // lwz @ 0x8065D9AC
    *(0x68 + r31) = r8; // stw @ 0x8065D9B0
    *(0x58 + r31) = r7; // stw @ 0x8065D9B4
    *(0x5c + r31) = r31; // stw @ 0x8065D9B8
    *(0x60 + r31) = r10; // stw @ 0x8065D9BC
    *(0x64 + r31) = r9; // stw @ 0x8065D9C0
    r7 = *(0xf8 + r29); // lwz @ 0x8065D9C4
    r6 = *(4 + r5); // lwz @ 0x8065D9C8
    r0 = *(8 + r5); // lwz @ 0x8065D9CC
    *(0x20 + r1) = r30; // stw @ 0x8065D9D0
    *(0x24 + r1) = r12; // stw @ 0x8065D9D4
    *(0x28 + r1) = r11; // stw @ 0x8065D9D8
    *(0x14 + r1) = r10; // stw @ 0x8065D9DC
    *(0x18 + r1) = r9; // stw @ 0x8065D9E0
    *(0x1c + r1) = r8; // stw @ 0x8065D9E4
    *(8 + r1) = r7; // stw @ 0x8065D9E8
    *(0xc + r1) = r6; // stw @ 0x8065D9EC
    *(0x10 + r1) = r0; // stw @ 0x8065D9F0
    *(0x6c + r31) = r4; // stw @ 0x8065D9F4
    *(0x70 + r31) = r31; // stw @ 0x8065D9F8
    *(0x74 + r31) = r7; // stw @ 0x8065D9FC
    *(0x78 + r31) = r6; // stw @ 0x8065DA00
    *(0x7c + r31) = r0; // stw @ 0x8065DA04
    FUN_80669F74(); // bl 0x80669F74
    r29 = r31 + 0x2a4; // 0x8065DA0C
    r3 = r29;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8065DA18
    r3 = r31 + 0x418; // 0x8065DA1C
    r4 = r4 + 0; // 0x8065DA20
    *(0 + r29) = r4; // stw @ 0x8065DA24
    FUN_806497A4(r4, r3, r4); // bl 0x806497A4
    r3 = r31 + 0x66c; // 0x8065DA2C
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r29 = r31 + 0x8c0; // 0x8065DA34
    r3 = r29;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x8065DA40
    /* lis r5, 0 */ // 0x8065DA44
    /* lfs f0, 0(r3) */ // 0x8065DA48
    r5 = r5 + 0; // 0x8065DA4C
    /* li r4, 0x7d1 */ // 0x8065DA50
    /* li r0, 0 */ // 0x8065DA54
    *(0 + r29) = r5; // stw @ 0x8065DA58
    r3 = r31;
    *(0x254 + r29) = r4; // stw @ 0x8065DA60
    *(0x258 + r29) = r0; // stw @ 0x8065DA64
    /* stfs f0, 0x25c(r29) */ // 0x8065DA68
    r31 = *(0x3c + r1); // lwz @ 0x8065DA6C
    r30 = *(0x38 + r1); // lwz @ 0x8065DA70
    r29 = *(0x34 + r1); // lwz @ 0x8065DA74
    r0 = *(0x44 + r1); // lwz @ 0x8065DA78
    return;
}