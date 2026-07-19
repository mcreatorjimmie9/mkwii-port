/* Function at 0x8067F828, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8067F828(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8067F838
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8067F840
    r30 = r3;
    if (==) goto 0x0x8067f870;
    if (==) goto 0x0x8067f884;
    if (==) goto 0x0x8067f898;
    if (==) goto 0x0x8067f8ac;
    if (==) goto 0x0x8067f8c0;
    /* b 0x8067f8cc */ // 0x8067F86C
    /* lis r3, 0 */ // 0x8067F870
    /* li r4, 0 */ // 0x8067F874
    r3 = *(0 + r3); // lwz @ 0x8067F878
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f8cc */ // 0x8067F880
    /* lis r3, 0 */ // 0x8067F884
    /* li r4, 1 */ // 0x8067F888
    r3 = *(0 + r3); // lwz @ 0x8067F88C
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f8cc */ // 0x8067F894
    /* lis r3, 0 */ // 0x8067F898
    /* li r4, 2 */ // 0x8067F89C
    r3 = *(0 + r3); // lwz @ 0x8067F8A0
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f8cc */ // 0x8067F8A8
    /* lis r3, 0 */ // 0x8067F8AC
    /* li r4, 3 */ // 0x8067F8B0
    r3 = *(0 + r3); // lwz @ 0x8067F8B4
    FUN_805B3E90(r3, r4); // bl 0x805B3E90
    /* b 0x8067f8cc */ // 0x8067F8BC
    /* lis r3, 0 */ // 0x8067F8C0
    r3 = *(0 + r3); // lwz @ 0x8067F8C4
    FUN_805B3AD8(r3); // bl 0x805B3AD8
    /* slwi r3, r31, 4 */ // 0x8067F8CC
    /* li r0, 0 */ // 0x8067F8D0
    r3 = r30 + r3; // 0x8067F8D4
    *(4 + r3) = r0; // stw @ 0x8067F8D8
    *(8 + r3) = r0; // stw @ 0x8067F8DC
    *(0xc + r3) = r0; // stw @ 0x8067F8E0
    *(0x10 + r3) = r0; // stw @ 0x8067F8E4
    r31 = *(0xc + r1); // lwz @ 0x8067F8E8
    r30 = *(8 + r1); // lwz @ 0x8067F8EC
    r0 = *(0x14 + r1); // lwz @ 0x8067F8F0
    return;
}