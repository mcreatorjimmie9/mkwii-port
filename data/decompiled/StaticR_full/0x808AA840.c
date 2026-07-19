/* Function at 0x808AA840, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808AA840(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x808AA854
    *(0x14 + r1) = r29; // stw @ 0x808AA858
    r29 = r3;
    /* b 0x808aa8a4 */ // 0x808AA860
    r3 = *(0x1c + r29); // lwz @ 0x808AA864
    r31 = r30 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r31 */ // 0x808AA86C
    if (==) goto 0x0x808aa8a0;
    r12 = *(0 + r3); // lwz @ 0x808AA878
    r12 = *(0xc + r12); // lwz @ 0x808AA87C
    /* mtctr r12 */ // 0x808AA880
    /* bctrl  */ // 0x808AA884
    r3 = *(0x1c + r29); // lwz @ 0x808AA888
    /* lwzx r3, r3, r31 */ // 0x808AA88C
    r12 = *(0 + r3); // lwz @ 0x808AA890
    r12 = *(0x1c + r12); // lwz @ 0x808AA894
    /* mtctr r12 */ // 0x808AA898
    /* bctrl  */ // 0x808AA89C
    r30 = r30 + 1; // 0x808AA8A0
    r0 = *(0x18 + r29); // lhz @ 0x808AA8A4
    /* clrlwi r3, r30, 0x10 */ // 0x808AA8A8
    if (<) goto 0x0x808aa864;
    /* lis r3, 0 */ // 0x808AA8B4
    r3 = *(0 + r3); // lwz @ 0x808AA8B8
    FUN_8089C7F4(r3); // bl 0x8089C7F4
    /* lis r3, 0 */ // 0x808AA8C0
    r3 = *(0 + r3); // lwz @ 0x808AA8C4
    if (==) goto 0x0x808aa8d4;
    FUN_808F9648(r3); // bl 0x808F9648
    /* lis r3, 0 */ // 0x808AA8D4
    r3 = *(0 + r3); // lwz @ 0x808AA8D8
    if (==) goto 0x0x808aa8e8;
    FUN_8090332C(r3); // bl 0x8090332C
    /* lis r3, 0 */ // 0x808AA8E8
    r3 = *(0 + r3); // lwz @ 0x808AA8EC
    if (==) goto 0x0x808aa8fc;
    FUN_8091C190(r3); // bl 0x8091C190
    r0 = *(0x24 + r1); // lwz @ 0x808AA8FC
    r31 = *(0x1c + r1); // lwz @ 0x808AA900
    r30 = *(0x18 + r1); // lwz @ 0x808AA904
    r29 = *(0x14 + r1); // lwz @ 0x808AA908
    return;
}