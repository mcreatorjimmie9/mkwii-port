/* Function at 0x8061D650, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8061D650(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8061D664
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8061D66C
    r29 = r3;
    if (==) goto 0x0x8061d73c;
    /* lis r4, 0 */ // 0x8061D678
    /* li r31, 0 */ // 0x8061D67C
    r4 = r4 + 0; // 0x8061D680
    *(0 + r3) = r4; // stw @ 0x8061D684
    /* b 0x8061d6b8 */ // 0x8061D688
    r3 = *(0x20 + r29); // lwz @ 0x8061D68C
    r0 = r31 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x8061D694
    if (==) goto 0x0x8061d6b4;
    r12 = *(0xc + r3); // lwz @ 0x8061D6A0
    /* li r4, 1 */ // 0x8061D6A4
    r12 = *(8 + r12); // lwz @ 0x8061D6A8
    /* mtctr r12 */ // 0x8061D6AC
    /* bctrl  */ // 0x8061D6B0
    r31 = r31 + 1; // 0x8061D6B4
    r0 = *(0x24 + r29); // lbz @ 0x8061D6B8
    /* clrlwi r3, r31, 0x18 */ // 0x8061D6BC
    if (<) goto 0x0x8061d68c;
    r3 = *(0x20 + r29); // lwz @ 0x8061D6C8
    FUN_805E3430(); // bl 0x805E3430
    /* addic. r31, r29, 0x10 */ // 0x8061D6D0
    if (==) goto 0x0x8061d720;
    /* lis r3, 0 */ // 0x8061D6D8
    /* lis r4, 0 */ // 0x8061D6DC
    r3 = r3 + 0; // 0x8061D6E0
    *(0 + r31) = r3; // stw @ 0x8061D6E4
    r3 = *(0 + r4); // lwz @ 0x8061D6E8
}